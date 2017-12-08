#include "DisplayWindow.h"
#include <iostream>

DisplayWindow::DisplayWindow(Scene s) {
	scene = s;
	window = new sf::RenderWindow(sf::VideoMode(200, 200), "SFML works!");
	window->setVerticalSyncEnabled(true);
}


void DisplayWindow::run() {

	sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    std::cout << scene.getObjects().get(0).getMass() << "\n";

    //main game loop
	while (window->isOpen()) {

		sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }

        window->clear();
        window->draw(shape);
        window->display();

	}

}