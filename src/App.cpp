#include "App.h"

App::App(std::shared_ptr<ImageMap> i, GameStateMachine s) {
	window = std::make_shared<sf::RenderWindow>(sf::VideoMode(250, 250), "SFML works!", sf::Style::Titlebar | sf::Style::Close);
	window->setVerticalSyncEnabled(true);
	im = i;
	stateMachine = std::make_unique<GameStateMachine>(s);
}


void App::run() {
	int running = 0;

	while (running == 0) {
		running = stateMachine->getCurrentState()->Run(*window);
	}
}
