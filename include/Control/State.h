#ifndef State_H
#define State_H

#include <SFML/Graphics.hpp>

class State {

public:
	virtual int Run(sf::RenderWindow &App) = 0;

};


#endif