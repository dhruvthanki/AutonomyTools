#include "moving_state.h"
#include <iostream>

void MovingState::enter(StateMachine* state_machine) {
    std::cout << "Entering Moving State" << std::endl;
}

void MovingState::execute(StateMachine* state_machine) {
    std::cout << "Executing Moving State" << std::endl;
    // Perform moving logic here
}

void MovingState::exit(StateMachine* state_machine) {
    std::cout << "Exiting Moving State" << std::endl;
}
