#ifndef MainMenu_H
#define MainMenu_H

/////////////////////////////////////////////
// Wrapper class for sfml renderwindow
/////////////////////////////////////////////

#include "GUI/Scenes/Scene.h"
#include "GUI/ImageMap.h"
#include "GUI/Menus/Menu.hpp"
#include <memory>
#include <SFML/Graphics.hpp>

class MainMenu : public Menu
{

public:
	MainMenu(std::shared_ptr<ImageMap> i);
	void paintButtons(sf::RenderWindow &App);
	void checkButtons(sf::Vector2f mousePos);
	void releaseButtons();
	void addButton(std::shared_ptr<Button> b);
	int Run(sf::RenderWindow &App);

private:
	std::shared_ptr<ImageMap> images;

};


#endif
