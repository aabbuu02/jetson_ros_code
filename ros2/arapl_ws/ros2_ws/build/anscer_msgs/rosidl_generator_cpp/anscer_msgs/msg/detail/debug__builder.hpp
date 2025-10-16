// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/Debug.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__DEBUG__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__DEBUG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/debug__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_Debug_right_rpm_feedback
{
public:
  explicit Init_Debug_right_rpm_feedback(::anscer_msgs::msg::Debug & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::Debug right_rpm_feedback(::anscer_msgs::msg::Debug::_right_rpm_feedback_type arg)
  {
    msg_.right_rpm_feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::Debug msg_;
};

class Init_Debug_left_rpm_feedback
{
public:
  explicit Init_Debug_left_rpm_feedback(::anscer_msgs::msg::Debug & msg)
  : msg_(msg)
  {}
  Init_Debug_right_rpm_feedback left_rpm_feedback(::anscer_msgs::msg::Debug::_left_rpm_feedback_type arg)
  {
    msg_.left_rpm_feedback = std::move(arg);
    return Init_Debug_right_rpm_feedback(msg_);
  }

private:
  ::anscer_msgs::msg::Debug msg_;
};

class Init_Debug_right_rpm_command
{
public:
  explicit Init_Debug_right_rpm_command(::anscer_msgs::msg::Debug & msg)
  : msg_(msg)
  {}
  Init_Debug_left_rpm_feedback right_rpm_command(::anscer_msgs::msg::Debug::_right_rpm_command_type arg)
  {
    msg_.right_rpm_command = std::move(arg);
    return Init_Debug_left_rpm_feedback(msg_);
  }

private:
  ::anscer_msgs::msg::Debug msg_;
};

class Init_Debug_left_rpm_command
{
public:
  Init_Debug_left_rpm_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Debug_right_rpm_command left_rpm_command(::anscer_msgs::msg::Debug::_left_rpm_command_type arg)
  {
    msg_.left_rpm_command = std::move(arg);
    return Init_Debug_right_rpm_command(msg_);
  }

private:
  ::anscer_msgs::msg::Debug msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::Debug>()
{
  return anscer_msgs::msg::builder::Init_Debug_left_rpm_command();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__DEBUG__BUILDER_HPP_
