#include "DisplayWindow.h"
#include <iostream>

DisplayWindow::DisplayWindow(Scene* s) {
	scene = s;
	window = new sf::RenderWindow(sf::VideoMode(200, 200), "SFML works!", sf::Style::Titlebar | sf::Style::Close);
	window->setVerticalSyncEnabled(true);
}

DisplayWindow::~DisplayWindow() {
	delete window;
 	delete scene;
}

void DisplayWindow::run() {

	sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    std::cout << scene->getObjects().at(0)->getMass() << "\n";

    //main game loop
	while (window->isOpen()) {

		sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }

        window->clear();
        paintObjects();
        window->display();

	}
}

void DisplayWindow::paintObjects() {
	//drawloop
	for (int i = 0; i < scene->getObjects().size(); i++) {
		window->draw(*scene->getObjects().at(i)->getShape());
	}
}
