// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_creator_msgs:msg/SelectedGraphElements.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__SELECTED_GRAPH_ELEMENTS__BUILDER_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__SELECTED_GRAPH_ELEMENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_creator_msgs/msg/detail/selected_graph_elements__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_creator_msgs
{

namespace msg
{

namespace builder
{

class Init_SelectedGraphElements_all_edges
{
public:
  explicit Init_SelectedGraphElements_all_edges(::graph_creator_msgs::msg::SelectedGraphElements & msg)
  : msg_(msg)
  {}
  ::graph_creator_msgs::msg::SelectedGraphElements all_edges(::graph_creator_msgs::msg::SelectedGraphElements::_all_edges_type arg)
  {
    msg_.all_edges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::msg::SelectedGraphElements msg_;
};

class Init_SelectedGraphElements_all_vertices
{
public:
  Init_SelectedGraphElements_all_vertices()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SelectedGraphElements_all_edges all_vertices(::graph_creator_msgs::msg::SelectedGraphElements::_all_vertices_type arg)
  {
    msg_.all_vertices = std::move(arg);
    return Init_SelectedGraphElements_all_edges(msg_);
  }

private:
  ::graph_creator_msgs::msg::SelectedGraphElements msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::msg::SelectedGraphElements>()
{
  return graph_creator_msgs::msg::builder::Init_SelectedGraphElements_all_vertices();
}

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__SELECTED_GRAPH_ELEMENTS__BUILDER_HPP_
