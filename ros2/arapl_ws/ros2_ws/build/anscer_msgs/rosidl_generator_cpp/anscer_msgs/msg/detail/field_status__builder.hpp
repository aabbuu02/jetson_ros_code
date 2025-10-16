// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/FieldStatus.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__FIELD_STATUS__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__FIELD_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/field_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_FieldStatus_is_warning
{
public:
  explicit Init_FieldStatus_is_warning(::anscer_msgs::msg::FieldStatus & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::FieldStatus is_warning(::anscer_msgs::msg::FieldStatus::_is_warning_type arg)
  {
    msg_.is_warning = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::FieldStatus msg_;
};

class Init_FieldStatus_is_safety
{
public:
  explicit Init_FieldStatus_is_safety(::anscer_msgs::msg::FieldStatus & msg)
  : msg_(msg)
  {}
  Init_FieldStatus_is_warning is_safety(::anscer_msgs::msg::FieldStatus::_is_safety_type arg)
  {
    msg_.is_safety = std::move(arg);
    return Init_FieldStatus_is_warning(msg_);
  }

private:
  ::anscer_msgs::msg::FieldStatus msg_;
};

class Init_FieldStatus_direction
{
public:
  Init_FieldStatus_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FieldStatus_is_safety direction(::anscer_msgs::msg::FieldStatus::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_FieldStatus_is_safety(msg_);
  }

private:
  ::anscer_msgs::msg::FieldStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::FieldStatus>()
{
  return anscer_msgs::msg::builder::Init_FieldStatus_direction();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__FIELD_STATUS__BUILDER_HPP_
