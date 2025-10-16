// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/ZoneInformation.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__ZONE_INFORMATION__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__ZONE_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'indication_info'
#include "anscer_msgs/msg/detail/indication__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__ZoneInformation __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__ZoneInformation __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ZoneInformation_
{
  using Type = ZoneInformation_<ContainerAllocator>;

  explicit ZoneInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : indication_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_factor = 0.0f;
    }
  }

  explicit ZoneInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : indication_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_factor = 0.0f;
    }
  }

  // field types and members
  using _indication_info_type =
    anscer_msgs::msg::Indication_<ContainerAllocator>;
  _indication_info_type indication_info;
  using _speed_factor_type =
    float;
  _speed_factor_type speed_factor;

  // setters for named parameter idiom
  Type & set__indication_info(
    const anscer_msgs::msg::Indication_<ContainerAllocator> & _arg)
  {
    this->indication_info = _arg;
    return *this;
  }
  Type & set__speed_factor(
    const float & _arg)
  {
    this->speed_factor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::ZoneInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::ZoneInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::ZoneInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::ZoneInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::ZoneInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::ZoneInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::ZoneInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::ZoneInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::ZoneInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::ZoneInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__ZoneInformation
    std::shared_ptr<anscer_msgs::msg::ZoneInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__ZoneInformation
    std::shared_ptr<anscer_msgs::msg::ZoneInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ZoneInformation_ & other) const
  {
    if (this->indication_info != other.indication_info) {
      return false;
    }
    if (this->speed_factor != other.speed_factor) {
      return false;
    }
    return true;
  }
  bool operator!=(const ZoneInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ZoneInformation_

// alias to use template instance with default allocator
using ZoneInformation =
  anscer_msgs::msg::ZoneInformation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__ZONE_INFORMATION__STRUCT_HPP_
