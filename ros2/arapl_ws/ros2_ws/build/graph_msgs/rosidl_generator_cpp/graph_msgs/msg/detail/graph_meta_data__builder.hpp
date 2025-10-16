// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msgs:msg/GraphMetaData.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__GRAPH_META_DATA__BUILDER_HPP_
#define GRAPH_MSGS__MSG__DETAIL__GRAPH_META_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_msgs/msg/detail/graph_meta_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_msgs
{

namespace msg
{

namespace builder
{

class Init_GraphMetaData_number_of_edges
{
public:
  explicit Init_GraphMetaData_number_of_edges(::graph_msgs::msg::GraphMetaData & msg)
  : msg_(msg)
  {}
  ::graph_msgs::msg::GraphMetaData number_of_edges(::graph_msgs::msg::GraphMetaData::_number_of_edges_type arg)
  {
    msg_.number_of_edges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msgs::msg::GraphMetaData msg_;
};

class Init_GraphMetaData_number_of_vertices
{
public:
  explicit Init_GraphMetaData_number_of_vertices(::graph_msgs::msg::GraphMetaData & msg)
  : msg_(msg)
  {}
  Init_GraphMetaData_number_of_edges number_of_vertices(::graph_msgs::msg::GraphMetaData::_number_of_vertices_type arg)
  {
    msg_.number_of_vertices = std::move(arg);
    return Init_GraphMetaData_number_of_edges(msg_);
  }

private:
  ::graph_msgs::msg::GraphMetaData msg_;
};

class Init_GraphMetaData_graph_type
{
public:
  explicit Init_GraphMetaData_graph_type(::graph_msgs::msg::GraphMetaData & msg)
  : msg_(msg)
  {}
  Init_GraphMetaData_number_of_vertices graph_type(::graph_msgs::msg::GraphMetaData::_graph_type_type arg)
  {
    msg_.graph_type = std::move(arg);
    return Init_GraphMetaData_number_of_vertices(msg_);
  }

private:
  ::graph_msgs::msg::GraphMetaData msg_;
};

class Init_GraphMetaData_graph_name
{
public:
  explicit Init_GraphMetaData_graph_name(::graph_msgs::msg::GraphMetaData & msg)
  : msg_(msg)
  {}
  Init_GraphMetaData_graph_type graph_name(::graph_msgs::msg::GraphMetaData::_graph_name_type arg)
  {
    msg_.graph_name = std::move(arg);
    return Init_GraphMetaData_graph_type(msg_);
  }

private:
  ::graph_msgs::msg::GraphMetaData msg_;
};

class Init_GraphMetaData_header
{
public:
  Init_GraphMetaData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraphMetaData_graph_name header(::graph_msgs::msg::GraphMetaData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GraphMetaData_graph_name(msg_);
  }

private:
  ::graph_msgs::msg::GraphMetaData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msgs::msg::GraphMetaData>()
{
  return graph_msgs::msg::builder::Init_GraphMetaData_header();
}

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__MSG__DETAIL__GRAPH_META_DATA__BUILDER_HPP_
