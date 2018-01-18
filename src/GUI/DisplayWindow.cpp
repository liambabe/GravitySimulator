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
    std::unique_ptr<Button> button (factory->createLongButton("", "gray"));
    //Button *button = new Button("", images.getImage("GreyLongIdle"), images.getImage("GreyLongClicked"));



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
            	std::cout << "Button Pressed\n";
            }

        }

        window->clear();
        std::cout << "hi\n";
        std::cout << button->getText() << "\n"; 
                std::cout << "hi\n";

        window->draw(*button);
        window->display();

	}
}

void DisplayWindow::paintObjects() {
	//drawloop
	for (int i = 0; i < scene->getObjects().size(); i++) {
		window->draw(*scene->getObjects().at(i)->getShape());
	}
}
