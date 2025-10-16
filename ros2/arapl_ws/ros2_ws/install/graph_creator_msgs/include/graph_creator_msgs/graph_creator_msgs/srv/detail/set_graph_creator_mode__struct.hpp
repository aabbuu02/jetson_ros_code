// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_creator_msgs:srv/SetGraphCreatorMode.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_GRAPH_CREATOR_MODE__STRUCT_HPP_
#define GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_GRAPH_CREATOR_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'graph_mode'
#include "graph_creator_msgs/msg/detail/graph_creator_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_creator_msgs__srv__SetGraphCreatorMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__graph_creator_msgs__srv__SetGraphCreatorMode_Request __declspec(deprecated)
#endif

namespace graph_creator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGraphCreatorMode_Request_
{
  using Type = SetGraphCreatorMode_Request_<ContainerAllocator>;

  explicit SetGraphCreatorMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : graph_mode(_init)
  {
    (void)_init;
  }

  explicit SetGraphCreatorMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : graph_mode(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _graph_mode_type =
    graph_creator_msgs::msg::GraphCreatorMode_<ContainerAllocator>;
  _graph_mode_type graph_mode;

  // setters for named parameter idiom
  Type & set__graph_mode(
    const graph_creator_msgs::msg::GraphCreatorMode_<ContainerAllocator> & _arg)
  {
    this->graph_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_creator_msgs::srv::SetGraphCreatorMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_creator_msgs::srv::SetGraphCreatorMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::srv::SetGraphCreatorMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::srv::SetGraphCreatorMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_creator_msgs__srv__SetGraphCreatorMode_Request
    std::shared_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_creator_msgs__srv__SetGraphCreatorMode_Request
    std::shared_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGraphCreatorMode_Request_ & other) const
  {
    if (this->graph_mode != other.graph_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGraphCreatorMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGraphCreatorMode_Request_

// alias to use template instance with default allocator
using SetGraphCreatorMode_Request =
  graph_creator_msgs::srv::SetGraphCreatorMode_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace graph_creator_msgs


#ifndef _WIN32
# define DEPRECATED__graph_creator_msgs__srv__SetGraphCreatorMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__graph_creator_msgs__srv__SetGraphCreatorMode_Response __declspec(deprecated)
#endif

namespace graph_creator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGraphCreatorMode_Response_
{
  using Type = SetGraphCreatorMode_Response_<ContainerAllocator>;

  explicit SetGraphCreatorMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetGraphCreatorMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_creator_msgs::srv::SetGraphCreatorMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_creator_msgs::srv::SetGraphCreatorMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::srv::SetGraphCreatorMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::srv::SetGraphCreatorMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_creator_msgs__srv__SetGraphCreatorMode_Response
    std::shared_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_creator_msgs__srv__SetGraphCreatorMode_Response
    std::shared_ptr<graph_creator_msgs::srv::SetGraphCreatorMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGraphCreatorMode_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGraphCreatorMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGraphCreatorMode_Response_

// alias to use template instance with default allocator
using SetGraphCreatorMode_Response =
  graph_creator_msgs::srv::SetGraphCreatorMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace graph_creator_msgs

namespace graph_creator_msgs
{

namespace srv
{

struct SetGraphCreatorMode
{
  using Request = graph_creator_msgs::srv::SetGraphCreatorMode_Request;
  using Response = graph_creator_msgs::srv::SetGraphCreatorMode_Response;
};

}  // namespace srv

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_GRAPH_CREATOR_MODE__STRUCT_HPP_
