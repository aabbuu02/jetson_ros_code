// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_Waypoint_pose
{
public:
  explicit Init_Waypoint_pose(::anscer_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::Waypoint pose(::anscer_msgs::msg::Waypoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_id
{
public:
  explicit Init_Waypoint_id(::anscer_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_pose id(::anscer_msgs::msg::Waypoint::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Waypoint_pose(msg_);
  }

private:
  ::anscer_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_type
{
public:
  explicit Init_Waypoint_type(::anscer_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_id type(::anscer_msgs::msg::Waypoint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Waypoint_id(msg_);
  }

private:
  ::anscer_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_map_name
{
public:
  explicit Init_Waypoint_map_name(::anscer_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_type map_name(::anscer_msgs::msg::Waypoint::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_Waypoint_type(msg_);
  }

private:
  ::anscer_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_name
{
public:
  Init_Waypoint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_map_name name(::anscer_msgs::msg::Waypoint::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Waypoint_map_name(msg_);
  }

private:
  ::anscer_msgs::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::Waypoint>()
{
  return anscer_msgs::msg::builder::Init_Waypoint_name();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
