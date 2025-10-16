// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msgs:msg/Property.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__PROPERTY__BUILDER_HPP_
#define GRAPH_MSGS__MSG__DETAIL__PROPERTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_msgs/msg/detail/property__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_msgs
{

namespace msg
{

namespace builder
{

class Init_Property_value
{
public:
  explicit Init_Property_value(::graph_msgs::msg::Property & msg)
  : msg_(msg)
  {}
  ::graph_msgs::msg::Property value(::graph_msgs::msg::Property::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msgs::msg::Property msg_;
};

class Init_Property_key
{
public:
  Init_Property_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Property_value key(::graph_msgs::msg::Property::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_Property_value(msg_);
  }

private:
  ::graph_msgs::msg::Property msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msgs::msg::Property>()
{
  return graph_msgs::msg::builder::Init_Property_key();
}

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__MSG__DETAIL__PROPERTY__BUILDER_HPP_
