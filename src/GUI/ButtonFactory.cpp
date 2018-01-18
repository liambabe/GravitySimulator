#include "GUI/ButtonFactory.h"

ButtonFactory::ButtonFactory(ImageMap i) {
	images = i;
}


Button *ButtonFactory::createLongButton(std::string text, std::string colour) {
	if (colour == "grey") {
		return new Button(text, images.getImage("GreyLongIdle"), images.getImage("GreyLongClicked"));
	}
}

