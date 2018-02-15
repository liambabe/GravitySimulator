#include "GUI/Menus/ButtonActions.hpp"
#include <iostream>

void StartAction::actionPreformed() {
	std::cout << "hi ben\n";
}

void DefaultAction::actionPreformed() {
	std::cout << "Button Clicked\n";
}