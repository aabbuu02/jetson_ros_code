// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/WaypointArray.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__WAYPOINT_ARRAY__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__WAYPOINT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/waypoint_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_WaypointArray_pose
{
public:
  explicit Init_WaypointArray_pose(::anscer_msgs::msg::WaypointArray & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::WaypointArray pose(::anscer_msgs::msg::WaypointArray::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::WaypointArray msg_;
};

class Init_WaypointArray_map_name
{
public:
  explicit Init_WaypointArray_map_name(::anscer_msgs::msg::WaypointArray & msg)
  : msg_(msg)
  {}
  Init_WaypointArray_pose map_name(::anscer_msgs::msg::WaypointArray::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_WaypointArray_pose(msg_);
  }

private:
  ::anscer_msgs::msg::WaypointArray msg_;
};

class Init_WaypointArray_name
{
public:
  Init_WaypointArray_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointArray_map_name name(::anscer_msgs::msg::WaypointArray::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_WaypointArray_map_name(msg_);
  }

private:
  ::anscer_msgs::msg::WaypointArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::WaypointArray>()
{
  return anscer_msgs::msg::builder::Init_WaypointArray_name();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__WAYPOINT_ARRAY__BUILDER_HPP_
