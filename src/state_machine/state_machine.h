#ifndef STATE_MACHINE_STATE_MACHINE_H_
#define STATE_MACHINE_STATE_MACHINE_H_

#include <memory>
#include "state.h"

namespace state_machine {

class StateMachine {
 public:
  StateMachine();
  void ChangeState(std::unique_ptr<State> new_state);
  void Update();

 private:
  std::unique_ptr<State> current_state_;
};

}  // namespace state_machine

#endif  // STATE_MACHINE_STATE_MACHINE_H_
