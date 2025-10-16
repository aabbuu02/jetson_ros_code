// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/WaypointsArray.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__WAYPOINTS_ARRAY__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__WAYPOINTS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/waypoints_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_WaypointsArray_waypoints
{
public:
  Init_WaypointsArray_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::msg::WaypointsArray waypoints(::anscer_msgs::msg::WaypointsArray::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::WaypointsArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::WaypointsArray>()
{
  return anscer_msgs::msg::builder::Init_WaypointsArray_waypoints();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__WAYPOINTS_ARRAY__BUILDER_HPP_
