#ifndef BEHAVIOR_TREE_BATTERY_CHECK_CONDITION_H_
#define BEHAVIOR_TREE_BATTERY_CHECK_CONDITION_H_

#include "../behavior_tree/condition_node.h"
#include <iostream>

namespace behavior_tree {

class BatteryCheckCondition : public ConditionNode {
 public:
  NodeStatus Tick() override {
    std::cout << "Checking battery status..." << std::endl;
    // Insert robot-specific code to check battery status
    bool battery_ok = true;  // Simulate battery status
    return battery_ok ? NodeStatus::SUCCESS : NodeStatus::FAILURE;
  }
};

}  // namespace behavior_tree

#endif  // BEHAVIOR_TREE_BATTERY_CHECK_CONDITION_H_
