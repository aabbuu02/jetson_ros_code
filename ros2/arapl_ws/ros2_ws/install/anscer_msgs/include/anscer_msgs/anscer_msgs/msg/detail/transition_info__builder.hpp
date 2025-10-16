// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/TransitionInfo.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__TRANSITION_INFO__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__TRANSITION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/transition_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_TransitionInfo_pose
{
public:
  explicit Init_TransitionInfo_pose(::anscer_msgs::msg::TransitionInfo & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::TransitionInfo pose(::anscer_msgs::msg::TransitionInfo::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::TransitionInfo msg_;
};

class Init_TransitionInfo_destination
{
public:
  explicit Init_TransitionInfo_destination(::anscer_msgs::msg::TransitionInfo & msg)
  : msg_(msg)
  {}
  Init_TransitionInfo_pose destination(::anscer_msgs::msg::TransitionInfo::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_TransitionInfo_pose(msg_);
  }

private:
  ::anscer_msgs::msg::TransitionInfo msg_;
};

class Init_TransitionInfo_source
{
public:
  Init_TransitionInfo_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransitionInfo_destination source(::anscer_msgs::msg::TransitionInfo::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_TransitionInfo_destination(msg_);
  }

private:
  ::anscer_msgs::msg::TransitionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::TransitionInfo>()
{
  return anscer_msgs::msg::builder::Init_TransitionInfo_source();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__TRANSITION_INFO__BUILDER_HPP_
