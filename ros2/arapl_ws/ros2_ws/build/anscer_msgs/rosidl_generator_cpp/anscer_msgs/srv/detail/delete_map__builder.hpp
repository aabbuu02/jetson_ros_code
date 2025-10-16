// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/DeleteMap.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__DELETE_MAP__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__DELETE_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/delete_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_DeleteMap_Request_filename
{
public:
  Init_DeleteMap_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::DeleteMap_Request filename(::anscer_msgs::srv::DeleteMap_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::DeleteMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::DeleteMap_Request>()
{
  return anscer_msgs::srv::builder::Init_DeleteMap_Request_filename();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_DeleteMap_Response_is_deleted
{
public:
  explicit Init_DeleteMap_Response_is_deleted(::anscer_msgs::srv::DeleteMap_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::DeleteMap_Response is_deleted(::anscer_msgs::srv::DeleteMap_Response::_is_deleted_type arg)
  {
    msg_.is_deleted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::DeleteMap_Response msg_;
};

class Init_DeleteMap_Response_map_name
{
public:
  Init_DeleteMap_Response_map_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeleteMap_Response_is_deleted map_name(::anscer_msgs::srv::DeleteMap_Response::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_DeleteMap_Response_is_deleted(msg_);
  }

private:
  ::anscer_msgs::srv::DeleteMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::DeleteMap_Response>()
{
  return anscer_msgs::srv::builder::Init_DeleteMap_Response_map_name();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__DELETE_MAP__BUILDER_HPP_
