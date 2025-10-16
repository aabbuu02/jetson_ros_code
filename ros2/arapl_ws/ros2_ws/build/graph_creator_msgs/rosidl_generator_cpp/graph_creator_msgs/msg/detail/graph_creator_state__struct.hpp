// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_creator_msgs:msg/GraphCreatorState.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_STATE__STRUCT_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__graph_creator_msgs__msg__GraphCreatorState __attribute__((deprecated))
#else
# define DEPRECATED__graph_creator_msgs__msg__GraphCreatorState __declspec(deprecated)
#endif

namespace graph_creator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraphCreatorState_
{
  using Type = GraphCreatorState_<ContainerAllocator>;

  explicit GraphCreatorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->graph_mode = 0;
      this->current_edge_type = 0;
      this->edge_is_bidirectional = false;
      this->all_vertices_locked = false;
      this->all_edges_locked = false;
    }
  }

  explicit GraphCreatorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->graph_mode = 0;
      this->current_edge_type = 0;
      this->edge_is_bidirectional = false;
      this->all_vertices_locked = false;
      this->all_edges_locked = false;
    }
  }

  // field types and members
  using _graph_mode_type =
    uint8_t;
  _graph_mode_type graph_mode;
  using _current_edge_type_type =
    uint8_t;
  _current_edge_type_type current_edge_type;
  using _edge_is_bidirectional_type =
    bool;
  _edge_is_bidirectional_type edge_is_bidirectional;
  using _all_vertices_locked_type =
    bool;
  _all_vertices_locked_type all_vertices_locked;
  using _all_edges_locked_type =
    bool;
  _all_edges_locked_type all_edges_locked;

  // setters for named parameter idiom
  Type & set__graph_mode(
    const uint8_t & _arg)
  {
    this->graph_mode = _arg;
    return *this;
  }
  Type & set__current_edge_type(
    const uint8_t & _arg)
  {
    this->current_edge_type = _arg;
    return *this;
  }
  Type & set__edge_is_bidirectional(
    const bool & _arg)
  {
    this->edge_is_bidirectional = _arg;
    return *this;
  }
  Type & set__all_vertices_locked(
    const bool & _arg)
  {
    this->all_vertices_locked = _arg;
    return *this;
  }
  Type & set__all_edges_locked(
    const bool & _arg)
  {
    this->all_edges_locked = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_creator_msgs::msg::GraphCreatorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_creator_msgs::msg::GraphCreatorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_creator_msgs::msg::GraphCreatorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_creator_msgs::msg::GraphCreatorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::msg::GraphCreatorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::msg::GraphCreatorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::msg::GraphCreatorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::msg::GraphCreatorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_creator_msgs::msg::GraphCreatorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_creator_msgs::msg::GraphCreatorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_creator_msgs__msg__GraphCreatorState
    std::shared_ptr<graph_creator_msgs::msg::GraphCreatorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_creator_msgs__msg__GraphCreatorState
    std::shared_ptr<graph_creator_msgs::msg::GraphCreatorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraphCreatorState_ & other) const
  {
    if (this->graph_mode != other.graph_mode) {
      return false;
    }
    if (this->current_edge_type != other.current_edge_type) {
      return false;
    }
    if (this->edge_is_bidirectional != other.edge_is_bidirectional) {
      return false;
    }
    if (this->all_vertices_locked != other.all_vertices_locked) {
      return false;
    }
    if (this->all_edges_locked != other.all_edges_locked) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraphCreatorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraphCreatorState_

// alias to use template instance with default allocator
using GraphCreatorState =
  graph_creator_msgs::msg::GraphCreatorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_STATE__STRUCT_HPP_
