#ifndef GameStateMachine_H
#define GameStateMachine_H

#include "Control/State.h"
#include <vector>
#include <utility>
#include <memory>

class GameStateMachine {

public:
	GameStateMachine();
	~GameStateMachine();
	void registerState(std::shared_ptr<State> s);
	std::shared_ptr<State> getCurrentState();


private:
	bool isRunning;
	std::vector<std::shared_ptr<State>> stateList;


};


#endif