// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lift_action:msg/LiftFeedback.idl
// generated code does not contain a copyright notice

#ifndef LIFT_ACTION__MSG__DETAIL__LIFT_FEEDBACK__BUILDER_HPP_
#define LIFT_ACTION__MSG__DETAIL__LIFT_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lift_action/msg/detail/lift_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lift_action
{

namespace msg
{

namespace builder
{

class Init_LiftFeedback_fail_status
{
public:
  explicit Init_LiftFeedback_fail_status(::lift_action::msg::LiftFeedback & msg)
  : msg_(msg)
  {}
  ::lift_action::msg::LiftFeedback fail_status(::lift_action::msg::LiftFeedback::_fail_status_type arg)
  {
    msg_.fail_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lift_action::msg::LiftFeedback msg_;
};

class Init_LiftFeedback_status
{
public:
  explicit Init_LiftFeedback_status(::lift_action::msg::LiftFeedback & msg)
  : msg_(msg)
  {}
  Init_LiftFeedback_fail_status status(::lift_action::msg::LiftFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LiftFeedback_fail_status(msg_);
  }

private:
  ::lift_action::msg::LiftFeedback msg_;
};

class Init_LiftFeedback_action
{
public:
  explicit Init_LiftFeedback_action(::lift_action::msg::LiftFeedback & msg)
  : msg_(msg)
  {}
  Init_LiftFeedback_status action(::lift_action::msg::LiftFeedback::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_LiftFeedback_status(msg_);
  }

private:
  ::lift_action::msg::LiftFeedback msg_;
};

class Init_LiftFeedback_acr_shelf
{
public:
  explicit Init_LiftFeedback_acr_shelf(::lift_action::msg::LiftFeedback & msg)
  : msg_(msg)
  {}
  Init_LiftFeedback_action acr_shelf(::lift_action::msg::LiftFeedback::_acr_shelf_type arg)
  {
    msg_.acr_shelf = std::move(arg);
    return Init_LiftFeedback_action(msg_);
  }

private:
  ::lift_action::msg::LiftFeedback msg_;
};

class Init_LiftFeedback_unique_id
{
public:
  Init_LiftFeedback_unique_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftFeedback_acr_shelf unique_id(::lift_action::msg::LiftFeedback::_unique_id_type arg)
  {
    msg_.unique_id = std::move(arg);
    return Init_LiftFeedback_acr_shelf(msg_);
  }

private:
  ::lift_action::msg::LiftFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lift_action::msg::LiftFeedback>()
{
  return lift_action::msg::builder::Init_LiftFeedback_unique_id();
}

}  // namespace lift_action

#endif  // LIFT_ACTION__MSG__DETAIL__LIFT_FEEDBACK__BUILDER_HPP_
