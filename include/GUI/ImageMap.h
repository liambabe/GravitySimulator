#ifndef ImageMap_H
#define ImageMap_H

#include <SFML/Graphics.hpp>

class ImageMap
{

public:
	ImageMap();
	sf::Image getImage(std::string name);

private:
	void loadImages();
	std::map<std::string, sf::Image> images;

};


#endif