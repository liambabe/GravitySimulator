#include "GUI/Menus/MainMenu.hpp"
#include <iostream>
#include "GUI/ButtonFactory.h"
#include "GUI/Button.h"
#include <utility>

MainMenu::MainMenu(std::shared_ptr<ImageMap> i) {
    images = i;
}

void MainMenu::paintButtons(sf::RenderWindow &App) {
    for (int i = 0; i < buttonList.size(); i++) {
        App.draw(*buttonList.at(i));
    }
}

void MainMenu::releaseButtons() {
    for (int i = 0; i < buttonList.size(); i++) {
        buttonList.at(i)->reset();
    }
}

void MainMenu::checkButtons(sf::Vector2f mousePos) {
    for (int i = 0; i < buttonList.size(); i++) {
        buttonList.at(i)->isClicked(mousePos);
    }
}

void MainMenu::addButton(std::shared_ptr<Button> b) {
    buttonList.push_back(b);
}

int MainMenu::Run(sf::RenderWindow &App) {

    bool running = true;

    ButtonFactory* factory;

    factory = new ButtonFactory(images);
    buttonList.push_back(std::shared_ptr<Button> (factory->createLongButton("", "grey")));

    buttonList.at(0)->setLocation(sf::Vector2f(10, 10));

    while (running) {
        sf::Event event;
        while (App.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                App.close(); 
                return 1;
            } 
            if (event.type == sf::Event::MouseButtonPressed) {
                sf::Vector2f mousePos = App.mapPixelToCoords(sf::Mouse::getPosition(App));
                buttonList.at(0)->isClicked(mousePos);
            } else if (event.type == sf::Event::MouseButtonReleased) {
                releaseButtons();
            }

        }

        App.clear();
        paintButtons(App);
        App.display();
    }

    return 0;
}


