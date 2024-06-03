#include "idle_state.h"
#include <iostream>

void IdleState::enter(StateMachine* state_machine) {
    std::cout << "Entering Idle State" << std::endl;
}

void IdleState::execute(StateMachine* state_machine) {
    std::cout << "Executing Idle State" << std::endl;
    // Transition logic can be placed here
    // For example:
    // state_machine->changeState(new MovingState());
}

void IdleState::exit(StateMachine* state_machine) {
    std::cout << "Exiting Idle State" << std::endl;
}
