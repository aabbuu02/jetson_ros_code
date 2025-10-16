// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/DockingDebug.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__DOCKING_DEBUG__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__DOCKING_DEBUG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/docking_debug__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_DockingDebug_distance_to_goal
{
public:
  explicit Init_DockingDebug_distance_to_goal(::anscer_msgs::msg::DockingDebug & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::DockingDebug distance_to_goal(::anscer_msgs::msg::DockingDebug::_distance_to_goal_type arg)
  {
    msg_.distance_to_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::DockingDebug msg_;
};

class Init_DockingDebug_orientation_error
{
public:
  explicit Init_DockingDebug_orientation_error(::anscer_msgs::msg::DockingDebug & msg)
  : msg_(msg)
  {}
  Init_DockingDebug_distance_to_goal orientation_error(::anscer_msgs::msg::DockingDebug::_orientation_error_type arg)
  {
    msg_.orientation_error = std::move(arg);
    return Init_DockingDebug_distance_to_goal(msg_);
  }

private:
  ::anscer_msgs::msg::DockingDebug msg_;
};

class Init_DockingDebug_theta
{
public:
  explicit Init_DockingDebug_theta(::anscer_msgs::msg::DockingDebug & msg)
  : msg_(msg)
  {}
  Init_DockingDebug_orientation_error theta(::anscer_msgs::msg::DockingDebug::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_DockingDebug_orientation_error(msg_);
  }

private:
  ::anscer_msgs::msg::DockingDebug msg_;
};

class Init_DockingDebug_delta
{
public:
  explicit Init_DockingDebug_delta(::anscer_msgs::msg::DockingDebug & msg)
  : msg_(msg)
  {}
  Init_DockingDebug_theta delta(::anscer_msgs::msg::DockingDebug::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return Init_DockingDebug_theta(msg_);
  }

private:
  ::anscer_msgs::msg::DockingDebug msg_;
};

class Init_DockingDebug_curvature
{
public:
  Init_DockingDebug_curvature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockingDebug_delta curvature(::anscer_msgs::msg::DockingDebug::_curvature_type arg)
  {
    msg_.curvature = std::move(arg);
    return Init_DockingDebug_delta(msg_);
  }

private:
  ::anscer_msgs::msg::DockingDebug msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::DockingDebug>()
{
  return anscer_msgs::msg::builder::Init_DockingDebug_curvature();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__DOCKING_DEBUG__BUILDER_HPP_
