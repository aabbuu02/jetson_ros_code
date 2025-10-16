// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/SafetyField.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELD__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/safety_field__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_SafetyField_is_rear
{
public:
  explicit Init_SafetyField_is_rear(::anscer_msgs::msg::SafetyField & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::SafetyField is_rear(::anscer_msgs::msg::SafetyField::_is_rear_type arg)
  {
    msg_.is_rear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::SafetyField msg_;
};

class Init_SafetyField_is_front
{
public:
  explicit Init_SafetyField_is_front(::anscer_msgs::msg::SafetyField & msg)
  : msg_(msg)
  {}
  Init_SafetyField_is_rear is_front(::anscer_msgs::msg::SafetyField::_is_front_type arg)
  {
    msg_.is_front = std::move(arg);
    return Init_SafetyField_is_rear(msg_);
  }

private:
  ::anscer_msgs::msg::SafetyField msg_;
};

class Init_SafetyField_field_id
{
public:
  Init_SafetyField_field_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyField_is_front field_id(::anscer_msgs::msg::SafetyField::_field_id_type arg)
  {
    msg_.field_id = std::move(arg);
    return Init_SafetyField_is_front(msg_);
  }

private:
  ::anscer_msgs::msg::SafetyField msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::SafetyField>()
{
  return anscer_msgs::msg::builder::Init_SafetyField_field_id();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__SAFETY_FIELD__BUILDER_HPP_
