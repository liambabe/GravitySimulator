#include "GUI/DisplayWindow.h"
#include <iostream>
#include "GUI/ButtonFactory.h"
#include "GUI/Button.h"
#include <utility>

DisplayWindow::DisplayWindow(Scene* s, ImageMap i) {
	scene = s;
    images = i;
	window = new sf::RenderWindow(sf::VideoMode(200, 200), "SFML works!", sf::Style::Titlebar | sf::Style::Close);
	window->setVerticalSyncEnabled(true);
}

DisplayWindow::~DisplayWindow() {
	delete window;
 	delete scene;
}

void DisplayWindow::run() {
    ButtonFactory* factory;

    factory = new ButtonFactory(images);
    buttonList.push_back(std::unique_ptr<Button> (factory->createLongButton("", "grey")));

	sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    std::cout << scene->getObjects().at(0)->getMass() << "\n";

    //main game loop
	while (window->isOpen()) {

		sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                window->close();
            } else if (event.type == sf::Event::MouseButtonPressed) {
                sf::Vector2f mousePos = window->mapPixelToCoords(sf::Mouse::getPosition(*window));
                if (buttonList.at(0)->isClicked(mousePos)) {
                    std::cout << "Button Pressed\n";
                }
            }

        }

        window->clear();
        paintObjects();
        paintButtons();
        window->display();

	}
}

void DisplayWindow::paintObjects() {
	//drawloop
	for (int i = 0; i < scene->getObjects().size(); i++) {
		window->draw(*scene->getObjects().at(i)->getShape());
	}
}

void DisplayWindow::paintButtons() {
    for (int i = 0; i < buttonList.size(); i++) {
        window->draw(*buttonList.at(i));
    }
}
