#include <iostream>

#include "state_machine/state_machine.h"
#include "src/state_machine/idle_state.h"
#include "src/state_machine/moving_state.h"
#include "behavior_tree/behavior_tree.h"

int main() {
    StateMachine state_machine;

    IdleState idle_state;
    MovingState moving_state;

    state_machine.changeState(&idle_state);
    state_machine.update();

    state_machine.changeState(&moving_state);
    state_machine.update();

    return 0;
}
