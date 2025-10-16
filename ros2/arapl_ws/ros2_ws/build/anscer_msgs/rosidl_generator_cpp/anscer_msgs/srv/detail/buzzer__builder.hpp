// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/Buzzer.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__BUZZER__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__BUZZER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/buzzer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_Buzzer_Request_count
{
public:
  explicit Init_Buzzer_Request_count(::anscer_msgs::srv::Buzzer_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::Buzzer_Request count(::anscer_msgs::srv::Buzzer_Request::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::Buzzer_Request msg_;
};

class Init_Buzzer_Request_delay
{
public:
  explicit Init_Buzzer_Request_delay(::anscer_msgs::srv::Buzzer_Request & msg)
  : msg_(msg)
  {}
  Init_Buzzer_Request_count delay(::anscer_msgs::srv::Buzzer_Request::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return Init_Buzzer_Request_count(msg_);
  }

private:
  ::anscer_msgs::srv::Buzzer_Request msg_;
};

class Init_Buzzer_Request_initiate
{
public:
  Init_Buzzer_Request_initiate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Buzzer_Request_delay initiate(::anscer_msgs::srv::Buzzer_Request::_initiate_type arg)
  {
    msg_.initiate = std::move(arg);
    return Init_Buzzer_Request_delay(msg_);
  }

private:
  ::anscer_msgs::srv::Buzzer_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::Buzzer_Request>()
{
  return anscer_msgs::srv::builder::Init_Buzzer_Request_initiate();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_Buzzer_Response_result
{
public:
  Init_Buzzer_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::Buzzer_Response result(::anscer_msgs::srv::Buzzer_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::Buzzer_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::Buzzer_Response>()
{
  return anscer_msgs::srv::builder::Init_Buzzer_Response_result();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__BUZZER__BUILDER_HPP_
