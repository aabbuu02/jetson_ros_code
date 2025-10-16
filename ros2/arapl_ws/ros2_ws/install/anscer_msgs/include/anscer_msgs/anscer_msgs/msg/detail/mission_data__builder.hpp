// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/MissionData.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MISSION_DATA__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MISSION_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/mission_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionData_mission_count
{
public:
  explicit Init_MissionData_mission_count(::anscer_msgs::msg::MissionData & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::MissionData mission_count(::anscer_msgs::msg::MissionData::_mission_count_type arg)
  {
    msg_.mission_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::MissionData msg_;
};

class Init_MissionData_success_count
{
public:
  explicit Init_MissionData_success_count(::anscer_msgs::msg::MissionData & msg)
  : msg_(msg)
  {}
  Init_MissionData_mission_count success_count(::anscer_msgs::msg::MissionData::_success_count_type arg)
  {
    msg_.success_count = std::move(arg);
    return Init_MissionData_mission_count(msg_);
  }

private:
  ::anscer_msgs::msg::MissionData msg_;
};

class Init_MissionData_mission_name
{
public:
  Init_MissionData_mission_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionData_success_count mission_name(::anscer_msgs::msg::MissionData::_mission_name_type arg)
  {
    msg_.mission_name = std::move(arg);
    return Init_MissionData_success_count(msg_);
  }

private:
  ::anscer_msgs::msg::MissionData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::MissionData>()
{
  return anscer_msgs::msg::builder::Init_MissionData_mission_name();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__MISSION_DATA__BUILDER_HPP_
