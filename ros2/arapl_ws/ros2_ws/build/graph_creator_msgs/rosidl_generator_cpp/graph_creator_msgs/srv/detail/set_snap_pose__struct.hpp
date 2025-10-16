// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_creator_msgs:srv/SetSnapPose.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_SNAP_POSE__STRUCT_HPP_
#define GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_SNAP_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__graph_creator_msgs__srv__SetSnapPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__graph_creator_msgs__srv__SetSnapPose_Request __declspec(deprecated)
#endif

namespace graph_creator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSnapPose_Request_
{
  using Type = SetSnapPose_Request_<ContainerAllocator>;

  explicit SetSnapPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_vertex_snap_mode = false;
      this->enable_edge_snap_mode = false;
      this->enable_position_snap_mode = false;
      this->enable_orientation_snap_mode = false;
      this->position_grid_size = 0.0;
      this->orientation_angle = 0.0;
    }
  }

  explicit SetSnapPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_vertex_snap_mode = false;
      this->enable_edge_snap_mode = false;
      this->enable_position_snap_mode = false;
      this->enable_orientation_snap_mode = false;
      this->position_grid_size = 0.0;
      this->orientation_angle = 0.0;
    }
  }

  // field types and members
  using _enable_vertex_snap_mode_type =
    bool;
  _enable_vertex_snap_mode_type enable_vertex_snap_mode;
  using _enable_edge_snap_mode_type =
    bool;
  _enable_edge_snap_mode_type enable_edge_snap_mode;
  using _enable_position_snap_mode_type =
    bool;
  _enable_position_snap_mode_type enable_position_snap_mode;
  using _enable_orientation_snap_mode_type =
    bool;
  _enable_orientation_snap_mode_type enable_orientation_snap_mode;
  using _position_grid_size_type =
    double;
  _position_grid_size_type position_grid_size;
  using _orientation_angle_type =
    double;
  _orientation_angle_type orientation_angle;

  // setters for named parameter idiom
  Type & set__enable_vertex_snap_mode(
    const bool & _arg)
  {
    this->enable_vertex_snap_mode = _arg;
    return *this;
  }
  Type & set__enable_edge_snap_mode(
    const bool & _arg)
  {
    this->enable_edge_snap_mode = _arg;
    return *this;
  }
  Type & set__enable_position_snap_mode(
    const bool & _arg)
  {
    this->enable_position_snap_mode = _arg;
    return *this;
  }
  Type & set__enable_orientation_snap_mode(
    const bool & _arg)
  {
    this->enable_orientation_snap_mode = _arg;
    return *this;
  }
  Type & set__position_grid_size(
    const double & _arg)
  {
    this->position_grid_size = _arg;
    return *this;
  }
  Type & set__orientation_angle(
    const double & _arg)
  {
    this->orientation_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_creator_msgs::srv::SetSnapPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_creator_msgs::srv::SetSnapPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_creator_msgs::srv::SetSnapPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_creator_msgs::srv::SetSnapPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::srv::SetSnapPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::srv::SetSnapPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::srv::SetSnapPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::srv::SetSnapPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_creator_msgs::srv::SetSnapPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_creator_msgs::srv::SetSnapPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_creator_msgs__srv__SetSnapPose_Request
    std::shared_ptr<graph_creator_msgs::srv::SetSnapPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_creator_msgs__srv__SetSnapPose_Request
    std::shared_ptr<graph_creator_msgs::srv::SetSnapPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSnapPose_Request_ & other) const
  {
    if (this->enable_vertex_snap_mode != other.enable_vertex_snap_mode) {
      return false;
    }
    if (this->enable_edge_snap_mode != other.enable_edge_snap_mode) {
      return false;
    }
    if (this->enable_position_snap_mode != other.enable_position_snap_mode) {
      return false;
    }
    if (this->enable_orientation_snap_mode != other.enable_orientation_snap_mode) {
      return false;
    }
    if (this->position_grid_size != other.position_grid_size) {
      return false;
    }
    if (this->orientation_angle != other.orientation_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSnapPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSnapPose_Request_

// alias to use template instance with default allocator
using SetSnapPose_Request =
  graph_creator_msgs::srv::SetSnapPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace graph_creator_msgs


#ifndef _WIN32
# define DEPRECATED__graph_creator_msgs__srv__SetSnapPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__graph_creator_msgs__srv__SetSnapPose_Response __declspec(deprecated)
#endif

namespace graph_creator_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSnapPose_Response_
{
  using Type = SetSnapPose_Response_<ContainerAllocator>;

  explicit SetSnapPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetSnapPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    graph_creator_msgs::srv::SetSnapPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_creator_msgs::srv::SetSnapPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_creator_msgs::srv::SetSnapPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_creator_msgs::srv::SetSnapPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::srv::SetSnapPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::srv::SetSnapPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::srv::SetSnapPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::srv::SetSnapPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_creator_msgs::srv::SetSnapPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_creator_msgs::srv::SetSnapPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_creator_msgs__srv__SetSnapPose_Response
    std::shared_ptr<graph_creator_msgs::srv::SetSnapPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_creator_msgs__srv__SetSnapPose_Response
    std::shared_ptr<graph_creator_msgs::srv::SetSnapPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSnapPose_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSnapPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSnapPose_Response_

// alias to use template instance with default allocator
using SetSnapPose_Response =
  graph_creator_msgs::srv::SetSnapPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace graph_creator_msgs

namespace graph_creator_msgs
{

namespace srv
{

struct SetSnapPose
{
  using Request = graph_creator_msgs::srv::SetSnapPose_Request;
  using Response = graph_creator_msgs::srv::SetSnapPose_Response;
};

}  // namespace srv

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__SRV__DETAIL__SET_SNAP_POSE__STRUCT_HPP_
