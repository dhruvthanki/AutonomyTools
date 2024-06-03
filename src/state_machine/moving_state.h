#ifndef MOVING_STATE_H
#define MOVING_STATE_H

#include "state.h"
#include "state_machine.h"

class MovingState : public State {
public:
    void enter(StateMachine* state_machine) override;
    void execute(StateMachine* state_machine) override;
    void exit(StateMachine* state_machine) override;
};

#endif // MOVING_STATE_H
