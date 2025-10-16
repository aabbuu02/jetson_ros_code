// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/MapReload.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__MAP_RELOAD__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__MAP_RELOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/map_reload__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_MapReload_Request_filename
{
public:
  Init_MapReload_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::MapReload_Request filename(::anscer_msgs::srv::MapReload_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::MapReload_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::MapReload_Request>()
{
  return anscer_msgs::srv::builder::Init_MapReload_Request_filename();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_MapReload_Response_map_name
{
public:
  explicit Init_MapReload_Response_map_name(::anscer_msgs::srv::MapReload_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::MapReload_Response map_name(::anscer_msgs::srv::MapReload_Response::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::MapReload_Response msg_;
};

class Init_MapReload_Response_is_active
{
public:
  Init_MapReload_Response_is_active()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapReload_Response_map_name is_active(::anscer_msgs::srv::MapReload_Response::_is_active_type arg)
  {
    msg_.is_active = std::move(arg);
    return Init_MapReload_Response_map_name(msg_);
  }

private:
  ::anscer_msgs::srv::MapReload_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::MapReload_Response>()
{
  return anscer_msgs::srv::builder::Init_MapReload_Response_is_active();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__MAP_RELOAD__BUILDER_HPP_
