#include "GUI/ButtonFactory.h"


ButtonFactory::ButtonFactory(std::shared_ptr<ImageMap> i) {
	images = i;
}


std::shared_ptr<Button> ButtonFactory::createLongButton(std::string text, std::string colour) {
	if (colour == "grey") {
		return std::make_shared<Button>(text, images->getImage("GreyLongIdle"), images->getImage("GreyLongClick"));
	}
}

