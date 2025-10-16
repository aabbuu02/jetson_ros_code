// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/save_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveMap_Request_filename
{
public:
  explicit Init_SaveMap_Request_filename(::anscer_msgs::srv::SaveMap_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::SaveMap_Request filename(::anscer_msgs::srv::SaveMap_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SaveMap_Request msg_;
};

class Init_SaveMap_Request_save_map
{
public:
  Init_SaveMap_Request_save_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveMap_Request_filename save_map(::anscer_msgs::srv::SaveMap_Request::_save_map_type arg)
  {
    msg_.save_map = std::move(arg);
    return Init_SaveMap_Request_filename(msg_);
  }

private:
  ::anscer_msgs::srv::SaveMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SaveMap_Request>()
{
  return anscer_msgs::srv::builder::Init_SaveMap_Request_save_map();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_SaveMap_Response_status
{
public:
  Init_SaveMap_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::SaveMap_Response status(::anscer_msgs::srv::SaveMap_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::SaveMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::SaveMap_Response>()
{
  return anscer_msgs::srv::builder::Init_SaveMap_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_
