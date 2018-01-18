#ifndef Button_H
#define Button_H

#include <SFML/Graphics.hpp>


class Button
{

public:
	Button(std::string text, sf::Image* idle, sf::Image* clicked);
	void setLocation(sf::Vector2f loc);
	sf::Vector2f getLocation();
	bool isClicked(sf::Vector2f &mouseLoc);

private:
	std::string text;
	sf::Sprite idle;
	sf::Sprite clicked;
	sf::Vector2f location;

};


#endif
