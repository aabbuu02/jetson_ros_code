// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qr_mission_scheduler:msg/GoalMsg.idl
// generated code does not contain a copyright notice

#ifndef QR_MISSION_SCHEDULER__MSG__DETAIL__GOAL_MSG__BUILDER_HPP_
#define QR_MISSION_SCHEDULER__MSG__DETAIL__GOAL_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qr_mission_scheduler/msg/detail/goal_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qr_mission_scheduler
{

namespace msg
{

namespace builder
{

class Init_GoalMsg_destination
{
public:
  explicit Init_GoalMsg_destination(::qr_mission_scheduler::msg::GoalMsg & msg)
  : msg_(msg)
  {}
  ::qr_mission_scheduler::msg::GoalMsg destination(::qr_mission_scheduler::msg::GoalMsg::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qr_mission_scheduler::msg::GoalMsg msg_;
};

class Init_GoalMsg_source
{
public:
  explicit Init_GoalMsg_source(::qr_mission_scheduler::msg::GoalMsg & msg)
  : msg_(msg)
  {}
  Init_GoalMsg_destination source(::qr_mission_scheduler::msg::GoalMsg::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_GoalMsg_destination(msg_);
  }

private:
  ::qr_mission_scheduler::msg::GoalMsg msg_;
};

class Init_GoalMsg_goal_type
{
public:
  Init_GoalMsg_goal_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalMsg_source goal_type(::qr_mission_scheduler::msg::GoalMsg::_goal_type_type arg)
  {
    msg_.goal_type = std::move(arg);
    return Init_GoalMsg_source(msg_);
  }

private:
  ::qr_mission_scheduler::msg::GoalMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::qr_mission_scheduler::msg::GoalMsg>()
{
  return qr_mission_scheduler::msg::builder::Init_GoalMsg_goal_type();
}

}  // namespace qr_mission_scheduler

#endif  // QR_MISSION_SCHEDULER__MSG__DETAIL__GOAL_MSG__BUILDER_HPP_
