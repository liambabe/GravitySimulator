#ifndef MainMenu_H
#define MainMenu_H

#include "GUI/ImageMap.h"
#include "GUI/Menus/Menu.hpp"
#include <memory>
#include <SFML/Graphics.hpp>

class MainMenu : public Menu
{

public:
	MainMenu(std::shared_ptr<ImageMap> i);
	int Run(sf::RenderWindow &App);

private:
	std::shared_ptr<ImageMap> images;

};


#endif
