// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/mission_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionStatus_task_id
{
public:
  explicit Init_MissionStatus_task_id(::anscer_msgs::msg::MissionStatus & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::MissionStatus task_id(::anscer_msgs::msg::MissionStatus::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::MissionStatus msg_;
};

class Init_MissionStatus_mission_id
{
public:
  Init_MissionStatus_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionStatus_task_id mission_id(::anscer_msgs::msg::MissionStatus::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_MissionStatus_task_id(msg_);
  }

private:
  ::anscer_msgs::msg::MissionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::MissionStatus>()
{
  return anscer_msgs::msg::builder::Init_MissionStatus_mission_id();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__MISSION_STATUS__BUILDER_HPP_
