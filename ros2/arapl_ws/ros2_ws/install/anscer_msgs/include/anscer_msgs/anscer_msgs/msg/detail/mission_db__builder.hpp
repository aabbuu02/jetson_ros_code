// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/MissionDB.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MISSION_DB__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MISSION_DB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/mission_db__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionDB_total_distance
{
public:
  explicit Init_MissionDB_total_distance(::anscer_msgs::msg::MissionDB & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::MissionDB total_distance(::anscer_msgs::msg::MissionDB::_total_distance_type arg)
  {
    msg_.total_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::MissionDB msg_;
};

class Init_MissionDB_current_distance
{
public:
  explicit Init_MissionDB_current_distance(::anscer_msgs::msg::MissionDB & msg)
  : msg_(msg)
  {}
  Init_MissionDB_total_distance current_distance(::anscer_msgs::msg::MissionDB::_current_distance_type arg)
  {
    msg_.current_distance = std::move(arg);
    return Init_MissionDB_total_distance(msg_);
  }

private:
  ::anscer_msgs::msg::MissionDB msg_;
};

class Init_MissionDB_timestamp
{
public:
  Init_MissionDB_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionDB_current_distance timestamp(::anscer_msgs::msg::MissionDB::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MissionDB_current_distance(msg_);
  }

private:
  ::anscer_msgs::msg::MissionDB msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::MissionDB>()
{
  return anscer_msgs::msg::builder::Init_MissionDB_timestamp();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__MISSION_DB__BUILDER_HPP_
