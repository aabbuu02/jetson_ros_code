// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/ScanPoint.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__SCAN_POINT__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__SCAN_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/scan_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_ScanPoint_y
{
public:
  explicit Init_ScanPoint_y(::anscer_msgs::msg::ScanPoint & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::ScanPoint y(::anscer_msgs::msg::ScanPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::ScanPoint msg_;
};

class Init_ScanPoint_x
{
public:
  Init_ScanPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanPoint_y x(::anscer_msgs::msg::ScanPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ScanPoint_y(msg_);
  }

private:
  ::anscer_msgs::msg::ScanPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::ScanPoint>()
{
  return anscer_msgs::msg::builder::Init_ScanPoint_x();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__SCAN_POINT__BUILDER_HPP_
