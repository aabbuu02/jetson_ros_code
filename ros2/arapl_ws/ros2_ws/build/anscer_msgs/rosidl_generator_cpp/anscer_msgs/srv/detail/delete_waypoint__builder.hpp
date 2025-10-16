// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/DeleteWaypoint.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__DELETE_WAYPOINT__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__DELETE_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/delete_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_DeleteWaypoint_Request_waypoint_type
{
public:
  explicit Init_DeleteWaypoint_Request_waypoint_type(::anscer_msgs::srv::DeleteWaypoint_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::DeleteWaypoint_Request waypoint_type(::anscer_msgs::srv::DeleteWaypoint_Request::_waypoint_type_type arg)
  {
    msg_.waypoint_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::DeleteWaypoint_Request msg_;
};

class Init_DeleteWaypoint_Request_waypoint_id
{
public:
  explicit Init_DeleteWaypoint_Request_waypoint_id(::anscer_msgs::srv::DeleteWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_DeleteWaypoint_Request_waypoint_type waypoint_id(::anscer_msgs::srv::DeleteWaypoint_Request::_waypoint_id_type arg)
  {
    msg_.waypoint_id = std::move(arg);
    return Init_DeleteWaypoint_Request_waypoint_type(msg_);
  }

private:
  ::anscer_msgs::srv::DeleteWaypoint_Request msg_;
};

class Init_DeleteWaypoint_Request_waypoint_order
{
public:
  explicit Init_DeleteWaypoint_Request_waypoint_order(::anscer_msgs::srv::DeleteWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_DeleteWaypoint_Request_waypoint_id waypoint_order(::anscer_msgs::srv::DeleteWaypoint_Request::_waypoint_order_type arg)
  {
    msg_.waypoint_order = std::move(arg);
    return Init_DeleteWaypoint_Request_waypoint_id(msg_);
  }

private:
  ::anscer_msgs::srv::DeleteWaypoint_Request msg_;
};

class Init_DeleteWaypoint_Request_delete_wp
{
public:
  Init_DeleteWaypoint_Request_delete_wp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeleteWaypoint_Request_waypoint_order delete_wp(::anscer_msgs::srv::DeleteWaypoint_Request::_delete_wp_type arg)
  {
    msg_.delete_wp = std::move(arg);
    return Init_DeleteWaypoint_Request_waypoint_order(msg_);
  }

private:
  ::anscer_msgs::srv::DeleteWaypoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::DeleteWaypoint_Request>()
{
  return anscer_msgs::srv::builder::Init_DeleteWaypoint_Request_delete_wp();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_DeleteWaypoint_Response_is_deleted
{
public:
  explicit Init_DeleteWaypoint_Response_is_deleted(::anscer_msgs::srv::DeleteWaypoint_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::DeleteWaypoint_Response is_deleted(::anscer_msgs::srv::DeleteWaypoint_Response::_is_deleted_type arg)
  {
    msg_.is_deleted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::DeleteWaypoint_Response msg_;
};

class Init_DeleteWaypoint_Response_status
{
public:
  Init_DeleteWaypoint_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeleteWaypoint_Response_is_deleted status(::anscer_msgs::srv::DeleteWaypoint_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DeleteWaypoint_Response_is_deleted(msg_);
  }

private:
  ::anscer_msgs::srv::DeleteWaypoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::DeleteWaypoint_Response>()
{
  return anscer_msgs::srv::builder::Init_DeleteWaypoint_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__DELETE_WAYPOINT__BUILDER_HPP_
