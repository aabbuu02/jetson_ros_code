// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graph_creator_msgs:msg/GraphCreatorConfig.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_CONFIG__STRUCT_HPP_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__graph_creator_msgs__msg__GraphCreatorConfig __attribute__((deprecated))
#else
# define DEPRECATED__graph_creator_msgs__msg__GraphCreatorConfig __declspec(deprecated)
#endif

namespace graph_creator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraphCreatorConfig_
{
  using Type = GraphCreatorConfig_<ContainerAllocator>;

  explicit GraphCreatorConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vertex_sphere_scale = 0.0;
      this->vertex_arrow_scale = 0.0;
      this->control_pose_scale = 0.0;
      this->edge_pose_spacing = 0.0;
      this->bezier_resolution = 0.0;
    }
  }

  explicit GraphCreatorConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vertex_sphere_scale = 0.0;
      this->vertex_arrow_scale = 0.0;
      this->control_pose_scale = 0.0;
      this->edge_pose_spacing = 0.0;
      this->bezier_resolution = 0.0;
    }
  }

  // field types and members
  using _vertex_sphere_scale_type =
    double;
  _vertex_sphere_scale_type vertex_sphere_scale;
  using _vertex_arrow_scale_type =
    double;
  _vertex_arrow_scale_type vertex_arrow_scale;
  using _control_pose_scale_type =
    double;
  _control_pose_scale_type control_pose_scale;
  using _edge_pose_spacing_type =
    double;
  _edge_pose_spacing_type edge_pose_spacing;
  using _bezier_resolution_type =
    double;
  _bezier_resolution_type bezier_resolution;

  // setters for named parameter idiom
  Type & set__vertex_sphere_scale(
    const double & _arg)
  {
    this->vertex_sphere_scale = _arg;
    return *this;
  }
  Type & set__vertex_arrow_scale(
    const double & _arg)
  {
    this->vertex_arrow_scale = _arg;
    return *this;
  }
  Type & set__control_pose_scale(
    const double & _arg)
  {
    this->control_pose_scale = _arg;
    return *this;
  }
  Type & set__edge_pose_spacing(
    const double & _arg)
  {
    this->edge_pose_spacing = _arg;
    return *this;
  }
  Type & set__bezier_resolution(
    const double & _arg)
  {
    this->bezier_resolution = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graph_creator_msgs::msg::GraphCreatorConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const graph_creator_msgs::msg::GraphCreatorConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graph_creator_msgs::msg::GraphCreatorConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graph_creator_msgs::msg::GraphCreatorConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::msg::GraphCreatorConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::msg::GraphCreatorConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graph_creator_msgs::msg::GraphCreatorConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graph_creator_msgs::msg::GraphCreatorConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graph_creator_msgs::msg::GraphCreatorConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graph_creator_msgs::msg::GraphCreatorConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graph_creator_msgs__msg__GraphCreatorConfig
    std::shared_ptr<graph_creator_msgs::msg::GraphCreatorConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graph_creator_msgs__msg__GraphCreatorConfig
    std::shared_ptr<graph_creator_msgs::msg::GraphCreatorConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraphCreatorConfig_ & other) const
  {
    if (this->vertex_sphere_scale != other.vertex_sphere_scale) {
      return false;
    }
    if (this->vertex_arrow_scale != other.vertex_arrow_scale) {
      return false;
    }
    if (this->control_pose_scale != other.control_pose_scale) {
      return false;
    }
    if (this->edge_pose_spacing != other.edge_pose_spacing) {
      return false;
    }
    if (this->bezier_resolution != other.bezier_resolution) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraphCreatorConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraphCreatorConfig_

// alias to use template instance with default allocator
using GraphCreatorConfig =
  graph_creator_msgs::msg::GraphCreatorConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graph_creator_msgs

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_CONFIG__STRUCT_HPP_
