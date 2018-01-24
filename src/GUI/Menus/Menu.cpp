#include "GUI/Menus/Menu.hpp"

void Menu::paintButtons(sf::RenderWindow &App) {
    for (int i = 0; i < buttonList.size(); i++) {
        App.draw(*buttonList.at(i));
    }
}

void Menu::releaseButtons() {
    for (int i = 0; i < buttonList.size(); i++) {
        buttonList.at(i)->reset();
    }
}

void Menu::checkButtons(sf::Vector2f mousePos) {
    for (int i = 0; i < buttonList.size(); i++) {
        buttonList.at(i)->isClicked(mousePos);
    }
}

void Menu::addButton(std::shared_ptr<Button> b) {
    buttonList.push_back(b);
}