#include "GUI/Menus/MainMenu.hpp"
#include "GUI/ButtonFactory.h"
#include "GUI/Button.h"
#include <utility>

MainMenu::MainMenu(std::shared_ptr<ImageMap> i) {
    images = i;
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


