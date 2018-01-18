#ifndef ImageMap_H
#define ImageMap_H

#include <SFML/Graphics.hpp>

class ImageMap
{

public:
	ImageMap();
	sf::Texture& getImage(std::string name);

private:
	void loadImages();
	std::map<std::string, sf::Texture> images;

};


#endif