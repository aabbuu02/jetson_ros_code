// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/UserFeedback.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__USER_FEEDBACK__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__USER_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/user_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_UserFeedback_Request_user_feedback
{
public:
  Init_UserFeedback_Request_user_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::UserFeedback_Request user_feedback(::anscer_msgs::srv::UserFeedback_Request::_user_feedback_type arg)
  {
    msg_.user_feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::UserFeedback_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::UserFeedback_Request>()
{
  return anscer_msgs::srv::builder::Init_UserFeedback_Request_user_feedback();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_UserFeedback_Response_status
{
public:
  Init_UserFeedback_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::UserFeedback_Response status(::anscer_msgs::srv::UserFeedback_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::UserFeedback_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::UserFeedback_Response>()
{
  return anscer_msgs::srv::builder::Init_UserFeedback_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__USER_FEEDBACK__BUILDER_HPP_
