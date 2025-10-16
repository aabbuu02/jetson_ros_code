// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from anscer_msgs:srv/GlobalPath.idl
// generated code does not contain a copyright notice

#ifndef ANSCER_MSGS__SRV__DETAIL__GLOBAL_PATH__STRUCT_HPP_
#define ANSCER_MSGS__SRV__DETAIL__GLOBAL_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__GlobalPath_Request __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__GlobalPath_Request __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GlobalPath_Request_
{
  using Type = GlobalPath_Request_<ContainerAllocator>;

  explicit GlobalPath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->initate = false;
    }
  }

  explicit GlobalPath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->initate = false;
    }
  }

  // field types and members
  using _initate_type =
    bool;
  _initate_type initate;

  // setters for named parameter idiom
  Type & set__initate(
    const bool & _arg)
  {
    this->initate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::GlobalPath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::GlobalPath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::GlobalPath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::GlobalPath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::GlobalPath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::GlobalPath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::GlobalPath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::GlobalPath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::GlobalPath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::GlobalPath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__GlobalPath_Request
    std::shared_ptr<anscer_msgs::srv::GlobalPath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__GlobalPath_Request
    std::shared_ptr<anscer_msgs::srv::GlobalPath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalPath_Request_ & other) const
  {
    if (this->initate != other.initate) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalPath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalPath_Request_

// alias to use template instance with default allocator
using GlobalPath_Request =
  anscer_msgs::srv::GlobalPath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs


// Include directives for member types
// Member 'global_path'
#include "anscer_msgs/msg/detail/paths__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__anscer_msgs__srv__GlobalPath_Response __attribute__((deprecated))
#else
# define DEPRECATED__anscer_msgs__srv__GlobalPath_Response __declspec(deprecated)
#endif

namespace anscer_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GlobalPath_Response_
{
  using Type = GlobalPath_Response_<ContainerAllocator>;

  explicit GlobalPath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : global_path(_init)
  {
    (void)_init;
  }

  explicit GlobalPath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : global_path(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _global_path_type =
    anscer_msgs::msg::Paths_<ContainerAllocator>;
  _global_path_type global_path;

  // setters for named parameter idiom
  Type & set__global_path(
    const anscer_msgs::msg::Paths_<ContainerAllocator> & _arg)
  {
    this->global_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    anscer_msgs::srv::GlobalPath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const anscer_msgs::srv::GlobalPath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<anscer_msgs::srv::GlobalPath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<anscer_msgs::srv::GlobalPath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::GlobalPath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::GlobalPath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      anscer_msgs::srv::GlobalPath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<anscer_msgs::srv::GlobalPath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<anscer_msgs::srv::GlobalPath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<anscer_msgs::srv::GlobalPath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__anscer_msgs__srv__GlobalPath_Response
    std::shared_ptr<anscer_msgs::srv::GlobalPath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__anscer_msgs__srv__GlobalPath_Response
    std::shared_ptr<anscer_msgs::srv::GlobalPath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalPath_Response_ & other) const
  {
    if (this->global_path != other.global_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalPath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalPath_Response_

// alias to use template instance with default allocator
using GlobalPath_Response =
  anscer_msgs::srv::GlobalPath_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace anscer_msgs

namespace anscer_msgs
{

namespace srv
{

struct GlobalPath
{
  using Request = anscer_msgs::srv::GlobalPath_Request;
  using Response = anscer_msgs::srv::GlobalPath_Response;
};

}  // namespace srv

}  // namespace anscer_msgs

#endif  // ANSCER_MSGS__SRV__DETAIL__GLOBAL_PATH__STRUCT_HPP_
