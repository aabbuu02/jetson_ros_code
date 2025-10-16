// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_creator_msgs:msg/SelectedGraphElements.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__SELECTED_GRAPH_ELEMENTS__STRUCT_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__SELECTED_GRAPH_ELEMENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__graph_creator_msgs__msg__SelectedGraphElements __attribute__((deprecated))
#else
# define DEPRECATED__graph_creator_msgs__msg__SelectedGraphElements __declspec(deprecated)
#endif

namespace graph_creator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SelectedGraphElements_
{
  using Type = SelectedGraphElements_<ContainerAllocator>;

  explicit SelectedGraphElements_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SelectedGraphElements_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _all_vertices_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _all_vertices_type all_vertices;
  using _all_edges_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _all_edges_type all_edges;

  // setters for named parameter idiom
  Type & set__all_vertices(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->all_vertices = _arg;
    return *this;
  }
  Type & set__all_edges(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->all_edges = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_creator_msgs::msg::SelectedGraphElements_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_creator_msgs::msg::SelectedGraphElements_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_creator_msgs::msg::SelectedGraphElements_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_creator_msgs::msg::SelectedGraphElements_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::msg::SelectedGraphElements_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::msg::SelectedGraphElements_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::msg::SelectedGraphElements_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::msg::SelectedGraphElements_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_creator_msgs::msg::SelectedGraphElements_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_creator_msgs::msg::SelectedGraphElements_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_creator_msgs__msg__SelectedGraphElements
    std::shared_ptr<graph_creator_msgs::msg::SelectedGraphElements_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_creator_msgs__msg__SelectedGraphElements
    std::shared_ptr<graph_creator_msgs::msg::SelectedGraphElements_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SelectedGraphElements_ & other) const
  {
    if (this->all_vertices != other.all_vertices) {
      return false;
    }
    if (this->all_edges != other.all_edges) {
      return false;
    }
    return true;
  }
  bool operator!=(const SelectedGraphElements_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SelectedGraphElements_

// alias to use template instance with default allocator
using SelectedGraphElements =
  graph_creator_msgs::msg::SelectedGraphElements_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__SELECTED_GRAPH_ELEMENTS__STRUCT_HPP_
