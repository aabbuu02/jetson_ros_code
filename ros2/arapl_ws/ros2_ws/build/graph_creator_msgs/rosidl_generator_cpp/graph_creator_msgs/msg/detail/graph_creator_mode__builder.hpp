// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_creator_msgs:msg/GraphCreatorMode.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_MODE__BUILDER_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_creator_msgs/msg/detail/graph_creator_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_creator_msgs
{

namespace msg
{

namespace builder
{

class Init_GraphCreatorMode_mode
{
public:
  Init_GraphCreatorMode_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::graph_creator_msgs::msg::GraphCreatorMode mode(::graph_creator_msgs::msg::GraphCreatorMode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphCreatorMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::msg::GraphCreatorMode>()
{
  return graph_creator_msgs::msg::builder::Init_GraphCreatorMode_mode();
}

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_MODE__BUILDER_HPP_
