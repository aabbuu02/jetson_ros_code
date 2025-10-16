// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/ScanPoints.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__SCAN_POINTS__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__SCAN_POINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/scan_points__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_ScanPoints_point
{
public:
  Init_ScanPoints_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::msg::ScanPoints point(::anscer_msgs::msg::ScanPoints::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::ScanPoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::ScanPoints>()
{
  return anscer_msgs::msg::builder::Init_ScanPoints_point();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__SCAN_POINTS__BUILDER_HPP_
