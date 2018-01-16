#ifndef GameStateMachine_H
#define GameStateMachine_H

#include "State.h"

class GameStateMachine {

public:
	GameStateMachine(State* s);
	~GameStateMachine();


private:
	bool isRunning;
	State* currentState;

};


#endif