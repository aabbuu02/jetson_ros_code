// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_creator_msgs:msg/GraphCreatorState.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_STATE__BUILDER_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_creator_msgs/msg/detail/graph_creator_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_creator_msgs
{

namespace msg
{

namespace builder
{

class Init_GraphCreatorState_all_edges_locked
{
public:
  explicit Init_GraphCreatorState_all_edges_locked(::graph_creator_msgs::msg::GraphCreatorState & msg)
  : msg_(msg)
  {}
  ::graph_creator_msgs::msg::GraphCreatorState all_edges_locked(::graph_creator_msgs::msg::GraphCreatorState::_all_edges_locked_type arg)
  {
    msg_.all_edges_locked = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphCreatorState msg_;
};

class Init_GraphCreatorState_all_vertices_locked
{
public:
  explicit Init_GraphCreatorState_all_vertices_locked(::graph_creator_msgs::msg::GraphCreatorState & msg)
  : msg_(msg)
  {}
  Init_GraphCreatorState_all_edges_locked all_vertices_locked(::graph_creator_msgs::msg::GraphCreatorState::_all_vertices_locked_type arg)
  {
    msg_.all_vertices_locked = std::move(arg);
    return Init_GraphCreatorState_all_edges_locked(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphCreatorState msg_;
};

class Init_GraphCreatorState_edge_is_bidirectional
{
public:
  explicit Init_GraphCreatorState_edge_is_bidirectional(::graph_creator_msgs::msg::GraphCreatorState & msg)
  : msg_(msg)
  {}
  Init_GraphCreatorState_all_vertices_locked edge_is_bidirectional(::graph_creator_msgs::msg::GraphCreatorState::_edge_is_bidirectional_type arg)
  {
    msg_.edge_is_bidirectional = std::move(arg);
    return Init_GraphCreatorState_all_vertices_locked(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphCreatorState msg_;
};

class Init_GraphCreatorState_current_edge_type
{
public:
  explicit Init_GraphCreatorState_current_edge_type(::graph_creator_msgs::msg::GraphCreatorState & msg)
  : msg_(msg)
  {}
  Init_GraphCreatorState_edge_is_bidirectional current_edge_type(::graph_creator_msgs::msg::GraphCreatorState::_current_edge_type_type arg)
  {
    msg_.current_edge_type = std::move(arg);
    return Init_GraphCreatorState_edge_is_bidirectional(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphCreatorState msg_;
};

class Init_GraphCreatorState_graph_mode
{
public:
  Init_GraphCreatorState_graph_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraphCreatorState_current_edge_type graph_mode(::graph_creator_msgs::msg::GraphCreatorState::_graph_mode_type arg)
  {
    msg_.graph_mode = std::move(arg);
    return Init_GraphCreatorState_current_edge_type(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphCreatorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::msg::GraphCreatorState>()
{
  return graph_creator_msgs::msg::builder::Init_GraphCreatorState_graph_mode();
}

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_STATE__BUILDER_HPP_
