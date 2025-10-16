// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qr_navigation:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#ifndef QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__BUILDER_HPP_
#define QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qr_navigation/msg/detail/goal_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qr_navigation
{

namespace msg
{

namespace builder
{

class Init_GoalMsg_operation
{
public:
  explicit Init_GoalMsg_operation(::qr_navigation::msg::GoalMsg & msg)
  : msg_(msg)
  {}
  ::qr_navigation::msg::GoalMsg operation(::qr_navigation::msg::GoalMsg::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_navigation::msg::GoalMsg msg_;
};

class Init_GoalMsg_goal
{
public:
  explicit Init_GoalMsg_goal(::qr_navigation::msg::GoalMsg & msg)
  : msg_(msg)
  {}
  Init_GoalMsg_operation goal(::qr_navigation::msg::GoalMsg::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_GoalMsg_operation(msg_);
  }

private:
  ::qr_navigation::msg::GoalMsg msg_;
};

class Init_GoalMsg_start
{
public:
  explicit Init_GoalMsg_start(::qr_navigation::msg::GoalMsg & msg)
  : msg_(msg)
  {}
  Init_GoalMsg_goal start(::qr_navigation::msg::GoalMsg::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_GoalMsg_goal(msg_);
  }

private:
  ::qr_navigation::msg::GoalMsg msg_;
};

class Init_GoalMsg_pose
{
public:
  Init_GoalMsg_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalMsg_start pose(::qr_navigation::msg::GoalMsg::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_GoalMsg_start(msg_);
  }

private:
  ::qr_navigation::msg::GoalMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_navigation::msg::GoalMsg>()
{
  return qr_navigation::msg::builder::Init_GoalMsg_pose();
}

}  // namespace qr_navigation

#endif  // QR_NAVIGATION__MSG__DETAIL__GOAL_MSG__BUILDER_HPP_
