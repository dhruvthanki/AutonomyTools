#ifndef BEHAVIOR_TREE_CONDITION_NODE_H_
#define BEHAVIOR_TREE_CONDITION_NODE_H_

#include "behavior_node.h"

namespace behavior_tree {

class ConditionNode : public BehaviorNode {
 public:
  NodeStatus Tick() override = 0;
};

}  // namespace behavior_tree

#endif  // BEHAVIOR_TREE_CONDITION_NODE_H_
