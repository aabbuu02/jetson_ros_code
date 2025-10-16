// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__EDGE__STRUCT_HPP_
#define GRAPH_MSGS__MSG__DETAIL__EDGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'control_points'
// Member 'control_orientation'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_array__struct.hpp"
// Member 'properties'
#include "graph_msgs/msg/detail/property__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msgs__msg__Edge __attribute__((deprecated))
#else
# define DEPRECATED__graph_msgs__msg__Edge __declspec(deprecated)
#endif

namespace graph_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Edge_
{
  using Type = Edge_<ContainerAllocator>;

  explicit Edge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control_orientation(_init),
    poses(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->alias = "";
      this->type = 0;
      this->edge_direction_type = 0;
      this->creation_type = 0;
      this->source_vertex_id = 0ul;
      this->target_vertex_id = 0ul;
      this->length = 0.0;
      this->cost_factor = 0.0;
      this->bidirectional = false;
      this->independent_orientation = false;
    }
  }

  explicit Edge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    alias(_alloc),
    control_orientation(_alloc, _init),
    poses(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->alias = "";
      this->type = 0;
      this->edge_direction_type = 0;
      this->creation_type = 0;
      this->source_vertex_id = 0ul;
      this->target_vertex_id = 0ul;
      this->length = 0.0;
      this->cost_factor = 0.0;
      this->bidirectional = false;
      this->independent_orientation = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _alias_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _alias_type alias;
  using _type_type =
    uint8_t;
  _type_type type;
  using _edge_direction_type_type =
    uint8_t;
  _edge_direction_type_type edge_direction_type;
  using _creation_type_type =
    uint8_t;
  _creation_type_type creation_type;
  using _source_vertex_id_type =
    uint32_t;
  _source_vertex_id_type source_vertex_id;
  using _target_vertex_id_type =
    uint32_t;
  _target_vertex_id_type target_vertex_id;
  using _length_type =
    double;
  _length_type length;
  using _cost_factor_type =
    double;
  _cost_factor_type cost_factor;
  using _bidirectional_type =
    bool;
  _bidirectional_type bidirectional;
  using _independent_orientation_type =
    bool;
  _independent_orientation_type independent_orientation;
  using _control_points_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _control_points_type control_points;
  using _control_orientation_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _control_orientation_type control_orientation;
  using _poses_type =
    geometry_msgs::msg::PoseArray_<ContainerAllocator>;
  _poses_type poses;
  using _properties_type =
    std::vector<graph_msgs::msg::Property_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graph_msgs::msg::Property_<ContainerAllocator>>>;
  _properties_type properties;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__alias(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->alias = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__edge_direction_type(
    const uint8_t & _arg)
  {
    this->edge_direction_type = _arg;
    return *this;
  }
  Type & set__creation_type(
    const uint8_t & _arg)
  {
    this->creation_type = _arg;
    return *this;
  }
  Type & set__source_vertex_id(
    const uint32_t & _arg)
  {
    this->source_vertex_id = _arg;
    return *this;
  }
  Type & set__target_vertex_id(
    const uint32_t & _arg)
  {
    this->target_vertex_id = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__cost_factor(
    const double & _arg)
  {
    this->cost_factor = _arg;
    return *this;
  }
  Type & set__bidirectional(
    const bool & _arg)
  {
    this->bidirectional = _arg;
    return *this;
  }
  Type & set__independent_orientation(
    const bool & _arg)
  {
    this->independent_orientation = _arg;
    return *this;
  }
  Type & set__control_points(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->control_points = _arg;
    return *this;
  }
  Type & set__control_orientation(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->control_orientation = _arg;
    return *this;
  }
  Type & set__poses(
    const geometry_msgs::msg::PoseArray_<ContainerAllocator> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__properties(
    const std::vector<graph_msgs::msg::Property_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graph_msgs::msg::Property_<ContainerAllocator>>> & _arg)
  {
    this->properties = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STRAIGHT_LINE =
    0u;
  static constexpr uint8_t CUBIC_BEZIER =
    1u;
  static constexpr uint8_t FORWARD =
    0u;
  static constexpr uint8_t REVERSE =
    1u;
  static constexpr uint8_t BIDIRECTIONAL =
    2u;
  static constexpr uint8_t CREATED =
    0u;
  static constexpr uint8_t GENERATED =
    1u;

  // pointer types
  using RawPtr =
    graph_msgs::msg::Edge_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msgs::msg::Edge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msgs::msg::Edge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msgs::msg::Edge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msgs::msg::Edge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::msg::Edge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msgs::msg::Edge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::msg::Edge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msgs::msg::Edge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msgs::msg::Edge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msgs__msg__Edge
    std::shared_ptr<graph_msgs::msg::Edge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msgs__msg__Edge
    std::shared_ptr<graph_msgs::msg::Edge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Edge_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->alias != other.alias) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->edge_direction_type != other.edge_direction_type) {
      return false;
    }
    if (this->creation_type != other.creation_type) {
      return false;
    }
    if (this->source_vertex_id != other.source_vertex_id) {
      return false;
    }
    if (this->target_vertex_id != other.target_vertex_id) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->cost_factor != other.cost_factor) {
      return false;
    }
    if (this->bidirectional != other.bidirectional) {
      return false;
    }
    if (this->independent_orientation != other.independent_orientation) {
      return false;
    }
    if (this->control_points != other.control_points) {
      return false;
    }
    if (this->control_orientation != other.control_orientation) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    if (this->properties != other.properties) {
      return false;
    }
    return true;
  }
  bool operator!=(const Edge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Edge_

// alias to use template instance with default allocator
using Edge =
  graph_msgs::msg::Edge_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Edge_<ContainerAllocator>::STRAIGHT_LINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Edge_<ContainerAllocator>::CUBIC_BEZIER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Edge_<ContainerAllocator>::FORWARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Edge_<ContainerAllocator>::REVERSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Edge_<ContainerAllocator>::BIDIRECTIONAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Edge_<ContainerAllocator>::CREATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Edge_<ContainerAllocator>::GENERATED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__MSG__DETAIL__EDGE__STRUCT_HPP_
