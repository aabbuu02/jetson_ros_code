// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/MissionDB.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__MISSION_DB__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__MISSION_DB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__MissionDB __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__MissionDB __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionDB_
{
  using Type = MissionDB_<ContainerAllocator>;

  explicit MissionDB_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = "";
      this->current_distance = 0.0f;
      this->total_distance = 0.0f;
    }
  }

  explicit MissionDB_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = "";
      this->current_distance = 0.0f;
      this->total_distance = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _timestamp_type timestamp;
  using _current_distance_type =
    float;
  _current_distance_type current_distance;
  using _total_distance_type =
    float;
  _total_distance_type total_distance;

  // setters for named parameter idiom
  Type & set__timestamp(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__current_distance(
    const float & _arg)
  {
    this->current_distance = _arg;
    return *this;
  }
  Type & set__total_distance(
    const float & _arg)
  {
    this->total_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::MissionDB_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::MissionDB_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::MissionDB_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::MissionDB_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::MissionDB_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::MissionDB_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::MissionDB_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::MissionDB_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::MissionDB_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::MissionDB_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__MissionDB
    std::shared_ptr<anscer_msgs::msg::MissionDB_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__MissionDB
    std::shared_ptr<anscer_msgs::msg::MissionDB_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionDB_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->current_distance != other.current_distance) {
      return false;
    }
    if (this->total_distance != other.total_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionDB_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionDB_

// alias to use template instance with default allocator
using MissionDB =
  anscer_msgs::msg::MissionDB_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__MISSION_DB__STRUCT_HPP_
