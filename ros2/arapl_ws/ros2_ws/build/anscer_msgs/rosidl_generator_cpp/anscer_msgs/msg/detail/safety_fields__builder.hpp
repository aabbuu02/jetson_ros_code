// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/SafetyFields.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELDS__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/safety_fields__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_SafetyFields_safety
{
public:
  explicit Init_SafetyFields_safety(::anscer_msgs::msg::SafetyFields & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::SafetyFields safety(::anscer_msgs::msg::SafetyFields::_safety_type arg)
  {
    msg_.safety = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::SafetyFields msg_;
};

class Init_SafetyFields_warning
{
public:
  Init_SafetyFields_warning()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyFields_safety warning(::anscer_msgs::msg::SafetyFields::_warning_type arg)
  {
    msg_.warning = std::move(arg);
    return Init_SafetyFields_safety(msg_);
  }

private:
  ::anscer_msgs::msg::SafetyFields msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::SafetyFields>()
{
  return anscer_msgs::msg::builder::Init_SafetyFields_warning();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELDS__BUILDER_HPP_
