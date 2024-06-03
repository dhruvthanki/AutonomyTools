#ifndef IDLE_STATE_H
#define IDLE_STATE_H

#include "state.h"
#include "state_machine.h"

class IdleState : public State {
public:
    void enter(StateMachine* state_machine) override;
    void execute(StateMachine* state_machine) override;
    void exit(StateMachine* state_machine) override;
};

#endif // IDLE_STATE_H
