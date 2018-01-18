#ifndef ImageMap_H
#define ImageMap_H

#include <SFML/Graphics.hpp>

class ImageMap
{

public:
	Imagemap();
	static sf::Image getImage(std::string name);

private:
	void loadImages();
	static std::map<std::string, sf::Image> images;

};


#endif