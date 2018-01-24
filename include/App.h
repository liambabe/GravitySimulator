#ifndef App_H
#define App_H

#include "GUI/Scenes/Scene.h"
#include "Control/State.h"
#include "GUI/ImageMap.h"
#include "Control/GameStateMachine.h"
#include <SFML/Graphics.hpp>
#include <memory>
#include <utility>

class App
{

public:
	App(std::shared_ptr<ImageMap> i, GameStateMachine s);
	void run();

private:
	std::shared_ptr<sf::RenderWindow> window;
	std::unique_ptr<GameStateMachine> stateMachine;
	std::shared_ptr<ImageMap> im;


};


#endif
