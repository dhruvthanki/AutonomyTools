#include "state_machine.h"
#include "state.h"

StateMachine::StateMachine() : current_state_(nullptr) {}

void StateMachine::changeState(State* new_state) {
  if (current_state_) {
    current_state_->exit(this);
  }
  current_state_ = new_state;
  current_state_->enter(this);
}

void StateMachine::update() {
  if (current_state_) {
    current_state_->execute(this);
  }
}
