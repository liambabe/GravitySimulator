#ifndef Button_H
#define Button_H

#include <SFML/Graphics.hpp>
#include <utility>
#include "GUI/Menus/ButtonActions.hpp"

class Button : public sf::Drawable
{

public:
	Button(std::string text, sf::Texture& i, sf::Texture& c);
	void setLocation(sf::Vector2f loc);
	sf::Vector2f getLocation();
	bool isClicked(sf::Vector2f &mouseLoc);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	std::string getText() const;
	void reset();
	bool getClickedBool();
	void addButtons(Button b);
	void setAction(std::string type);


private:
	std::string text;
	sf::Sprite idle;
	sf::Sprite clicked;
	sf::Vector2f location;
	std::unique_ptr<sf::Sprite> currentSprite;
	bool clickedBool;
	std::unique_ptr<ButtonAction> action;

};


#endif
