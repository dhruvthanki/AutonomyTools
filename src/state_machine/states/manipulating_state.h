#ifndef STATE_MACHINE_STATES_MANIPULATING_STATE_H_
#define STATE_MACHINE_STATES_MANIPULATING_STATE_H_

#include "state.h"

namespace state_machine {

class ManipulatingState : public State {
 public:
  void Enter(StateMachine* state_machine) override;
  void Execute(StateMachine* state_machine) override;
  void Exit(StateMachine* state_machine) override;
};

}  // namespace state_machine

#endif  // STATE_MACHINE_STATES_MANIPULATING_STATE_H_
