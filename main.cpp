#include "GUI/ImageMap.h"
#include "GUI/Menus/MainMenu.hpp"
#include "GUI/ButtonFactory.h"
#include "App.h"
#include <memory>

int main()
{

	std::shared_ptr<ImageMap> im = std::make_shared<ImageMap>();
	ButtonFactory bt(im);
	GameStateMachine sm;

	sm.registerState(std::make_shared<MainMenu>(im));

	App app(im, sm);
	app.run();

	return 0;
}
