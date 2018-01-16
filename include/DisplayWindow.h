#ifndef DisplayWindow_H
#define DisplayWindow_H

/////////////////////////////////////////////
// Wrapper class for sfml renderwindow
/////////////////////////////////////////////

#include "Scene.h"
#include "State.h"
#include <SFML/Graphics.hpp>

class DisplayWindow : State
{

public:
	DisplayWindow(Scene* s);
	void run();
	~DisplayWindow();
	void paintObjects();

private:
	Scene *scene;
	sf::RenderWindow *window;

};


#endif
