// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_Pose_pose
{
public:
  explicit Init_Pose_pose(::anscer_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::Pose pose(::anscer_msgs::msg::Pose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::Pose msg_;
};

class Init_Pose_time
{
public:
  Init_Pose_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose_pose time(::anscer_msgs::msg::Pose::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_Pose_pose(msg_);
  }

private:
  ::anscer_msgs::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::Pose>()
{
  return anscer_msgs::msg::builder::Init_Pose_time();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_
