// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msgs:msg/Vertex.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__VERTEX__BUILDER_HPP_
#define GRAPH_MSGS__MSG__DETAIL__VERTEX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_msgs/msg/detail/vertex__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_msgs
{

namespace msg
{

namespace builder
{

class Init_Vertex_properties
{
public:
  explicit Init_Vertex_properties(::graph_msgs::msg::Vertex & msg)
  : msg_(msg)
  {}
  ::graph_msgs::msg::Vertex properties(::graph_msgs::msg::Vertex::_properties_type arg)
  {
    msg_.properties = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msgs::msg::Vertex msg_;
};

class Init_Vertex_pose
{
public:
  explicit Init_Vertex_pose(::graph_msgs::msg::Vertex & msg)
  : msg_(msg)
  {}
  Init_Vertex_properties pose(::graph_msgs::msg::Vertex::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Vertex_properties(msg_);
  }

private:
  ::graph_msgs::msg::Vertex msg_;
};

class Init_Vertex_ignore_orientation
{
public:
  explicit Init_Vertex_ignore_orientation(::graph_msgs::msg::Vertex & msg)
  : msg_(msg)
  {}
  Init_Vertex_pose ignore_orientation(::graph_msgs::msg::Vertex::_ignore_orientation_type arg)
  {
    msg_.ignore_orientation = std::move(arg);
    return Init_Vertex_pose(msg_);
  }

private:
  ::graph_msgs::msg::Vertex msg_;
};

class Init_Vertex_type
{
public:
  explicit Init_Vertex_type(::graph_msgs::msg::Vertex & msg)
  : msg_(msg)
  {}
  Init_Vertex_ignore_orientation type(::graph_msgs::msg::Vertex::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Vertex_ignore_orientation(msg_);
  }

private:
  ::graph_msgs::msg::Vertex msg_;
};

class Init_Vertex_alias
{
public:
  explicit Init_Vertex_alias(::graph_msgs::msg::Vertex & msg)
  : msg_(msg)
  {}
  Init_Vertex_type alias(::graph_msgs::msg::Vertex::_alias_type arg)
  {
    msg_.alias = std::move(arg);
    return Init_Vertex_type(msg_);
  }

private:
  ::graph_msgs::msg::Vertex msg_;
};

class Init_Vertex_name
{
public:
  explicit Init_Vertex_name(::graph_msgs::msg::Vertex & msg)
  : msg_(msg)
  {}
  Init_Vertex_alias name(::graph_msgs::msg::Vertex::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Vertex_alias(msg_);
  }

private:
  ::graph_msgs::msg::Vertex msg_;
};

class Init_Vertex_id
{
public:
  Init_Vertex_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vertex_name id(::graph_msgs::msg::Vertex::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Vertex_name(msg_);
  }

private:
  ::graph_msgs::msg::Vertex msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msgs::msg::Vertex>()
{
  return graph_msgs::msg::builder::Init_Vertex_id();
}

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__MSG__DETAIL__VERTEX__BUILDER_HPP_
