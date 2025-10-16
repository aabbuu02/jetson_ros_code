// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__TASK__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_Task_charge_info
{
public:
  explicit Init_Task_charge_info(::anscer_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::Task charge_info(::anscer_msgs::msg::Task::_charge_info_type arg)
  {
    msg_.charge_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::Task msg_;
};

class Init_Task_acr_info
{
public:
  explicit Init_Task_acr_info(::anscer_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_charge_info acr_info(::anscer_msgs::msg::Task::_acr_info_type arg)
  {
    msg_.acr_info = std::move(arg);
    return Init_Task_charge_info(msg_);
  }

private:
  ::anscer_msgs::msg::Task msg_;
};

class Init_Task_activate
{
public:
  explicit Init_Task_activate(::anscer_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_acr_info activate(::anscer_msgs::msg::Task::_activate_type arg)
  {
    msg_.activate = std::move(arg);
    return Init_Task_acr_info(msg_);
  }

private:
  ::anscer_msgs::msg::Task msg_;
};

class Init_Task_number
{
public:
  explicit Init_Task_number(::anscer_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_activate number(::anscer_msgs::msg::Task::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_Task_activate(msg_);
  }

private:
  ::anscer_msgs::msg::Task msg_;
};

class Init_Task_waypoint_index
{
public:
  explicit Init_Task_waypoint_index(::anscer_msgs::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_number waypoint_index(::anscer_msgs::msg::Task::_waypoint_index_type arg)
  {
    msg_.waypoint_index = std::move(arg);
    return Init_Task_number(msg_);
  }

private:
  ::anscer_msgs::msg::Task msg_;
};

class Init_Task_index
{
public:
  Init_Task_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_waypoint_index index(::anscer_msgs::msg::Task::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_Task_waypoint_index(msg_);
  }

private:
  ::anscer_msgs::msg::Task msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::Task>()
{
  return anscer_msgs::msg::builder::Init_Task_index();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__TASK__BUILDER_HPP_
