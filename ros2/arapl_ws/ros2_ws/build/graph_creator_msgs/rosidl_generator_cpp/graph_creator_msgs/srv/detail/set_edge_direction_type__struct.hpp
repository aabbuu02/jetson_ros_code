// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_creator_msgs:srv/SetEdgeDirectionType.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_EDGE_DIRECTION_TYPE__STRUCT_HPP_
#define GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_EDGE_DIRECTION_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'edge_direction_creation_type'
#include "graph_creator_msgs/msg/detail/edge_direction_creation_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graph_creator_msgs__srv__SetEdgeDirectionType_Request __attribute__((deprecated))
#else
# define DEPRECATED__graph_creator_msgs__srv__SetEdgeDirectionType_Request __declspec(deprecated)
#endif

namespace graph_creator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEdgeDirectionType_Request_
{
  using Type = SetEdgeDirectionType_Request_<ContainerAllocator>;

  explicit SetEdgeDirectionType_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : edge_direction_creation_type(_init)
  {
    (void)_init;
  }

  explicit SetEdgeDirectionType_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : edge_direction_creation_type(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _edge_direction_creation_type_type =
    graph_creator_msgs::msg::EdgeDirectionCreationType_<ContainerAllocator>;
  _edge_direction_creation_type_type edge_direction_creation_type;

  // setters for named parameter idiom
  Type & set__edge_direction_creation_type(
    const graph_creator_msgs::msg::EdgeDirectionCreationType_<ContainerAllocator> & _arg)
  {
    this->edge_direction_creation_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_creator_msgs::srv::SetEdgeDirectionType_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_creator_msgs::srv::SetEdgeDirectionType_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::srv::SetEdgeDirectionType_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::srv::SetEdgeDirectionType_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_creator_msgs__srv__SetEdgeDirectionType_Request
    std::shared_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_creator_msgs__srv__SetEdgeDirectionType_Request
    std::shared_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEdgeDirectionType_Request_ & other) const
  {
    if (this->edge_direction_creation_type != other.edge_direction_creation_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEdgeDirectionType_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEdgeDirectionType_Request_

// alias to use template instance with default allocator
using SetEdgeDirectionType_Request =
  graph_creator_msgs::srv::SetEdgeDirectionType_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace graph_creator_msgs


#ifndef _WIN32
# define DEPRECATED__graph_creator_msgs__srv__SetEdgeDirectionType_Response __attribute__((deprecated))
#else
# define DEPRECATED__graph_creator_msgs__srv__SetEdgeDirectionType_Response __declspec(deprecated)
#endif

namespace graph_creator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEdgeDirectionType_Response_
{
  using Type = SetEdgeDirectionType_Response_<ContainerAllocator>;

  explicit SetEdgeDirectionType_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetEdgeDirectionType_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    graph_creator_msgs::srv::SetEdgeDirectionType_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_creator_msgs::srv::SetEdgeDirectionType_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::srv::SetEdgeDirectionType_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::srv::SetEdgeDirectionType_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_creator_msgs__srv__SetEdgeDirectionType_Response
    std::shared_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_creator_msgs__srv__SetEdgeDirectionType_Response
    std::shared_ptr<graph_creator_msgs::srv::SetEdgeDirectionType_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEdgeDirectionType_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEdgeDirectionType_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEdgeDirectionType_Response_

// alias to use template instance with default allocator
using SetEdgeDirectionType_Response =
  graph_creator_msgs::srv::SetEdgeDirectionType_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace graph_creator_msgs

namespace graph_creator_msgs
{

namespace srv
{

struct SetEdgeDirectionType
{
  using Request = graph_creator_msgs::srv::SetEdgeDirectionType_Request;
  using Response = graph_creator_msgs::srv::SetEdgeDirectionType_Response;
};

}  // namespace srv

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_EDGE_DIRECTION_TYPE__STRUCT_HPP_
