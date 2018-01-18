#include "GUI/ImageMap.h"
#include <iostream>

using namespace std;

ImageMap::ImageMap() {
	loadImages();
}

sf::Image& ImageMap::getImage(string name) {
	return images.find(name)->second;
}

void ImageMap::loadImages() {
	sf::Image loadedImage;
	if(!loadedImage.loadFromFile("img/Buttons/GreyLongIdle.png")) { 
		std::cout << "img load failed: GreyLongIdle.png\n";} else {
			images.insert(pair<string, sf::Image>(string("GreyLongIdle"), loadedImage));
		}
	if(!loadedImage.loadFromFile("img/Buttons/GreyLongClick.png")) {
		std::cout << "img load failed: GreyLongClick.png\n";} else {
			images.insert(pair<string, sf::Image>(string("GreyLongClick"), loadedImage));
		}

}

