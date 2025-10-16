// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:msg/WaypointArray.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__MSG__DETAIL__WAYPOINT_ARRAY__STRUCT_HPP_
#define ANSCER_MSGS__MSG__DETAIL__WAYPOINT_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__msg__WaypointArray __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__msg__WaypointArray __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointArray_
{
  using Type = WaypointArray_<ContainerAllocator>;

  explicit WaypointArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit WaypointArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _map_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _map_name_type map_name;
  using _pose_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__map_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__pose(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::msg::WaypointArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::msg::WaypointArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::msg::WaypointArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::msg::WaypointArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::WaypointArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::WaypointArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::msg::WaypointArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::msg::WaypointArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::msg::WaypointArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::msg::WaypointArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__msg__WaypointArray
    std::shared_ptr<anscer_msgs::msg::WaypointArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__msg__WaypointArray
    std::shared_ptr<anscer_msgs::msg::WaypointArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointArray_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointArray_

// alias to use template instance with default allocator
using WaypointArray =
  anscer_msgs::msg::WaypointArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__MSG__DETAIL__WAYPOINT_ARRAY__STRUCT_HPP_
