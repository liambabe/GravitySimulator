#include "Control/GameStateMachine.h"

GameStateMachine::GameStateMachine() {
}

GameStateMachine::~GameStateMachine() {
}

void GameStateMachine::registerState(std::shared_ptr<State> s) {
	stateList.push_back(s);
}

std::shared_ptr<State> GameStateMachine::getCurrentState() {
	return stateList.at(0); //TODO update this
}