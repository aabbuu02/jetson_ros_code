// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_creator_msgs:msg/GraphGeneratorConfig.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_GENERATOR_CONFIG__STRUCT_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_GENERATOR_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'edge_creation_type'
#include "graph_creator_msgs/msg/detail/edge_creation_type__struct.hpp"
// Member 'edge_direction_type'
#include "graph_creator_msgs/msg/detail/edge_direction_creation_type__struct.hpp"
// Member 'start_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_creator_msgs__msg__GraphGeneratorConfig __attribute__((deprecated))
#else
# define DEPRECATED__graph_creator_msgs__msg__GraphGeneratorConfig __declspec(deprecated)
#endif

namespace graph_creator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraphGeneratorConfig_
{
  using Type = GraphGeneratorConfig_<ContainerAllocator>;

  explicit GraphGeneratorConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : edge_creation_type(_init),
    edge_direction_type(_init),
    start_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->generation_type = 0;
      this->ignore_vertex_orientation = false;
      this->use_edge_count_threshold = false;
      this->edge_count_threshold = 0ul;
      this->dxf_file_path = "";
      this->scale_x = 0.0f;
      this->scale_y = 0.0f;
      this->rows = 0ul;
      this->columns = 0ul;
      this->row_spacing = 0.0f;
      this->column_spacing = 0.0f;
    }
  }

  explicit GraphGeneratorConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : edge_creation_type(_alloc, _init),
    edge_direction_type(_alloc, _init),
    dxf_file_path(_alloc),
    start_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->generation_type = 0;
      this->ignore_vertex_orientation = false;
      this->use_edge_count_threshold = false;
      this->edge_count_threshold = 0ul;
      this->dxf_file_path = "";
      this->scale_x = 0.0f;
      this->scale_y = 0.0f;
      this->rows = 0ul;
      this->columns = 0ul;
      this->row_spacing = 0.0f;
      this->column_spacing = 0.0f;
    }
  }

  // field types and members
  using _generation_type_type =
    uint8_t;
  _generation_type_type generation_type;
  using _edge_creation_type_type =
    graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator>;
  _edge_creation_type_type edge_creation_type;
  using _edge_direction_type_type =
    graph_creator_msgs::msg::EdgeDirectionCreationType_<ContainerAllocator>;
  _edge_direction_type_type edge_direction_type;
  using _ignore_vertex_orientation_type =
    bool;
  _ignore_vertex_orientation_type ignore_vertex_orientation;
  using _use_edge_count_threshold_type =
    bool;
  _use_edge_count_threshold_type use_edge_count_threshold;
  using _edge_count_threshold_type =
    uint32_t;
  _edge_count_threshold_type edge_count_threshold;
  using _dxf_file_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _dxf_file_path_type dxf_file_path;
  using _scale_x_type =
    float;
  _scale_x_type scale_x;
  using _scale_y_type =
    float;
  _scale_y_type scale_y;
  using _start_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _start_pose_type start_pose;
  using _rows_type =
    uint32_t;
  _rows_type rows;
  using _columns_type =
    uint32_t;
  _columns_type columns;
  using _row_spacing_type =
    float;
  _row_spacing_type row_spacing;
  using _column_spacing_type =
    float;
  _column_spacing_type column_spacing;

  // setters for named parameter idiom
  Type & set__generation_type(
    const uint8_t & _arg)
  {
    this->generation_type = _arg;
    return *this;
  }
  Type & set__edge_creation_type(
    const graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator> & _arg)
  {
    this->edge_creation_type = _arg;
    return *this;
  }
  Type & set__edge_direction_type(
    const graph_creator_msgs::msg::EdgeDirectionCreationType_<ContainerAllocator> & _arg)
  {
    this->edge_direction_type = _arg;
    return *this;
  }
  Type & set__ignore_vertex_orientation(
    const bool & _arg)
  {
    this->ignore_vertex_orientation = _arg;
    return *this;
  }
  Type & set__use_edge_count_threshold(
    const bool & _arg)
  {
    this->use_edge_count_threshold = _arg;
    return *this;
  }
  Type & set__edge_count_threshold(
    const uint32_t & _arg)
  {
    this->edge_count_threshold = _arg;
    return *this;
  }
  Type & set__dxf_file_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->dxf_file_path = _arg;
    return *this;
  }
  Type & set__scale_x(
    const float & _arg)
  {
    this->scale_x = _arg;
    return *this;
  }
  Type & set__scale_y(
    const float & _arg)
  {
    this->scale_y = _arg;
    return *this;
  }
  Type & set__start_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->start_pose = _arg;
    return *this;
  }
  Type & set__rows(
    const uint32_t & _arg)
  {
    this->rows = _arg;
    return *this;
  }
  Type & set__columns(
    const uint32_t & _arg)
  {
    this->columns = _arg;
    return *this;
  }
  Type & set__row_spacing(
    const float & _arg)
  {
    this->row_spacing = _arg;
    return *this;
  }
  Type & set__column_spacing(
    const float & _arg)
  {
    this->column_spacing = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t GRAPH_GENERATION_TYPE_GRID =
    0u;
  static constexpr uint8_t GRAPH_GENERATION_TYPE_DXF =
    1u;

  // pointer types
  using RawPtr =
    graph_creator_msgs::msg::GraphGeneratorConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_creator_msgs::msg::GraphGeneratorConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_creator_msgs::msg::GraphGeneratorConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_creator_msgs::msg::GraphGeneratorConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::msg::GraphGeneratorConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::msg::GraphGeneratorConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::msg::GraphGeneratorConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::msg::GraphGeneratorConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_creator_msgs::msg::GraphGeneratorConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_creator_msgs::msg::GraphGeneratorConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_creator_msgs__msg__GraphGeneratorConfig
    std::shared_ptr<graph_creator_msgs::msg::GraphGeneratorConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_creator_msgs__msg__GraphGeneratorConfig
    std::shared_ptr<graph_creator_msgs::msg::GraphGeneratorConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraphGeneratorConfig_ & other) const
  {
    if (this->generation_type != other.generation_type) {
      return false;
    }
    if (this->edge_creation_type != other.edge_creation_type) {
      return false;
    }
    if (this->edge_direction_type != other.edge_direction_type) {
      return false;
    }
    if (this->ignore_vertex_orientation != other.ignore_vertex_orientation) {
      return false;
    }
    if (this->use_edge_count_threshold != other.use_edge_count_threshold) {
      return false;
    }
    if (this->edge_count_threshold != other.edge_count_threshold) {
      return false;
    }
    if (this->dxf_file_path != other.dxf_file_path) {
      return false;
    }
    if (this->scale_x != other.scale_x) {
      return false;
    }
    if (this->scale_y != other.scale_y) {
      return false;
    }
    if (this->start_pose != other.start_pose) {
      return false;
    }
    if (this->rows != other.rows) {
      return false;
    }
    if (this->columns != other.columns) {
      return false;
    }
    if (this->row_spacing != other.row_spacing) {
      return false;
    }
    if (this->column_spacing != other.column_spacing) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraphGeneratorConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraphGeneratorConfig_

// alias to use template instance with default allocator
using GraphGeneratorConfig =
  graph_creator_msgs::msg::GraphGeneratorConfig_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GraphGeneratorConfig_<ContainerAllocator>::GRAPH_GENERATION_TYPE_GRID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GraphGeneratorConfig_<ContainerAllocator>::GRAPH_GENERATION_TYPE_DXF;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_GENERATOR_CONFIG__STRUCT_HPP_
