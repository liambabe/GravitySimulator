#ifndef DisplayWindow_H
#define DisplayWindow_H

/////////////////////////////////////////////
// Wrapper class for sfml renderwindow
/////////////////////////////////////////////

#include "Scene.h"
#include <SFML/Graphics.hpp>

class DisplayWindow
{

public:
	DisplayWindow(Scene s);
	void run();
	~DisplayWindow();

private:
	Scene scene;
	sf::RenderWindow *window;

};


#endif
