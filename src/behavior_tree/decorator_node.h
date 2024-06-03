#ifndef BEHAVIOR_TREE_DECORATOR_NODE_H_
#define BEHAVIOR_TREE_DECORATOR_NODE_H_

#include "control_flow_nodes.h"

namespace behavior_tree {

class Inverter : public Decorator {
 public:
  explicit Inverter(BehaviorNodePtr child) : Decorator(child) {}

  NodeStatus Tick() override {
    auto status = child_->Tick();
    if (status == NodeStatus::SUCCESS) {
      return NodeStatus::FAILURE;
    } else if (status == NodeStatus::FAILURE) {
      return NodeStatus::SUCCESS;
    }
    return status;
  }
};

}  // namespace behavior_tree

#endif  // BEHAVIOR_TREE_DECORATOR_NODE_H_
