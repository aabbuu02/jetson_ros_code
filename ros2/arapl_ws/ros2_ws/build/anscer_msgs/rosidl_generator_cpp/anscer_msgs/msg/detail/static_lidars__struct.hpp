// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/StaticLidars.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__STATIC_LIDARS__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__STATIC_LIDARS__STRUCT_HPP_

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
// Member 'point'
#include "anscer_msgs/msg/detail/static_lidar__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__StaticLidars __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__StaticLidars __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StaticLidars_
{
  using Type = StaticLidars_<ContainerAllocator>;

  explicit StaticLidars_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit StaticLidars_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _point_type =
    std::vector<anscer_msgs::msg::StaticLidar_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<anscer_msgs::msg::StaticLidar_<ContainerAllocator>>>;
  _point_type point;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__point(
    const std::vector<anscer_msgs::msg::StaticLidar_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<anscer_msgs::msg::StaticLidar_<ContainerAllocator>>> & _arg)
  {
    this->point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::StaticLidars_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::StaticLidars_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::StaticLidars_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::StaticLidars_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::StaticLidars_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::StaticLidars_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::StaticLidars_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::StaticLidars_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::StaticLidars_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::StaticLidars_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__StaticLidars
    std::shared_ptr<anscer_msgs::msg::StaticLidars_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__StaticLidars
    std::shared_ptr<anscer_msgs::msg::StaticLidars_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StaticLidars_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->point != other.point) {
      return false;
    }
    return true;
  }
  bool operator!=(const StaticLidars_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StaticLidars_

// alias to use template instance with default allocator
using StaticLidars =
  anscer_msgs::msg::StaticLidars_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__STATIC_LIDARS__STRUCT_HPP_
