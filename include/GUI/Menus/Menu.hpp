#ifndef MENU_H
#define MENU_H

#include <utility>
#include "GUI/Button.h"
#include "Control/State.h"

class Menu : public State
{

public:
	virtual void paintButtons() = 0;

protected:
	std::vector<std::unique_ptr<Button>> buttonList;


};

#endif