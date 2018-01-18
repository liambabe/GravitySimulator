#ifndef DisplayWindow_H
#define DisplayWindow_H

/////////////////////////////////////////////
// Wrapper class for sfml renderwindow
/////////////////////////////////////////////

#include "GUI/Scenes/Scene.h"
#include "Control/State.h"
#include "GUI/ImageMap.h"
#include <SFML/Graphics.hpp>

class DisplayWindow : State
{

public:
	DisplayWindow(Scene* s, ImageMap i);
	void run();
	~DisplayWindow();
	void paintObjects();

private:
	Scene *scene;
	sf::RenderWindow *window;
	ImageMap images;

};


#endif
