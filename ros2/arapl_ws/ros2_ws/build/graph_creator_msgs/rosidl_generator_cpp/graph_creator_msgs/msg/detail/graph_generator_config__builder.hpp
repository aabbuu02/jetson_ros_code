// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graph_creator_msgs:msg/GraphGeneratorConfig.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_GENERATOR_CONFIG__BUILDER_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_GENERATOR_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graph_creator_msgs/msg/detail/graph_generator_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graph_creator_msgs
{

namespace msg
{

namespace builder
{

class Init_GraphGeneratorConfig_column_spacing
{
public:
  explicit Init_GraphGeneratorConfig_column_spacing(::graph_creator_msgs::msg::GraphGeneratorConfig & msg)
  : msg_(msg)
  {}
  ::graph_creator_msgs::msg::GraphGeneratorConfig column_spacing(::graph_creator_msgs::msg::GraphGeneratorConfig::_column_spacing_type arg)
  {
    msg_.column_spacing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

class Init_GraphGeneratorConfig_row_spacing
{
public:
  explicit Init_GraphGeneratorConfig_row_spacing(::graph_creator_msgs::msg::GraphGeneratorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphGeneratorConfig_column_spacing row_spacing(::graph_creator_msgs::msg::GraphGeneratorConfig::_row_spacing_type arg)
  {
    msg_.row_spacing = std::move(arg);
    return Init_GraphGeneratorConfig_column_spacing(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

class Init_GraphGeneratorConfig_columns
{
public:
  explicit Init_GraphGeneratorConfig_columns(::graph_creator_msgs::msg::GraphGeneratorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphGeneratorConfig_row_spacing columns(::graph_creator_msgs::msg::GraphGeneratorConfig::_columns_type arg)
  {
    msg_.columns = std::move(arg);
    return Init_GraphGeneratorConfig_row_spacing(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

class Init_GraphGeneratorConfig_rows
{
public:
  explicit Init_GraphGeneratorConfig_rows(::graph_creator_msgs::msg::GraphGeneratorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphGeneratorConfig_columns rows(::graph_creator_msgs::msg::GraphGeneratorConfig::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_GraphGeneratorConfig_columns(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

class Init_GraphGeneratorConfig_start_pose
{
public:
  explicit Init_GraphGeneratorConfig_start_pose(::graph_creator_msgs::msg::GraphGeneratorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphGeneratorConfig_rows start_pose(::graph_creator_msgs::msg::GraphGeneratorConfig::_start_pose_type arg)
  {
    msg_.start_pose = std::move(arg);
    return Init_GraphGeneratorConfig_rows(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

class Init_GraphGeneratorConfig_scale_y
{
public:
  explicit Init_GraphGeneratorConfig_scale_y(::graph_creator_msgs::msg::GraphGeneratorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphGeneratorConfig_start_pose scale_y(::graph_creator_msgs::msg::GraphGeneratorConfig::_scale_y_type arg)
  {
    msg_.scale_y = std::move(arg);
    return Init_GraphGeneratorConfig_start_pose(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

class Init_GraphGeneratorConfig_scale_x
{
public:
  explicit Init_GraphGeneratorConfig_scale_x(::graph_creator_msgs::msg::GraphGeneratorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphGeneratorConfig_scale_y scale_x(::graph_creator_msgs::msg::GraphGeneratorConfig::_scale_x_type arg)
  {
    msg_.scale_x = std::move(arg);
    return Init_GraphGeneratorConfig_scale_y(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

class Init_GraphGeneratorConfig_dxf_file_path
{
public:
  explicit Init_GraphGeneratorConfig_dxf_file_path(::graph_creator_msgs::msg::GraphGeneratorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphGeneratorConfig_scale_x dxf_file_path(::graph_creator_msgs::msg::GraphGeneratorConfig::_dxf_file_path_type arg)
  {
    msg_.dxf_file_path = std::move(arg);
    return Init_GraphGeneratorConfig_scale_x(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

class Init_GraphGeneratorConfig_edge_count_threshold
{
public:
  explicit Init_GraphGeneratorConfig_edge_count_threshold(::graph_creator_msgs::msg::GraphGeneratorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphGeneratorConfig_dxf_file_path edge_count_threshold(::graph_creator_msgs::msg::GraphGeneratorConfig::_edge_count_threshold_type arg)
  {
    msg_.edge_count_threshold = std::move(arg);
    return Init_GraphGeneratorConfig_dxf_file_path(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

class Init_GraphGeneratorConfig_use_edge_count_threshold
{
public:
  explicit Init_GraphGeneratorConfig_use_edge_count_threshold(::graph_creator_msgs::msg::GraphGeneratorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphGeneratorConfig_edge_count_threshold use_edge_count_threshold(::graph_creator_msgs::msg::GraphGeneratorConfig::_use_edge_count_threshold_type arg)
  {
    msg_.use_edge_count_threshold = std::move(arg);
    return Init_GraphGeneratorConfig_edge_count_threshold(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

class Init_GraphGeneratorConfig_ignore_vertex_orientation
{
public:
  explicit Init_GraphGeneratorConfig_ignore_vertex_orientation(::graph_creator_msgs::msg::GraphGeneratorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphGeneratorConfig_use_edge_count_threshold ignore_vertex_orientation(::graph_creator_msgs::msg::GraphGeneratorConfig::_ignore_vertex_orientation_type arg)
  {
    msg_.ignore_vertex_orientation = std::move(arg);
    return Init_GraphGeneratorConfig_use_edge_count_threshold(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

class Init_GraphGeneratorConfig_edge_direction_type
{
public:
  explicit Init_GraphGeneratorConfig_edge_direction_type(::graph_creator_msgs::msg::GraphGeneratorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphGeneratorConfig_ignore_vertex_orientation edge_direction_type(::graph_creator_msgs::msg::GraphGeneratorConfig::_edge_direction_type_type arg)
  {
    msg_.edge_direction_type = std::move(arg);
    return Init_GraphGeneratorConfig_ignore_vertex_orientation(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

class Init_GraphGeneratorConfig_edge_creation_type
{
public:
  explicit Init_GraphGeneratorConfig_edge_creation_type(::graph_creator_msgs::msg::GraphGeneratorConfig & msg)
  : msg_(msg)
  {}
  Init_GraphGeneratorConfig_edge_direction_type edge_creation_type(::graph_creator_msgs::msg::GraphGeneratorConfig::_edge_creation_type_type arg)
  {
    msg_.edge_creation_type = std::move(arg);
    return Init_GraphGeneratorConfig_edge_direction_type(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

class Init_GraphGeneratorConfig_generation_type
{
public:
  Init_GraphGeneratorConfig_generation_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraphGeneratorConfig_edge_creation_type generation_type(::graph_creator_msgs::msg::GraphGeneratorConfig::_generation_type_type arg)
  {
    msg_.generation_type = std::move(arg);
    return Init_GraphGeneratorConfig_edge_creation_type(msg_);
  }

private:
  ::graph_creator_msgs::msg::GraphGeneratorConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graph_creator_msgs::msg::GraphGeneratorConfig>()
{
  return graph_creator_msgs::msg::builder::Init_GraphGeneratorConfig_generation_type();
}

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_GENERATOR_CONFIG__BUILDER_HPP_
