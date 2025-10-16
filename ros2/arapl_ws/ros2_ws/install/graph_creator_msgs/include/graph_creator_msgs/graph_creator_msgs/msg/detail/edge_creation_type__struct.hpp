// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_creator_msgs:msg/EdgeCreationType.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__EDGE_CREATION_TYPE__STRUCT_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__EDGE_CREATION_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__graph_creator_msgs__msg__EdgeCreationType __attribute__((deprecated))
#else
# define DEPRECATED__graph_creator_msgs__msg__EdgeCreationType __declspec(deprecated)
#endif

namespace graph_creator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EdgeCreationType_
{
  using Type = EdgeCreationType_<ContainerAllocator>;

  explicit EdgeCreationType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit EdgeCreationType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t EDGE_CREATION_TYPE_STRAIGHT_LINE =
    0u;
  static constexpr uint8_t EDGE_CREATION_TYPE_CUBIC_BEZIER =
    1u;

  // pointer types
  using RawPtr =
    graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_creator_msgs__msg__EdgeCreationType
    std::shared_ptr<graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_creator_msgs__msg__EdgeCreationType
    std::shared_ptr<graph_creator_msgs::msg::EdgeCreationType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EdgeCreationType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const EdgeCreationType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EdgeCreationType_

// alias to use template instance with default allocator
using EdgeCreationType =
  graph_creator_msgs::msg::EdgeCreationType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EdgeCreationType_<ContainerAllocator>::EDGE_CREATION_TYPE_STRAIGHT_LINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EdgeCreationType_<ContainerAllocator>::EDGE_CREATION_TYPE_CUBIC_BEZIER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__EDGE_CREATION_TYPE__STRUCT_HPP_
