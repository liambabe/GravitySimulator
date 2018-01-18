#ifndef ButtonFactory_H
#define ButtonFactory_H

#include "GUI/Button.h"
#include "GUI/ImageMap.h"
#include <SFML/Graphics.hpp>

class ButtonFactory {

public:
	ButtonFactory(ImageMap i);
	Button* createLongButton(std::string text, std::string colour);

private:
	ImageMap images;

};






#endif