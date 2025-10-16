// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/EditWaypoint.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__EDIT_WAYPOINT__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__EDIT_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/edit_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_EditWaypoint_Request_waypoint_pose
{
public:
  explicit Init_EditWaypoint_Request_waypoint_pose(::anscer_msgs::srv::EditWaypoint_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::EditWaypoint_Request waypoint_pose(::anscer_msgs::srv::EditWaypoint_Request::_waypoint_pose_type arg)
  {
    msg_.waypoint_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::EditWaypoint_Request msg_;
};

class Init_EditWaypoint_Request_waypoint_name
{
public:
  explicit Init_EditWaypoint_Request_waypoint_name(::anscer_msgs::srv::EditWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_EditWaypoint_Request_waypoint_pose waypoint_name(::anscer_msgs::srv::EditWaypoint_Request::_waypoint_name_type arg)
  {
    msg_.waypoint_name = std::move(arg);
    return Init_EditWaypoint_Request_waypoint_pose(msg_);
  }

private:
  ::anscer_msgs::srv::EditWaypoint_Request msg_;
};

class Init_EditWaypoint_Request_waypoint_type
{
public:
  explicit Init_EditWaypoint_Request_waypoint_type(::anscer_msgs::srv::EditWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_EditWaypoint_Request_waypoint_name waypoint_type(::anscer_msgs::srv::EditWaypoint_Request::_waypoint_type_type arg)
  {
    msg_.waypoint_type = std::move(arg);
    return Init_EditWaypoint_Request_waypoint_name(msg_);
  }

private:
  ::anscer_msgs::srv::EditWaypoint_Request msg_;
};

class Init_EditWaypoint_Request_new_id
{
public:
  explicit Init_EditWaypoint_Request_new_id(::anscer_msgs::srv::EditWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_EditWaypoint_Request_waypoint_type new_id(::anscer_msgs::srv::EditWaypoint_Request::_new_id_type arg)
  {
    msg_.new_id = std::move(arg);
    return Init_EditWaypoint_Request_waypoint_type(msg_);
  }

private:
  ::anscer_msgs::srv::EditWaypoint_Request msg_;
};

class Init_EditWaypoint_Request_waypoint_id
{
public:
  explicit Init_EditWaypoint_Request_waypoint_id(::anscer_msgs::srv::EditWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_EditWaypoint_Request_new_id waypoint_id(::anscer_msgs::srv::EditWaypoint_Request::_waypoint_id_type arg)
  {
    msg_.waypoint_id = std::move(arg);
    return Init_EditWaypoint_Request_new_id(msg_);
  }

private:
  ::anscer_msgs::srv::EditWaypoint_Request msg_;
};

class Init_EditWaypoint_Request_waypoint_order
{
public:
  explicit Init_EditWaypoint_Request_waypoint_order(::anscer_msgs::srv::EditWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_EditWaypoint_Request_waypoint_id waypoint_order(::anscer_msgs::srv::EditWaypoint_Request::_waypoint_order_type arg)
  {
    msg_.waypoint_order = std::move(arg);
    return Init_EditWaypoint_Request_waypoint_id(msg_);
  }

private:
  ::anscer_msgs::srv::EditWaypoint_Request msg_;
};

class Init_EditWaypoint_Request_replace_to_pose
{
public:
  explicit Init_EditWaypoint_Request_replace_to_pose(::anscer_msgs::srv::EditWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_EditWaypoint_Request_waypoint_order replace_to_pose(::anscer_msgs::srv::EditWaypoint_Request::_replace_to_pose_type arg)
  {
    msg_.replace_to_pose = std::move(arg);
    return Init_EditWaypoint_Request_waypoint_order(msg_);
  }

private:
  ::anscer_msgs::srv::EditWaypoint_Request msg_;
};

class Init_EditWaypoint_Request_replace_to_current_pose
{
public:
  explicit Init_EditWaypoint_Request_replace_to_current_pose(::anscer_msgs::srv::EditWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_EditWaypoint_Request_replace_to_pose replace_to_current_pose(::anscer_msgs::srv::EditWaypoint_Request::_replace_to_current_pose_type arg)
  {
    msg_.replace_to_current_pose = std::move(arg);
    return Init_EditWaypoint_Request_replace_to_pose(msg_);
  }

private:
  ::anscer_msgs::srv::EditWaypoint_Request msg_;
};

class Init_EditWaypoint_Request_replace_id
{
public:
  explicit Init_EditWaypoint_Request_replace_id(::anscer_msgs::srv::EditWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_EditWaypoint_Request_replace_to_current_pose replace_id(::anscer_msgs::srv::EditWaypoint_Request::_replace_id_type arg)
  {
    msg_.replace_id = std::move(arg);
    return Init_EditWaypoint_Request_replace_to_current_pose(msg_);
  }

private:
  ::anscer_msgs::srv::EditWaypoint_Request msg_;
};

class Init_EditWaypoint_Request_rename
{
public:
  Init_EditWaypoint_Request_rename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EditWaypoint_Request_replace_id rename(::anscer_msgs::srv::EditWaypoint_Request::_rename_type arg)
  {
    msg_.rename = std::move(arg);
    return Init_EditWaypoint_Request_replace_id(msg_);
  }

private:
  ::anscer_msgs::srv::EditWaypoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::EditWaypoint_Request>()
{
  return anscer_msgs::srv::builder::Init_EditWaypoint_Request_rename();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_EditWaypoint_Response_edited
{
public:
  explicit Init_EditWaypoint_Response_edited(::anscer_msgs::srv::EditWaypoint_Response & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::EditWaypoint_Response edited(::anscer_msgs::srv::EditWaypoint_Response::_edited_type arg)
  {
    msg_.edited = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::EditWaypoint_Response msg_;
};

class Init_EditWaypoint_Response_status
{
public:
  Init_EditWaypoint_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EditWaypoint_Response_edited status(::anscer_msgs::srv::EditWaypoint_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_EditWaypoint_Response_edited(msg_);
  }

private:
  ::anscer_msgs::srv::EditWaypoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::EditWaypoint_Response>()
{
  return anscer_msgs::srv::builder::Init_EditWaypoint_Response_status();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__EDIT_WAYPOINT__BUILDER_HPP_
