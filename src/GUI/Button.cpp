#include "GUI/Button.h"

Button::Button(std::string text, sf::Texture& i, sf::Texture& c) {
	text = text;
	idle.setTexture(i);
	clicked.setTexture(c);
	currentSprite = std::make_unique<sf::Sprite>(idle);
	clickedBool = false;
	setAction("start");
}

void Button::setLocation(sf::Vector2f loc) {
	location = loc;
	idle.setPosition(location);
	loc = sf::Vector2f(loc.x, loc.y+4);
	clicked.setPosition(loc);
}

sf::Vector2f Button::getLocation() {
	return location;
}

bool Button::isClicked(sf::Vector2f &mouseLoc) {
	if (currentSprite->getGlobalBounds().contains(mouseLoc)) {
		currentSprite = std::make_unique<sf::Sprite>(clicked);
		action->actionPreformed();
		clickedBool = true;
		return true;
	} else {
		currentSprite = std::make_unique<sf::Sprite>(idle);
		return false;
	}
}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(*currentSprite, states);
}


std::string Button::getText() const {
	return text;
}

void Button::reset() {
	clickedBool = false;
	currentSprite = std::make_unique<sf::Sprite>(idle);
}

bool Button::getClickedBool() {
	return clickedBool;
}


void Button::setAction(std::string type) {
	if (type == "start") {
		action = std::make_unique<StartAction>();
	}
}
