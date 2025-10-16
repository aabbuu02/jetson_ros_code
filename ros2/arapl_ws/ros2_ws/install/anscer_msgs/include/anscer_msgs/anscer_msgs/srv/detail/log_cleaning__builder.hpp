// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/LogCleaning.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__LOG_CLEANING__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__LOG_CLEANING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/log_cleaning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_LogCleaning_Request_mode
{
public:
  explicit Init_LogCleaning_Request_mode(::anscer_msgs::srv::LogCleaning_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::LogCleaning_Request mode(::anscer_msgs::srv::LogCleaning_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::LogCleaning_Request msg_;
};

class Init_LogCleaning_Request_cleaning_size
{
public:
  explicit Init_LogCleaning_Request_cleaning_size(::anscer_msgs::srv::LogCleaning_Request & msg)
  : msg_(msg)
  {}
  Init_LogCleaning_Request_mode cleaning_size(::anscer_msgs::srv::LogCleaning_Request::_cleaning_size_type arg)
  {
    msg_.cleaning_size = std::move(arg);
    return Init_LogCleaning_Request_mode(msg_);
  }

private:
  ::anscer_msgs::srv::LogCleaning_Request msg_;
};

class Init_LogCleaning_Request_cleaning_hour
{
public:
  Init_LogCleaning_Request_cleaning_hour()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogCleaning_Request_cleaning_size cleaning_hour(::anscer_msgs::srv::LogCleaning_Request::_cleaning_hour_type arg)
  {
    msg_.cleaning_hour = std::move(arg);
    return Init_LogCleaning_Request_cleaning_size(msg_);
  }

private:
  ::anscer_msgs::srv::LogCleaning_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::LogCleaning_Request>()
{
  return anscer_msgs::srv::builder::Init_LogCleaning_Request_cleaning_hour();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_LogCleaning_Response_message
{
public:
  Init_LogCleaning_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::LogCleaning_Response message(::anscer_msgs::srv::LogCleaning_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::LogCleaning_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::LogCleaning_Response>()
{
  return anscer_msgs::srv::builder::Init_LogCleaning_Response_message();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__LOG_CLEANING__BUILDER_HPP_
