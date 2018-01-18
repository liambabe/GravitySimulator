#include "Control/GameStateMachine.h"

GameStateMachine::GameStateMachine(State* s) {
	currentState = s;
}

GameStateMachine::~GameStateMachine() {
	delete currentState;
}