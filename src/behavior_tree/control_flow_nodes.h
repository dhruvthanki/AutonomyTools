#ifndef BEHAVIOR_TREE_CONTROL_FLOW_NODES_H_
#define BEHAVIOR_TREE_CONTROL_FLOW_NODES_H_

#include "behavior_node.h"

namespace behavior_tree {

class Sequence : public BehaviorNode {
 public:
  void AddChild(BehaviorNodePtr child) {
    children_.push_back(child);
  }

  NodeStatus Tick() override {
    for (auto& child : children_) {
      auto status = child->Tick();
      if (status != NodeStatus::SUCCESS) {
        return status;
      }
    }
    return NodeStatus::SUCCESS;
  }

 private:
  std::vector<BehaviorNodePtr> children_;
};

class Fallback : public BehaviorNode {
 public:
  void AddChild(BehaviorNodePtr child) {
    children_.push_back(child);
  }

  NodeStatus Tick() override {
    for (auto& child : children_) {
      auto status = child->Tick();
      if (status != NodeStatus::FAILURE) {
        return status;
      }
    }
    return NodeStatus::FAILURE;
  }

 private:
  std::vector<BehaviorNodePtr> children_;
};

class Parallel : public BehaviorNode {
 public:
  explicit Parallel(int success_threshold) 
      : success_threshold_(success_threshold) {}

  void AddChild(BehaviorNodePtr child) {
    children_.push_back(child);
  }

  NodeStatus Tick() override {
    int success_count = 0, failure_count = 0;
    for (auto& child : children_) {
      auto status = child->Tick();
      if (status == NodeStatus::SUCCESS) {
        success_count++;
      } else if (status == NodeStatus::FAILURE) {
        failure_count++;
      }
      if (success_count >= success_threshold_) {
        return NodeStatus::SUCCESS;
      }
      if (failure_count > (children_.size() - success_threshold_)) {
        return NodeStatus::FAILURE;
      }
    }
    return NodeStatus::RUNNING;
  }

 private:
  int success_threshold_;
  std::vector<BehaviorNodePtr> children_;
};

class Decorator : public BehaviorNode {
 public:
  explicit Decorator(BehaviorNodePtr child) : child_(child) {}

 protected:
  BehaviorNodePtr child_;
};

}  // namespace behavior_tree

#endif  // BEHAVIOR_TREE_CONTROL_FLOW_NODES_H_
