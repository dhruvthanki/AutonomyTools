#ifndef BEHAVIOR_TREE_WALK_ACTION_H_
#define BEHAVIOR_TREE_WALK_ACTION_H_

#include "../behavior_tree/action_node.h"
#include <iostream>

namespace behavior_tree {

class WalkAction : public ActionNode {
 public:
  NodeStatus Tick() override {
    std::cout << "Walking..." << std::endl;
    // Insert robot-specific code to walk
    return NodeStatus::RUNNING;  // Assuming walking can be a continuous action
  }
};

}  // namespace behavior_tree

#endif  // BEHAVIOR_TREE_WALK_ACTION_H_
