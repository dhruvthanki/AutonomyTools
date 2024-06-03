#include "states/standing_state.h"
#include <iostream>

namespace state_machine {

void StandingState::Enter(StateMachine* state_machine) {
  std::cout << "Entering Standing State" << std::endl;
  // Initialization code for standing state
}

void StandingState::Execute(StateMachine* state_machine) {
  std::cout << "Executing Standing State" << std::endl;
  // Code to maintain standing balance
}

void StandingState::Exit(StateMachine* state_machine) {
  std::cout << "Exiting Standing State" << std::endl;
  // Cleanup code for standing state
}

}  // namespace state_machine
