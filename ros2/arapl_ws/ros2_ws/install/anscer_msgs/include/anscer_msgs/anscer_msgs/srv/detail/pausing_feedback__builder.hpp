// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/PausingFeedback.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__PAUSING_FEEDBACK__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__PAUSING_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/pausing_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_PausingFeedback_Request_pause_feedback
{
public:
  Init_PausingFeedback_Request_pause_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::PausingFeedback_Request pause_feedback(::anscer_msgs::srv::PausingFeedback_Request::_pause_feedback_type arg)
  {
    msg_.pause_feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::PausingFeedback_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::PausingFeedback_Request>()
{
  return anscer_msgs::srv::builder::Init_PausingFeedback_Request_pause_feedback();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_PausingFeedback_Response_status
{
public:
  Init_PausingFeedback_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::PausingFeedback_Response status(::anscer_msgs::srv::PausingFeedback_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::PausingFeedback_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::PausingFeedback_Response>()
{
  return anscer_msgs::srv::builder::Init_PausingFeedback_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__PAUSING_FEEDBACK__BUILDER_HPP_
