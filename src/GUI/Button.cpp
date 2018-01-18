#include "GUI/Button.h"

Button::Button(std::string text, sf::Image& idle, sf::Image& clicked) {
	text = text;
	//idle = idle;
	//clicked = clicked;
}

void Button::setLocation(sf::Vector2f loc) {
	location = loc;
}

sf::Vector2f Button::getLocation() {
	return location;
}


bool Button::isClicked(sf::Vector2f &mouseLoc) {
	if (idle.getGlobalBounds().contains(mouseLoc)) {
		return true;
	} else {
		return false;
	}
}
