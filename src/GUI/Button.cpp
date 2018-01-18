#include "GUI/Button.h"

Button::Button(std::string text, sf::Texture& i, sf::Texture& c) {
	text = text;
	idle.setTexture(i);
	clicked.setTexture(c);
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

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(idle, states);
}


std::string Button::getText() const {
	return text;
}