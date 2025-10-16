// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/BoxFilter.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__BOX_FILTER__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__BOX_FILTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/box_filter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_BoxFilter_Request_debounce_time
{
public:
  explicit Init_BoxFilter_Request_debounce_time(::anscer_msgs::srv::BoxFilter_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::BoxFilter_Request debounce_time(::anscer_msgs::srv::BoxFilter_Request::_debounce_time_type arg)
  {
    msg_.debounce_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::BoxFilter_Request msg_;
};

class Init_BoxFilter_Request_max_warn_y
{
public:
  explicit Init_BoxFilter_Request_max_warn_y(::anscer_msgs::srv::BoxFilter_Request & msg)
  : msg_(msg)
  {}
  Init_BoxFilter_Request_debounce_time max_warn_y(::anscer_msgs::srv::BoxFilter_Request::_max_warn_y_type arg)
  {
    msg_.max_warn_y = std::move(arg);
    return Init_BoxFilter_Request_debounce_time(msg_);
  }

private:
  ::anscer_msgs::srv::BoxFilter_Request msg_;
};

class Init_BoxFilter_Request_min_warn_y
{
public:
  explicit Init_BoxFilter_Request_min_warn_y(::anscer_msgs::srv::BoxFilter_Request & msg)
  : msg_(msg)
  {}
  Init_BoxFilter_Request_max_warn_y min_warn_y(::anscer_msgs::srv::BoxFilter_Request::_min_warn_y_type arg)
  {
    msg_.min_warn_y = std::move(arg);
    return Init_BoxFilter_Request_max_warn_y(msg_);
  }

private:
  ::anscer_msgs::srv::BoxFilter_Request msg_;
};

class Init_BoxFilter_Request_max_warn_x
{
public:
  explicit Init_BoxFilter_Request_max_warn_x(::anscer_msgs::srv::BoxFilter_Request & msg)
  : msg_(msg)
  {}
  Init_BoxFilter_Request_min_warn_y max_warn_x(::anscer_msgs::srv::BoxFilter_Request::_max_warn_x_type arg)
  {
    msg_.max_warn_x = std::move(arg);
    return Init_BoxFilter_Request_min_warn_y(msg_);
  }

private:
  ::anscer_msgs::srv::BoxFilter_Request msg_;
};

class Init_BoxFilter_Request_min_warn_x
{
public:
  explicit Init_BoxFilter_Request_min_warn_x(::anscer_msgs::srv::BoxFilter_Request & msg)
  : msg_(msg)
  {}
  Init_BoxFilter_Request_max_warn_x min_warn_x(::anscer_msgs::srv::BoxFilter_Request::_min_warn_x_type arg)
  {
    msg_.min_warn_x = std::move(arg);
    return Init_BoxFilter_Request_max_warn_x(msg_);
  }

private:
  ::anscer_msgs::srv::BoxFilter_Request msg_;
};

class Init_BoxFilter_Request_max_safety_y
{
public:
  explicit Init_BoxFilter_Request_max_safety_y(::anscer_msgs::srv::BoxFilter_Request & msg)
  : msg_(msg)
  {}
  Init_BoxFilter_Request_min_warn_x max_safety_y(::anscer_msgs::srv::BoxFilter_Request::_max_safety_y_type arg)
  {
    msg_.max_safety_y = std::move(arg);
    return Init_BoxFilter_Request_min_warn_x(msg_);
  }

private:
  ::anscer_msgs::srv::BoxFilter_Request msg_;
};

class Init_BoxFilter_Request_min_safety_y
{
public:
  explicit Init_BoxFilter_Request_min_safety_y(::anscer_msgs::srv::BoxFilter_Request & msg)
  : msg_(msg)
  {}
  Init_BoxFilter_Request_max_safety_y min_safety_y(::anscer_msgs::srv::BoxFilter_Request::_min_safety_y_type arg)
  {
    msg_.min_safety_y = std::move(arg);
    return Init_BoxFilter_Request_max_safety_y(msg_);
  }

private:
  ::anscer_msgs::srv::BoxFilter_Request msg_;
};

class Init_BoxFilter_Request_max_safety_x
{
public:
  explicit Init_BoxFilter_Request_max_safety_x(::anscer_msgs::srv::BoxFilter_Request & msg)
  : msg_(msg)
  {}
  Init_BoxFilter_Request_min_safety_y max_safety_x(::anscer_msgs::srv::BoxFilter_Request::_max_safety_x_type arg)
  {
    msg_.max_safety_x = std::move(arg);
    return Init_BoxFilter_Request_min_safety_y(msg_);
  }

private:
  ::anscer_msgs::srv::BoxFilter_Request msg_;
};

class Init_BoxFilter_Request_min_safety_x
{
public:
  explicit Init_BoxFilter_Request_min_safety_x(::anscer_msgs::srv::BoxFilter_Request & msg)
  : msg_(msg)
  {}
  Init_BoxFilter_Request_max_safety_x min_safety_x(::anscer_msgs::srv::BoxFilter_Request::_min_safety_x_type arg)
  {
    msg_.min_safety_x = std::move(arg);
    return Init_BoxFilter_Request_max_safety_x(msg_);
  }

private:
  ::anscer_msgs::srv::BoxFilter_Request msg_;
};

class Init_BoxFilter_Request_restore_default
{
public:
  explicit Init_BoxFilter_Request_restore_default(::anscer_msgs::srv::BoxFilter_Request & msg)
  : msg_(msg)
  {}
  Init_BoxFilter_Request_min_safety_x restore_default(::anscer_msgs::srv::BoxFilter_Request::_restore_default_type arg)
  {
    msg_.restore_default = std::move(arg);
    return Init_BoxFilter_Request_min_safety_x(msg_);
  }

private:
  ::anscer_msgs::srv::BoxFilter_Request msg_;
};

class Init_BoxFilter_Request_filter_enable
{
public:
  Init_BoxFilter_Request_filter_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoxFilter_Request_restore_default filter_enable(::anscer_msgs::srv::BoxFilter_Request::_filter_enable_type arg)
  {
    msg_.filter_enable = std::move(arg);
    return Init_BoxFilter_Request_restore_default(msg_);
  }

private:
  ::anscer_msgs::srv::BoxFilter_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::BoxFilter_Request>()
{
  return anscer_msgs::srv::builder::Init_BoxFilter_Request_filter_enable();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_BoxFilter_Response_state
{
public:
  Init_BoxFilter_Response_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::BoxFilter_Response state(::anscer_msgs::srv::BoxFilter_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::BoxFilter_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::BoxFilter_Response>()
{
  return anscer_msgs::srv::builder::Init_BoxFilter_Response_state();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__BOX_FILTER__BUILDER_HPP_
