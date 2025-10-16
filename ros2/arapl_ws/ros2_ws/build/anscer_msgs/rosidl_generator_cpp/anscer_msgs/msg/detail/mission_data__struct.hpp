// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/MissionData.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MISSION_DATA__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MISSION_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__MissionData __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__MissionData __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionData_
{
  using Type = MissionData_<ContainerAllocator>;

  explicit MissionData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_name = "";
      this->success_count = 0;
      this->mission_count = 0;
    }
  }

  explicit MissionData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_name = "";
      this->success_count = 0;
      this->mission_count = 0;
    }
  }

  // field types and members
  using _mission_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_name_type mission_name;
  using _success_count_type =
    int16_t;
  _success_count_type success_count;
  using _mission_count_type =
    int16_t;
  _mission_count_type mission_count;

  // setters for named parameter idiom
  Type & set__mission_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_name = _arg;
    return *this;
  }
  Type & set__success_count(
    const int16_t & _arg)
  {
    this->success_count = _arg;
    return *this;
  }
  Type & set__mission_count(
    const int16_t & _arg)
  {
    this->mission_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::MissionData_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::MissionData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::MissionData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::MissionData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::MissionData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::MissionData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::MissionData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::MissionData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::MissionData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::MissionData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__MissionData
    std::shared_ptr<anscer_msgs::msg::MissionData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__MissionData
    std::shared_ptr<anscer_msgs::msg::MissionData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionData_ & other) const
  {
    if (this->mission_name != other.mission_name) {
      return false;
    }
    if (this->success_count != other.success_count) {
      return false;
    }
    if (this->mission_count != other.mission_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionData_

// alias to use template instance with default allocator
using MissionData =
  anscer_msgs::msg::MissionData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__MISSION_DATA__STRUCT_HPP_
