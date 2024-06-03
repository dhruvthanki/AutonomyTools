#ifndef BEHAVIOR_TREE_BEHAVIOR_NODE_H_
#define BEHAVIOR_TREE_BEHAVIOR_NODE_H_

#include <vector>
#include <memory>

namespace behavior_tree {

enum class NodeStatus {
  SUCCESS,
  FAILURE,
  RUNNING
};

class BehaviorNode {
 public:
  virtual ~BehaviorNode() = default;
  virtual NodeStatus Tick() = 0;
};

using BehaviorNodePtr = std::shared_ptr<BehaviorNode>;

}  // namespace behavior_tree

#endif  // BEHAVIOR_TREE_BEHAVIOR_NODE_H_
