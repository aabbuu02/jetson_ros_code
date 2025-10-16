// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/PGVPose.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__PGV_POSE__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__PGV_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/pgv_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_PGVPose_id
{
public:
  explicit Init_PGVPose_id(::anscer_msgs::msg::PGVPose & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::PGVPose id(::anscer_msgs::msg::PGVPose::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::PGVPose msg_;
};

class Init_PGVPose_yaw
{
public:
  explicit Init_PGVPose_yaw(::anscer_msgs::msg::PGVPose & msg)
  : msg_(msg)
  {}
  Init_PGVPose_id yaw(::anscer_msgs::msg::PGVPose::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_PGVPose_id(msg_);
  }

private:
  ::anscer_msgs::msg::PGVPose msg_;
};

class Init_PGVPose_y
{
public:
  explicit Init_PGVPose_y(::anscer_msgs::msg::PGVPose & msg)
  : msg_(msg)
  {}
  Init_PGVPose_yaw y(::anscer_msgs::msg::PGVPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PGVPose_yaw(msg_);
  }

private:
  ::anscer_msgs::msg::PGVPose msg_;
};

class Init_PGVPose_x
{
public:
  Init_PGVPose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PGVPose_y x(::anscer_msgs::msg::PGVPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PGVPose_y(msg_);
  }

private:
  ::anscer_msgs::msg::PGVPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::PGVPose>()
{
  return anscer_msgs::msg::builder::Init_PGVPose_x();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__PGV_POSE__BUILDER_HPP_
