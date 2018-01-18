#ifndef App_H
#define App_H

#include "GUI/Scenes/Scene.h"
#include "Control/State.h"
#include <SFML/Graphics.hpp>

class App
{

public:
	App(State* s);
	~App();
	void run();

private:
	sf::RenderWindow *window;

};


#endif
