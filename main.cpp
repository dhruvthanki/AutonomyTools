#include <memory>  // For std::unique_ptr

#include "state_machine.h"
#include "states/standing_state.h"
#include "states/walking_state.h"
#include "states/manipulating_state.h"

int main() {
  state_machine::StateMachine state_machine;

  state_machine.ChangeState(std::make_unique<state_machine::StandingState>());
  state_machine.Update();

  state_machine.ChangeState(std::make_unique<state_machine::WalkingState>());
  state_machine.Update();

  state_machine.ChangeState(std::make_unique<state_machine::ManipulatingState>());
  state_machine.Update();

  return 0;
}
