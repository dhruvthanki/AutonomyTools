#ifndef STATE_H
#define STATE_H

class StateMachine;

class State {
public:
    virtual ~State() {}

    virtual void enter(StateMachine* state_machine) = 0;
    virtual void execute(StateMachine* state_machine) = 0;
    virtual void exit(StateMachine* state_machine) = 0;
};

#endif // STATE_H
