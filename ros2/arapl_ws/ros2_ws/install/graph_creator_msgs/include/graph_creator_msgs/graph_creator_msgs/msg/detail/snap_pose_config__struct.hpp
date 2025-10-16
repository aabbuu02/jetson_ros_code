// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_creator_msgs:msg/SnapPoseConfig.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__SNAP_POSE_CONFIG__STRUCT_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__SNAP_POSE_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__graph_creator_msgs__msg__SnapPoseConfig __attribute__((deprecated))
#else
# define DEPRECATED__graph_creator_msgs__msg__SnapPoseConfig __declspec(deprecated)
#endif

namespace graph_creator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SnapPoseConfig_
{
  using Type = SnapPoseConfig_<ContainerAllocator>;

  explicit SnapPoseConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_for_vertices = false;
      this->enable_for_edges = false;
      this->enable_position_snap = false;
      this->enable_orientation_snap = false;
      this->position_snap_grid_size = 0.0;
      this->orientation_snap_angle = 0.0;
    }
  }

  explicit SnapPoseConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable_for_vertices = false;
      this->enable_for_edges = false;
      this->enable_position_snap = false;
      this->enable_orientation_snap = false;
      this->position_snap_grid_size = 0.0;
      this->orientation_snap_angle = 0.0;
    }
  }

  // field types and members
  using _enable_for_vertices_type =
    bool;
  _enable_for_vertices_type enable_for_vertices;
  using _enable_for_edges_type =
    bool;
  _enable_for_edges_type enable_for_edges;
  using _enable_position_snap_type =
    bool;
  _enable_position_snap_type enable_position_snap;
  using _enable_orientation_snap_type =
    bool;
  _enable_orientation_snap_type enable_orientation_snap;
  using _position_snap_grid_size_type =
    double;
  _position_snap_grid_size_type position_snap_grid_size;
  using _orientation_snap_angle_type =
    double;
  _orientation_snap_angle_type orientation_snap_angle;

  // setters for named parameter idiom
  Type & set__enable_for_vertices(
    const bool & _arg)
  {
    this->enable_for_vertices = _arg;
    return *this;
  }
  Type & set__enable_for_edges(
    const bool & _arg)
  {
    this->enable_for_edges = _arg;
    return *this;
  }
  Type & set__enable_position_snap(
    const bool & _arg)
  {
    this->enable_position_snap = _arg;
    return *this;
  }
  Type & set__enable_orientation_snap(
    const bool & _arg)
  {
    this->enable_orientation_snap = _arg;
    return *this;
  }
  Type & set__position_snap_grid_size(
    const double & _arg)
  {
    this->position_snap_grid_size = _arg;
    return *this;
  }
  Type & set__orientation_snap_angle(
    const double & _arg)
  {
    this->orientation_snap_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_creator_msgs::msg::SnapPoseConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_creator_msgs::msg::SnapPoseConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_creator_msgs::msg::SnapPoseConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_creator_msgs::msg::SnapPoseConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::msg::SnapPoseConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::msg::SnapPoseConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::msg::SnapPoseConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::msg::SnapPoseConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_creator_msgs::msg::SnapPoseConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_creator_msgs::msg::SnapPoseConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_creator_msgs__msg__SnapPoseConfig
    std::shared_ptr<graph_creator_msgs::msg::SnapPoseConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_creator_msgs__msg__SnapPoseConfig
    std::shared_ptr<graph_creator_msgs::msg::SnapPoseConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SnapPoseConfig_ & other) const
  {
    if (this->enable_for_vertices != other.enable_for_vertices) {
      return false;
    }
    if (this->enable_for_edges != other.enable_for_edges) {
      return false;
    }
    if (this->enable_position_snap != other.enable_position_snap) {
      return false;
    }
    if (this->enable_orientation_snap != other.enable_orientation_snap) {
      return false;
    }
    if (this->position_snap_grid_size != other.position_snap_grid_size) {
      return false;
    }
    if (this->orientation_snap_angle != other.orientation_snap_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SnapPoseConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SnapPoseConfig_

// alias to use template instance with default allocator
using SnapPoseConfig =
  graph_creator_msgs::msg::SnapPoseConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__SNAP_POSE_CONFIG__STRUCT_HPP_
