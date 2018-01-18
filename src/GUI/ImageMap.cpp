#include "GUI/ImageMap.h"
#include <iostream>

using namespace std;

ImageMap::ImageMap() {
	loadImages();
}

sf::Texture& ImageMap::getImage(string name) {
	return images.find(name)->second;
}

void ImageMap::loadImages() {
	sf::Texture loadedImage;
	if(!loadedImage.loadFromFile("img/Buttons/GreyLongIdle.png")) { 
		std::cout << "img load failed: GreyLongIdle.png\n";} else {
			images.insert(pair<string, sf::Texture>(string("GreyLongIdle"), loadedImage));
		}
	if(!loadedImage.loadFromFile("img/Buttons/GreyLongClick.png")) {
		std::cout << "img load failed: GreyLongClick.png\n";} else {
			images.insert(pair<string, sf::Texture>(string("GreyLongClick"), loadedImage));
		}

}

