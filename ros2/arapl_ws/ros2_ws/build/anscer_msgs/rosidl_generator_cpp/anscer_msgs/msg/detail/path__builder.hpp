// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from anscer_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
#define ANSCER_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "anscer_msgs/msg/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace anscer_msgs
{

namespace msg
{

namespace builder
{

class Init_Path_pose
{
public:
  explicit Init_Path_pose(::anscer_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  ::anscer_msgs::msg::Path pose(::anscer_msgs::msg::Path::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::anscer_msgs::msg::Path msg_;
};

class Init_Path_agent_name
{
public:
  Init_Path_agent_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_pose agent_name(::anscer_msgs::msg::Path::_agent_name_type arg)
  {
    msg_.agent_name = std::move(arg);
    return Init_Path_pose(msg_);
  }

private:
  ::anscer_msgs::msg::Path msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::anscer_msgs::msg::Path>()
{
  return anscer_msgs::msg::builder::Init_Path_agent_name();
}

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
