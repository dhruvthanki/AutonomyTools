#include "states/walking_state.h"
#include <iostream>

namespace state_machine {

void WalkingState::Enter(StateMachine* state_machine) {
  std::cout << "Entering Walking State" << std::endl;
  // Initialization code for walking state
}

void WalkingState::Execute(StateMachine* state_machine) {
  std::cout << "Executing Walking State" << std::endl;
  // Code to perform walking
}

void WalkingState::Exit(StateMachine* state_machine) {
  std::cout << "Exiting Walking State" << std::endl;
  // Cleanup code for walking state
}

}  // namespace state_machine
