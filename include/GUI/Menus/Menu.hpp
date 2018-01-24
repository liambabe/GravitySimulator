#ifndef MENU_H
#define MENU_H

#include <utility>
#include "GUI/Button.h"
#include "Control/State.h"
#include <utility>
#include <memory>

class Menu : public State
{

public:
	void paintButtons(sf::RenderWindow &App);
	void releaseButtons();
	void checkButtons(sf::Vector2f mousePos);
	void addButton(std::shared_ptr<Button> b);

protected:
	std::vector<std::shared_ptr<Button>> buttonList;


};

#endif