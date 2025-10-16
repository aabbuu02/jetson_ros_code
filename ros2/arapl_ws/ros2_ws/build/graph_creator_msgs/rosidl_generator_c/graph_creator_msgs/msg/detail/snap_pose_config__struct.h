// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_creator_msgs:msg/SnapPoseConfig.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__SNAP_POSE_CONFIG__STRUCT_H_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__SNAP_POSE_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SnapPoseConfig in the package graph_creator_msgs.
typedef struct graph_creator_msgs__msg__SnapPoseConfig
{
  /// Enable snap position and orientation for vertices
  bool enable_for_vertices;
  /// Enable snap position and orientation for edge elements
  bool enable_for_edges;
  /// Whether to enable position snap
  bool enable_position_snap;
  /// Whether to enable orientation snap
  bool enable_orientation_snap;
  /// Position snap grid size in meters
  double position_snap_grid_size;
  /// Orientation snap angle in radians
  double orientation_snap_angle;
} graph_creator_msgs__msg__SnapPoseConfig;

// Struct for a sequence of graph_creator_msgs__msg__SnapPoseConfig.
typedef struct graph_creator_msgs__msg__SnapPoseConfig__Sequence
{
  graph_creator_msgs__msg__SnapPoseConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__msg__SnapPoseConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__SNAP_POSE_CONFIG__STRUCT_H_
