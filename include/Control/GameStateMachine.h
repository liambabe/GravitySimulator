#ifndef GameStateMachine_H
#define GameStateMachine_H

#include "Control/State.h"

class GameStateMachine {

public:
	GameStateMachine(State* s);
	~GameStateMachine();


private:
	bool isRunning;
	State* currentState;

};


#endif