#ifndef BEHAVIOR_TREE_STAND_UP_ACTION_H_
#define BEHAVIOR_TREE_STAND_UP_ACTION_H_

#include "../behavior_tree/action_node.h"
#include <iostream>

namespace behavior_tree {

class StandUpAction : public ActionNode {
 public:
  NodeStatus Tick() override {
    std::cout << "Standing up..." << std::endl;
    // Insert robot-specific code to stand up
    return NodeStatus::SUCCESS;
  }
};

}  // namespace behavior_tree

#endif  // BEHAVIOR_TREE_STAND_UP_ACTION_H_
