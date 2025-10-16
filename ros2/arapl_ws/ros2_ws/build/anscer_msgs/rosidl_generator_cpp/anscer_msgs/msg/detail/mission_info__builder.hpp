// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MISSION_INFO__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MISSION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/mission_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionInfo_mission_info
{
public:
  Init_MissionInfo_mission_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::msg::MissionInfo mission_info(::anscer_msgs::msg::MissionInfo::_mission_info_type arg)
  {
    msg_.mission_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::MissionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::MissionInfo>()
{
  return anscer_msgs::msg::builder::Init_MissionInfo_mission_info();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__MISSION_INFO__BUILDER_HPP_
