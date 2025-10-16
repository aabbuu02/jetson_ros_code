// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:srv/WaypointPose.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__WAYPOINT_POSE__BUILDER_HPP_
#define ANSCER_MSGS__SRV__DETAIL__WAYPOINT_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/srv/detail/waypoint_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_WaypointPose_Request_waypoint_name
{
public:
  explicit Init_WaypointPose_Request_waypoint_name(::anscer_msgs::srv::WaypointPose_Request & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::srv::WaypointPose_Request waypoint_name(::anscer_msgs::srv::WaypointPose_Request::_waypoint_name_type arg)
  {
    msg_.waypoint_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::WaypointPose_Request msg_;
};

class Init_WaypointPose_Request_waypoint_pose
{
public:
  explicit Init_WaypointPose_Request_waypoint_pose(::anscer_msgs::srv::WaypointPose_Request & msg)
  : msg_(msg)
  {}
  Init_WaypointPose_Request_waypoint_name waypoint_pose(::anscer_msgs::srv::WaypointPose_Request::_waypoint_pose_type arg)
  {
    msg_.waypoint_pose = std::move(arg);
    return Init_WaypointPose_Request_waypoint_name(msg_);
  }

private:
  ::anscer_msgs::srv::WaypointPose_Request msg_;
};

class Init_WaypointPose_Request_waypoint_id
{
public:
  explicit Init_WaypointPose_Request_waypoint_id(::anscer_msgs::srv::WaypointPose_Request & msg)
  : msg_(msg)
  {}
  Init_WaypointPose_Request_waypoint_pose waypoint_id(::anscer_msgs::srv::WaypointPose_Request::_waypoint_id_type arg)
  {
    msg_.waypoint_id = std::move(arg);
    return Init_WaypointPose_Request_waypoint_pose(msg_);
  }

private:
  ::anscer_msgs::srv::WaypointPose_Request msg_;
};

class Init_WaypointPose_Request_save
{
public:
  Init_WaypointPose_Request_save()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointPose_Request_waypoint_id save(::anscer_msgs::srv::WaypointPose_Request::_save_type arg)
  {
    msg_.save = std::move(arg);
    return Init_WaypointPose_Request_waypoint_id(msg_);
  }

private:
  ::anscer_msgs::srv::WaypointPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::WaypointPose_Request>()
{
  return anscer_msgs::srv::builder::Init_WaypointPose_Request_save();
}

}  // namespace anscer_msgs


namespace anscer_msgs
{

namespace srv
{

namespace builder
{

class Init_WaypointPose_Response_is_saved
{
public:
  Init_WaypointPose_Response_is_saved()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::anscer_msgs::srv::WaypointPose_Response is_saved(::anscer_msgs::srv::WaypointPose_Response::_is_saved_type arg)
  {
    msg_.is_saved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::srv::WaypointPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::srv::WaypointPose_Response>()
{
  return anscer_msgs::srv::builder::Init_WaypointPose_Response_is_saved();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__WAYPOINT_POSE__BUILDER_HPP_
