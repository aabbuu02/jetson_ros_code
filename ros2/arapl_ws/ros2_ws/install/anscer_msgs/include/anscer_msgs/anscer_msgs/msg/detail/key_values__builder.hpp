// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/KeyValues.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__KEY_VALUES__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__KEY_VALUES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/key_values__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyValues_keyvalue
{
public:
  Init_KeyValues_keyvalue()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::msg::KeyValues keyvalue(::anscer_msgs::msg::KeyValues::_keyvalue_type arg)
  {
    msg_.keyvalue = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::KeyValues msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::KeyValues>()
{
  return anscer_msgs::msg::builder::Init_KeyValues_keyvalue();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__KEY_VALUES__BUILDER_HPP_
