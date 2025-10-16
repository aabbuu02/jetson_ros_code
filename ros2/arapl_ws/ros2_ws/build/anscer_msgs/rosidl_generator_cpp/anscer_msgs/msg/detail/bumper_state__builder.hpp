// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/BumperState.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__BUMPER_STATE__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__BUMPER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/bumper_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_BumperState_bumper_feedback
{
public:
  Init_BumperState_bumper_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::msg::BumperState bumper_feedback(::anscer_msgs::msg::BumperState::_bumper_feedback_type arg)
  {
    msg_.bumper_feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::BumperState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::BumperState>()
{
  return anscer_msgs::msg::builder::Init_BumperState_bumper_feedback();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__BUMPER_STATE__BUILDER_HPP_
