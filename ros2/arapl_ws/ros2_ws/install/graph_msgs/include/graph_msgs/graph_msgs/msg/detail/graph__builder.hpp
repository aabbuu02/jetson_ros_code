// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__GRAPH__BUILDER_HPP_
#define GRAPH_MSGS__MSG__DETAIL__GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_msgs/msg/detail/graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_msgs
{

namespace msg
{

namespace builder
{

class Init_Graph_properties
{
public:
  explicit Init_Graph_properties(::graph_msgs::msg::Graph & msg)
  : msg_(msg)
  {}
  ::graph_msgs::msg::Graph properties(::graph_msgs::msg::Graph::_properties_type arg)
  {
    msg_.properties = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_msgs::msg::Graph msg_;
};

class Init_Graph_edges
{
public:
  explicit Init_Graph_edges(::graph_msgs::msg::Graph & msg)
  : msg_(msg)
  {}
  Init_Graph_properties edges(::graph_msgs::msg::Graph::_edges_type arg)
  {
    msg_.edges = std::move(arg);
    return Init_Graph_properties(msg_);
  }

private:
  ::graph_msgs::msg::Graph msg_;
};

class Init_Graph_vertices
{
public:
  explicit Init_Graph_vertices(::graph_msgs::msg::Graph & msg)
  : msg_(msg)
  {}
  Init_Graph_edges vertices(::graph_msgs::msg::Graph::_vertices_type arg)
  {
    msg_.vertices = std::move(arg);
    return Init_Graph_edges(msg_);
  }

private:
  ::graph_msgs::msg::Graph msg_;
};

class Init_Graph_meta_data
{
public:
  explicit Init_Graph_meta_data(::graph_msgs::msg::Graph & msg)
  : msg_(msg)
  {}
  Init_Graph_vertices meta_data(::graph_msgs::msg::Graph::_meta_data_type arg)
  {
    msg_.meta_data = std::move(arg);
    return Init_Graph_vertices(msg_);
  }

private:
  ::graph_msgs::msg::Graph msg_;
};

class Init_Graph_header
{
public:
  Init_Graph_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Graph_meta_data header(::graph_msgs::msg::Graph::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Graph_meta_data(msg_);
  }

private:
  ::graph_msgs::msg::Graph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_msgs::msg::Graph>()
{
  return graph_msgs::msg::builder::Init_Graph_header();
}

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__MSG__DETAIL__GRAPH__BUILDER_HPP_
