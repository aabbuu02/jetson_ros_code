// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__FEEDBACK__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_Feedback_priority_level
{
public:
  explicit Init_Feedback_priority_level(::anscer_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::Feedback priority_level(::anscer_msgs::msg::Feedback::_priority_level_type arg)
  {
    msg_.priority_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::Feedback msg_;
};

class Init_Feedback_time_elapsed
{
public:
  explicit Init_Feedback_time_elapsed(::anscer_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_priority_level time_elapsed(::anscer_msgs::msg::Feedback::_time_elapsed_type arg)
  {
    msg_.time_elapsed = std::move(arg);
    return Init_Feedback_priority_level(msg_);
  }

private:
  ::anscer_msgs::msg::Feedback msg_;
};

class Init_Feedback_completion_percentage
{
public:
  explicit Init_Feedback_completion_percentage(::anscer_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_time_elapsed completion_percentage(::anscer_msgs::msg::Feedback::_completion_percentage_type arg)
  {
    msg_.completion_percentage = std::move(arg);
    return Init_Feedback_time_elapsed(msg_);
  }

private:
  ::anscer_msgs::msg::Feedback msg_;
};

class Init_Feedback_charge_info
{
public:
  explicit Init_Feedback_charge_info(::anscer_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_completion_percentage charge_info(::anscer_msgs::msg::Feedback::_charge_info_type arg)
  {
    msg_.charge_info = std::move(arg);
    return Init_Feedback_completion_percentage(msg_);
  }

private:
  ::anscer_msgs::msg::Feedback msg_;
};

class Init_Feedback_status
{
public:
  explicit Init_Feedback_status(::anscer_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_charge_info status(::anscer_msgs::msg::Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Feedback_charge_info(msg_);
  }

private:
  ::anscer_msgs::msg::Feedback msg_;
};

class Init_Feedback_number
{
public:
  explicit Init_Feedback_number(::anscer_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_status number(::anscer_msgs::msg::Feedback::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_Feedback_status(msg_);
  }

private:
  ::anscer_msgs::msg::Feedback msg_;
};

class Init_Feedback_mission_id
{
public:
  explicit Init_Feedback_mission_id(::anscer_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_number mission_id(::anscer_msgs::msg::Feedback::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_Feedback_number(msg_);
  }

private:
  ::anscer_msgs::msg::Feedback msg_;
};

class Init_Feedback_index
{
public:
  Init_Feedback_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Feedback_mission_id index(::anscer_msgs::msg::Feedback::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_Feedback_mission_id(msg_);
  }

private:
  ::anscer_msgs::msg::Feedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::Feedback>()
{
  return anscer_msgs::msg::builder::Init_Feedback_index();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__FEEDBACK__BUILDER_HPP_
