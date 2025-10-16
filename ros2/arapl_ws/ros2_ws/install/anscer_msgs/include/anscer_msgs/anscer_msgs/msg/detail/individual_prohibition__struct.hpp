// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/IndividualProhibition.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__INDIVIDUAL_PROHIBITION__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__INDIVIDUAL_PROHIBITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'zone'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__IndividualProhibition __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__IndividualProhibition __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IndividualProhibition_
{
  using Type = IndividualProhibition_<ContainerAllocator>;

  explicit IndividualProhibition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit IndividualProhibition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _zone_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _zone_type zone;

  // setters for named parameter idiom
  Type & set__zone(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->zone = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::IndividualProhibition_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::IndividualProhibition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::IndividualProhibition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::IndividualProhibition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::IndividualProhibition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::IndividualProhibition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::IndividualProhibition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::IndividualProhibition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::IndividualProhibition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::IndividualProhibition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__IndividualProhibition
    std::shared_ptr<anscer_msgs::msg::IndividualProhibition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__IndividualProhibition
    std::shared_ptr<anscer_msgs::msg::IndividualProhibition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IndividualProhibition_ & other) const
  {
    if (this->zone != other.zone) {
      return false;
    }
    return true;
  }
  bool operator!=(const IndividualProhibition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IndividualProhibition_

// alias to use template instance with default allocator
using IndividualProhibition =
  anscer_msgs::msg::IndividualProhibition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__INDIVIDUAL_PROHIBITION__STRUCT_HPP_
