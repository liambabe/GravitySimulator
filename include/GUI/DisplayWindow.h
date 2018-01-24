#ifndef DisplayWindow_H
#define DisplayWindow_H

/////////////////////////////////////////////
// Wrapper class for sfml renderwindow
/////////////////////////////////////////////

#include "GUI/Scenes/Scene.h"
#include "GUI/ImageMap.h"
#include "GUI/Menus/Menu.hpp"
#include <SFML/Graphics.hpp>

class DisplayWindow : public Menu
{

public:
	DisplayWindow(Scene* s, ImageMap i);
	void run();
	~DisplayWindow();
	void paintObjects();
	void paintButtons();
	void releaseButtons();

private:
	Scene *scene;
	sf::RenderWindow *window;
	ImageMap images;

};


#endif
