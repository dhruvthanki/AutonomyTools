#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include "state.h"

class StateMachine {
public:
    StateMachine();

    void changeState(State* new_state);

    void update();

private:
    State* current_state_;
};

#endif // STATE_MACHINE_H
