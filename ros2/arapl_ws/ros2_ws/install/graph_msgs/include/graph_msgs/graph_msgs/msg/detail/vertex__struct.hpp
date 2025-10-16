// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msgs:msg/Vertex.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__VERTEX__STRUCT_HPP_
#define GRAPH_MSGS__MSG__DETAIL__VERTEX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'properties'
#include "graph_msgs/msg/detail/property__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msgs__msg__Vertex __attribute__((deprecated))
#else
# define DEPRECATED__graph_msgs__msg__Vertex __declspec(deprecated)
#endif

namespace graph_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vertex_
{
  using Type = Vertex_<ContainerAllocator>;

  explicit Vertex_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->name = "";
      this->alias = "";
      this->type = 0;
      this->ignore_orientation = false;
    }
  }

  explicit Vertex_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    alias(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->name = "";
      this->alias = "";
      this->type = 0;
      this->ignore_orientation = false;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _alias_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _alias_type alias;
  using _type_type =
    uint8_t;
  _type_type type;
  using _ignore_orientation_type =
    bool;
  _ignore_orientation_type ignore_orientation;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _properties_type =
    std::vector<graph_msgs::msg::Property_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graph_msgs::msg::Property_<ContainerAllocator>>>;
  _properties_type properties;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
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
  Type & set__ignore_orientation(
    const bool & _arg)
  {
    this->ignore_orientation = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__properties(
    const std::vector<graph_msgs::msg::Property_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graph_msgs::msg::Property_<ContainerAllocator>>> & _arg)
  {
    this->properties = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NORMAL =
    0u;
  static constexpr uint8_t PARK =
    1u;
  static constexpr uint8_t CHARGE =
    2u;
  static constexpr uint8_t CONTROL =
    3u;
  static constexpr uint8_t REPORT =
    4u;

  // pointer types
  using RawPtr =
    graph_msgs::msg::Vertex_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msgs::msg::Vertex_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msgs::msg::Vertex_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msgs::msg::Vertex_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msgs::msg::Vertex_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::msg::Vertex_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msgs::msg::Vertex_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::msg::Vertex_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msgs::msg::Vertex_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msgs::msg::Vertex_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msgs__msg__Vertex
    std::shared_ptr<graph_msgs::msg::Vertex_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msgs__msg__Vertex
    std::shared_ptr<graph_msgs::msg::Vertex_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vertex_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->alias != other.alias) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->ignore_orientation != other.ignore_orientation) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->properties != other.properties) {
      return false;
    }
    return true;
  }
  bool operator!=(const Vertex_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vertex_

// alias to use template instance with default allocator
using Vertex =
  graph_msgs::msg::Vertex_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vertex_<ContainerAllocator>::NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vertex_<ContainerAllocator>::PARK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vertex_<ContainerAllocator>::CHARGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vertex_<ContainerAllocator>::CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Vertex_<ContainerAllocator>::REPORT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__MSG__DETAIL__VERTEX__STRUCT_HPP_
