// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/Paths.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__PATHS__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__PATHS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'global_path'
#include "anscer_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__Paths __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__Paths __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Paths_
{
  using Type = Paths_<ContainerAllocator>;

  explicit Paths_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Paths_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _global_path_type =
    std::vector<anscer_msgs::msg::Path_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<anscer_msgs::msg::Path_<ContainerAllocator>>>;
  _global_path_type global_path;

  // setters for named parameter idiom
  Type & set__global_path(
    const std::vector<anscer_msgs::msg::Path_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<anscer_msgs::msg::Path_<ContainerAllocator>>> & _arg)
  {
    this->global_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::Paths_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::Paths_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::Paths_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::Paths_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::Paths_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::Paths_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::Paths_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::Paths_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::Paths_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::Paths_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__Paths
    std::shared_ptr<anscer_msgs::msg::Paths_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__Paths
    std::shared_ptr<anscer_msgs::msg::Paths_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Paths_ & other) const
  {
    if (this->global_path != other.global_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const Paths_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Paths_

// alias to use template instance with default allocator
using Paths =
  anscer_msgs::msg::Paths_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__PATHS__STRUCT_HPP_
