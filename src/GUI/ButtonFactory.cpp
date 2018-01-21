#include "GUI/ButtonFactory.h"

ButtonFactory::ButtonFactory(ImageMap i) {
	images = i;
}


std::unique_ptr<Button> ButtonFactory::createLongButton(std::string text, std::string colour) {
	if (colour == "grey") {
		return std::make_unique<Button>(text, images.getImage("GreyLongIdle"), images.getImage("GreyLongClicked"));
	}
}

