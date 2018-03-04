#include "Control/GameStateMachine.h"
#include "iostream"

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

void GameStateMachine::changeState(std::string s) {
}

std::shared_ptr<State> GameStateMachine::getState(std::string s) {
	for (int i = 0; i < stateList.size(); i++) {
		if (stateList.at(i)->getName() == s) {
			std::cout << s << "\n";
		}
		
	}
}
