#ifndef BEHAVIOR_TREE_ACTION_NODE_H_
#define BEHAVIOR_TREE_ACTION_NODE_H_

#include "behavior_node.h"

namespace behavior_tree {

class ActionNode : public BehaviorNode {
 public:
  NodeStatus Tick() override = 0;
};

}  // namespace behavior_tree

#endif  // BEHAVIOR_TREE_ACTION_NODE_H_
