#ifndef ButtonFactory_H
#define ButtonFactory_H

#include "GUI/Button.h"
#include "GUI/ImageMap.h"
#include <SFML/Graphics.hpp>
#include <utility>
#include <memory>

class ButtonFactory {

public:
	ButtonFactory(std::shared_ptr<ImageMap> i);
	std::shared_ptr<Button> createLongButton(std::string text, std::string colour);

private:
	std::shared_ptr<ImageMap> images;

};






#endif