// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/SetZone.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__SET_ZONE__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__SET_ZONE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'zone_points'
#include "anscer_msgs/msg/detail/zone_points__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__SetZone_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__SetZone_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetZone_Request_
{
  using Type = SetZone_Request_<ContainerAllocator>;

  explicit SetZone_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetZone_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _zone_points_type =
    std::vector<anscer_msgs::msg::ZonePoints_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<anscer_msgs::msg::ZonePoints_<ContainerAllocator>>>;
  _zone_points_type zone_points;

  // setters for named parameter idiom
  Type & set__zone_points(
    const std::vector<anscer_msgs::msg::ZonePoints_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<anscer_msgs::msg::ZonePoints_<ContainerAllocator>>> & _arg)
  {
    this->zone_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::SetZone_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::SetZone_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::SetZone_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::SetZone_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::SetZone_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::SetZone_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::SetZone_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::SetZone_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::SetZone_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::SetZone_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__SetZone_Request
    std::shared_ptr<anscer_msgs::srv::SetZone_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__SetZone_Request
    std::shared_ptr<anscer_msgs::srv::SetZone_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetZone_Request_ & other) const
  {
    if (this->zone_points != other.zone_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetZone_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetZone_Request_

// alias to use template instance with default allocator
using SetZone_Request =
  anscer_msgs::srv::SetZone_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__SetZone_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__SetZone_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetZone_Response_
{
  using Type = SetZone_Response_<ContainerAllocator>;

  explicit SetZone_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit SetZone_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::SetZone_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::SetZone_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::SetZone_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::SetZone_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::SetZone_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::SetZone_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::SetZone_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::SetZone_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::SetZone_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::SetZone_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__SetZone_Response
    std::shared_ptr<anscer_msgs::srv::SetZone_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__SetZone_Response
    std::shared_ptr<anscer_msgs::srv::SetZone_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetZone_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetZone_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetZone_Response_

// alias to use template instance with default allocator
using SetZone_Response =
  anscer_msgs::srv::SetZone_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct SetZone
{
  using Request = anscer_msgs::srv::SetZone_Request;
  using Response = anscer_msgs::srv::SetZone_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__SET_ZONE__STRUCT_HPP_
