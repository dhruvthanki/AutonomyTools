#include "state_machine.h"

namespace state_machine {

StateMachine::StateMachine() : current_state_(nullptr) {}

void StateMachine::ChangeState(std::unique_ptr<State> new_state) {
  if (current_state_) {
    current_state_->Exit(this);
  }
  current_state_ = std::move(new_state);
  if (current_state_) {
    current_state_->Enter(this);
  }
}

void StateMachine::Update() {
  if (current_state_) {
    current_state_->Execute(this);
  }
}

}  // namespace state_machine
