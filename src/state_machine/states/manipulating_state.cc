#include "states/manipulating_state.h"
#include <iostream>

namespace state_machine {

void ManipulatingState::Enter(StateMachine* state_machine) {
  std::cout << "Entering Manipulating State" << std::endl;
  // Initialization code for manipulating state
}

void ManipulatingState::Execute(StateMachine* state_machine) {
  std::cout << "Executing Manipulating State" << std::endl;
  // Code to perform manipulation tasks
}

void ManipulatingState::Exit(StateMachine* state_machine) {
  std::cout << "Exiting Manipulating State" << std::endl;
  // Cleanup code for manipulating state
}

}  // namespace state_machine
