// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__GRAPH__STRUCT_HPP_
#define GRAPH_MSGS__MSG__DETAIL__GRAPH__STRUCT_HPP_

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
// Member 'meta_data'
#include "graph_msgs/msg/detail/graph_meta_data__struct.hpp"
// Member 'vertices'
#include "graph_msgs/msg/detail/vertex__struct.hpp"
// Member 'edges'
#include "graph_msgs/msg/detail/edge__struct.hpp"
// Member 'properties'
#include "graph_msgs/msg/detail/property__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_msgs__msg__Graph __attribute__((deprecated))
#else
# define DEPRECATED__graph_msgs__msg__Graph __declspec(deprecated)
#endif

namespace graph_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Graph_
{
  using Type = Graph_<ContainerAllocator>;

  explicit Graph_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    meta_data(_init)
  {
    (void)_init;
  }

  explicit Graph_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    meta_data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _meta_data_type =
    graph_msgs::msg::GraphMetaData_<ContainerAllocator>;
  _meta_data_type meta_data;
  using _vertices_type =
    std::vector<graph_msgs::msg::Vertex_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graph_msgs::msg::Vertex_<ContainerAllocator>>>;
  _vertices_type vertices;
  using _edges_type =
    std::vector<graph_msgs::msg::Edge_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graph_msgs::msg::Edge_<ContainerAllocator>>>;
  _edges_type edges;
  using _properties_type =
    std::vector<graph_msgs::msg::Property_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graph_msgs::msg::Property_<ContainerAllocator>>>;
  _properties_type properties;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__meta_data(
    const graph_msgs::msg::GraphMetaData_<ContainerAllocator> & _arg)
  {
    this->meta_data = _arg;
    return *this;
  }
  Type & set__vertices(
    const std::vector<graph_msgs::msg::Vertex_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graph_msgs::msg::Vertex_<ContainerAllocator>>> & _arg)
  {
    this->vertices = _arg;
    return *this;
  }
  Type & set__edges(
    const std::vector<graph_msgs::msg::Edge_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graph_msgs::msg::Edge_<ContainerAllocator>>> & _arg)
  {
    this->edges = _arg;
    return *this;
  }
  Type & set__properties(
    const std::vector<graph_msgs::msg::Property_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graph_msgs::msg::Property_<ContainerAllocator>>> & _arg)
  {
    this->properties = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_msgs::msg::Graph_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_msgs::msg::Graph_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_msgs::msg::Graph_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_msgs::msg::Graph_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_msgs::msg::Graph_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::msg::Graph_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_msgs::msg::Graph_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_msgs::msg::Graph_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_msgs::msg::Graph_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_msgs::msg::Graph_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_msgs__msg__Graph
    std::shared_ptr<graph_msgs::msg::Graph_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_msgs__msg__Graph
    std::shared_ptr<graph_msgs::msg::Graph_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Graph_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->meta_data != other.meta_data) {
      return false;
    }
    if (this->vertices != other.vertices) {
      return false;
    }
    if (this->edges != other.edges) {
      return false;
    }
    if (this->properties != other.properties) {
      return false;
    }
    return true;
  }
  bool operator!=(const Graph_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Graph_

// alias to use template instance with default allocator
using Graph =
  graph_msgs::msg::Graph_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_msgs

#endif  // GRAPH_MSGS__MSG__DETAIL__GRAPH__STRUCT_HPP_
