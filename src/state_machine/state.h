#ifndef STATE_MACHINE_STATE_H_
#define STATE_MACHINE_STATE_H_

namespace state_machine {

class StateMachine;

class State {
 public:
  virtual ~State() = default;
  virtual void Enter(StateMachine* state_machine) = 0;
  virtual void Execute(StateMachine* state_machine) = 0;
  virtual void Exit(StateMachine* state_machine) = 0;
};

}  // namespace state_machine

#endif  // STATE_MACHINE_STATE_H_
