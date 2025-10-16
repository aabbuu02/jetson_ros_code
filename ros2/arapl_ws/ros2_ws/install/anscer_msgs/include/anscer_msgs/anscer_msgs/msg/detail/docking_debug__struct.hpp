// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/DockingDebug.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__DOCKING_DEBUG__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__DOCKING_DEBUG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__DockingDebug __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__DockingDebug __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockingDebug_
{
  using Type = DockingDebug_<ContainerAllocator>;

  explicit DockingDebug_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->curvature = 0.0f;
      this->delta = 0.0f;
      this->theta = 0.0f;
      this->orientation_error = 0.0f;
      this->distance_to_goal = 0.0f;
    }
  }

  explicit DockingDebug_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->curvature = 0.0f;
      this->delta = 0.0f;
      this->theta = 0.0f;
      this->orientation_error = 0.0f;
      this->distance_to_goal = 0.0f;
    }
  }

  // field types and members
  using _curvature_type =
    float;
  _curvature_type curvature;
  using _delta_type =
    float;
  _delta_type delta;
  using _theta_type =
    float;
  _theta_type theta;
  using _orientation_error_type =
    float;
  _orientation_error_type orientation_error;
  using _distance_to_goal_type =
    float;
  _distance_to_goal_type distance_to_goal;

  // setters for named parameter idiom
  Type & set__curvature(
    const float & _arg)
  {
    this->curvature = _arg;
    return *this;
  }
  Type & set__delta(
    const float & _arg)
  {
    this->delta = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__orientation_error(
    const float & _arg)
  {
    this->orientation_error = _arg;
    return *this;
  }
  Type & set__distance_to_goal(
    const float & _arg)
  {
    this->distance_to_goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::DockingDebug_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::DockingDebug_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::DockingDebug_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::DockingDebug_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::DockingDebug_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::DockingDebug_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::DockingDebug_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::DockingDebug_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::DockingDebug_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::DockingDebug_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__DockingDebug
    std::shared_ptr<anscer_msgs::msg::DockingDebug_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__DockingDebug
    std::shared_ptr<anscer_msgs::msg::DockingDebug_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockingDebug_ & other) const
  {
    if (this->curvature != other.curvature) {
      return false;
    }
    if (this->delta != other.delta) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->orientation_error != other.orientation_error) {
      return false;
    }
    if (this->distance_to_goal != other.distance_to_goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockingDebug_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockingDebug_

// alias to use template instance with default allocator
using DockingDebug =
  anscer_msgs::msg::DockingDebug_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__DOCKING_DEBUG__STRUCT_HPP_
