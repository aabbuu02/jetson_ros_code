// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/DockInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__DOCK_INFO__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__DOCK_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/dock_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_DockInfo_dock_mode
{
public:
  explicit Init_DockInfo_dock_mode(::anscer_msgs::msg::DockInfo & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::DockInfo dock_mode(::anscer_msgs::msg::DockInfo::_dock_mode_type arg)
  {
    msg_.dock_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::DockInfo msg_;
};

class Init_DockInfo_dock_marker
{
public:
  Init_DockInfo_dock_marker()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockInfo_dock_mode dock_marker(::anscer_msgs::msg::DockInfo::_dock_marker_type arg)
  {
    msg_.dock_marker = std::move(arg);
    return Init_DockInfo_dock_mode(msg_);
  }

private:
  ::anscer_msgs::msg::DockInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::DockInfo>()
{
  return anscer_msgs::msg::builder::Init_DockInfo_dock_marker();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__DOCK_INFO__BUILDER_HPP_
