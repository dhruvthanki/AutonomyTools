#include <iostream>
#include <memory>

#include "control_flow_nodes.h"
#include "behaviors/stand_up_action.h"
#include "behaviors/walk_action.h"
#include "behaviors/battery_check_condition.h"

using namespace behavior_tree;

int main() {
  auto root = std::make_shared<Sequence>();

  auto battery_check = std::make_shared<BatteryCheckCondition>();
  auto stand_up = std::make_shared<StandUpAction>();
  auto walk = std::make_shared<WalkAction>();

  root->AddChild(battery_check);
  root->AddChild(stand_up);
  root->AddChild(walk);

  while (root->Tick() == NodeStatus::RUNNING) {
    // Simulate ticking in a loop
  }

  return 0;
}
