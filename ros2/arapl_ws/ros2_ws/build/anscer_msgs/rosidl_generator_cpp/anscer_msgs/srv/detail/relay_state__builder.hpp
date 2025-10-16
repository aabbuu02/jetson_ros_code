// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/RelayState.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__RELAY_STATE__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__RELAY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/relay_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_RelayState_Request_relay_state
{
public:
  Init_RelayState_Request_relay_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::RelayState_Request relay_state(::anscer_msgs::srv::RelayState_Request::_relay_state_type arg)
  {
    msg_.relay_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::RelayState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::RelayState_Request>()
{
  return anscer_msgs::srv::builder::Init_RelayState_Request_relay_state();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_RelayState_Response_result
{
public:
  Init_RelayState_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::RelayState_Response result(::anscer_msgs::srv::RelayState_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::RelayState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::RelayState_Response>()
{
  return anscer_msgs::srv::builder::Init_RelayState_Response_result();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__RELAY_STATE__BUILDER_HPP_
