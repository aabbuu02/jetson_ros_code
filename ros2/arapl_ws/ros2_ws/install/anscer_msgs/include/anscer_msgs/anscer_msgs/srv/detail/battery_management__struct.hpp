// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/BatteryManagement.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__BATTERY_MANAGEMENT__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__BATTERY_MANAGEMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'robot_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__BatteryManagement_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__BatteryManagement_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatteryManagement_Request_
{
  using Type = BatteryManagement_Request_<ContainerAllocator>;

  explicit BatteryManagement_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_pose(_init)
  {
    (void)_init;
  }

  explicit BatteryManagement_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _robot_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _robot_pose_type robot_pose;

  // setters for named parameter idiom
  Type & set__robot_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->robot_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::BatteryManagement_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::BatteryManagement_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::BatteryManagement_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::BatteryManagement_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::BatteryManagement_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::BatteryManagement_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::BatteryManagement_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::BatteryManagement_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::BatteryManagement_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::BatteryManagement_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__BatteryManagement_Request
    std::shared_ptr<anscer_msgs::srv::BatteryManagement_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__BatteryManagement_Request
    std::shared_ptr<anscer_msgs::srv::BatteryManagement_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryManagement_Request_ & other) const
  {
    if (this->robot_pose != other.robot_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryManagement_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryManagement_Request_

// alias to use template instance with default allocator
using BatteryManagement_Request =
  anscer_msgs::srv::BatteryManagement_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__BatteryManagement_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__BatteryManagement_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatteryManagement_Response_
{
  using Type = BatteryManagement_Response_<ContainerAllocator>;

  explicit BatteryManagement_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->is_available = false;
    }
  }

  explicit BatteryManagement_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->is_available = false;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _is_available_type =
    bool;
  _is_available_type is_available;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__is_available(
    const bool & _arg)
  {
    this->is_available = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::BatteryManagement_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::BatteryManagement_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::BatteryManagement_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::BatteryManagement_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::BatteryManagement_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::BatteryManagement_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::BatteryManagement_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::BatteryManagement_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::BatteryManagement_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::BatteryManagement_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__BatteryManagement_Response
    std::shared_ptr<anscer_msgs::srv::BatteryManagement_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__BatteryManagement_Response
    std::shared_ptr<anscer_msgs::srv::BatteryManagement_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryManagement_Response_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->is_available != other.is_available) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryManagement_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryManagement_Response_

// alias to use template instance with default allocator
using BatteryManagement_Response =
  anscer_msgs::srv::BatteryManagement_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct BatteryManagement
{
  using Request = anscer_msgs::srv::BatteryManagement_Request;
  using Response = anscer_msgs::srv::BatteryManagement_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__BATTERY_MANAGEMENT__STRUCT_HPP_
