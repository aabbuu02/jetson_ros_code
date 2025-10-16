// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/SafetyParam.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAFETY_PARAM__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SAFETY_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/safety_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SafetyParam_Request_max_z
{
public:
  explicit Init_SafetyParam_Request_max_z(::anscer_msgs::srv::SafetyParam_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::SafetyParam_Request max_z(::anscer_msgs::srv::SafetyParam_Request::_max_z_type arg)
  {
    msg_.max_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SafetyParam_Request msg_;
};

class Init_SafetyParam_Request_max_y
{
public:
  explicit Init_SafetyParam_Request_max_y(::anscer_msgs::srv::SafetyParam_Request & msg)
  : msg_(msg)
  {}
  Init_SafetyParam_Request_max_z max_y(::anscer_msgs::srv::SafetyParam_Request::_max_y_type arg)
  {
    msg_.max_y = std::move(arg);
    return Init_SafetyParam_Request_max_z(msg_);
  }

private:
  ::anscer_msgs::srv::SafetyParam_Request msg_;
};

class Init_SafetyParam_Request_max_x
{
public:
  explicit Init_SafetyParam_Request_max_x(::anscer_msgs::srv::SafetyParam_Request & msg)
  : msg_(msg)
  {}
  Init_SafetyParam_Request_max_y max_x(::anscer_msgs::srv::SafetyParam_Request::_max_x_type arg)
  {
    msg_.max_x = std::move(arg);
    return Init_SafetyParam_Request_max_y(msg_);
  }

private:
  ::anscer_msgs::srv::SafetyParam_Request msg_;
};

class Init_SafetyParam_Request_min_z
{
public:
  explicit Init_SafetyParam_Request_min_z(::anscer_msgs::srv::SafetyParam_Request & msg)
  : msg_(msg)
  {}
  Init_SafetyParam_Request_max_x min_z(::anscer_msgs::srv::SafetyParam_Request::_min_z_type arg)
  {
    msg_.min_z = std::move(arg);
    return Init_SafetyParam_Request_max_x(msg_);
  }

private:
  ::anscer_msgs::srv::SafetyParam_Request msg_;
};

class Init_SafetyParam_Request_min_y
{
public:
  explicit Init_SafetyParam_Request_min_y(::anscer_msgs::srv::SafetyParam_Request & msg)
  : msg_(msg)
  {}
  Init_SafetyParam_Request_min_z min_y(::anscer_msgs::srv::SafetyParam_Request::_min_y_type arg)
  {
    msg_.min_y = std::move(arg);
    return Init_SafetyParam_Request_min_z(msg_);
  }

private:
  ::anscer_msgs::srv::SafetyParam_Request msg_;
};

class Init_SafetyParam_Request_min_x
{
public:
  Init_SafetyParam_Request_min_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyParam_Request_min_y min_x(::anscer_msgs::srv::SafetyParam_Request::_min_x_type arg)
  {
    msg_.min_x = std::move(arg);
    return Init_SafetyParam_Request_min_y(msg_);
  }

private:
  ::anscer_msgs::srv::SafetyParam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SafetyParam_Request>()
{
  return anscer_msgs::srv::builder::Init_SafetyParam_Request_min_x();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SafetyParam_Response_status
{
public:
  Init_SafetyParam_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::SafetyParam_Response status(::anscer_msgs::srv::SafetyParam_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SafetyParam_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SafetyParam_Response>()
{
  return anscer_msgs::srv::builder::Init_SafetyParam_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SAFETY_PARAM__BUILDER_HPP_
