// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msgs:msg/GraphMetaData.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__GRAPH_META_DATA__STRUCT_HPP_
#define GRAPH_MSGS__MSG__DETAIL__GRAPH_META_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msgs__msg__GraphMetaData __attribute__((deprecated))
#else
# define DEPRECATED__graph_msgs__msg__GraphMetaData __declspec(deprecated)
#endif

namespace graph_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraphMetaData_
{
  using Type = GraphMetaData_<ContainerAllocator>;

  explicit GraphMetaData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->graph_name = "";
      this->graph_type = 0;
      this->number_of_vertices = 0ul;
      this->number_of_edges = 0ul;
    }
  }

  explicit GraphMetaData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    graph_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->graph_name = "";
      this->graph_type = 0;
      this->number_of_vertices = 0ul;
      this->number_of_edges = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _graph_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _graph_name_type graph_name;
  using _graph_type_type =
    uint8_t;
  _graph_type_type graph_type;
  using _number_of_vertices_type =
    uint32_t;
  _number_of_vertices_type number_of_vertices;
  using _number_of_edges_type =
    uint32_t;
  _number_of_edges_type number_of_edges;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__graph_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->graph_name = _arg;
    return *this;
  }
  Type & set__graph_type(
    const uint8_t & _arg)
  {
    this->graph_type = _arg;
    return *this;
  }
  Type & set__number_of_vertices(
    const uint32_t & _arg)
  {
    this->number_of_vertices = _arg;
    return *this;
  }
  Type & set__number_of_edges(
    const uint32_t & _arg)
  {
    this->number_of_edges = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DIRECTED =
    0u;
  static constexpr uint8_t UNDIRECTED =
    1u;

  // pointer types
  using RawPtr =
    graph_msgs::msg::GraphMetaData_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msgs::msg::GraphMetaData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msgs::msg::GraphMetaData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msgs::msg::GraphMetaData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msgs::msg::GraphMetaData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::msg::GraphMetaData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msgs::msg::GraphMetaData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::msg::GraphMetaData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msgs::msg::GraphMetaData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msgs::msg::GraphMetaData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msgs__msg__GraphMetaData
    std::shared_ptr<graph_msgs::msg::GraphMetaData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msgs__msg__GraphMetaData
    std::shared_ptr<graph_msgs::msg::GraphMetaData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraphMetaData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->graph_name != other.graph_name) {
      return false;
    }
    if (this->graph_type != other.graph_type) {
      return false;
    }
    if (this->number_of_vertices != other.number_of_vertices) {
      return false;
    }
    if (this->number_of_edges != other.number_of_edges) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraphMetaData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraphMetaData_

// alias to use template instance with default allocator
using GraphMetaData =
  graph_msgs::msg::GraphMetaData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GraphMetaData_<ContainerAllocator>::DIRECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GraphMetaData_<ContainerAllocator>::UNDIRECTED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__MSG__DETAIL__GRAPH_META_DATA__STRUCT_HPP_
