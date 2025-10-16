// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__EDGE__STRUCT_H_
#define GRAPH_MSGS__MSG__DETAIL__EDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STRAIGHT_LINE'.
enum
{
  graph_msgs__msg__Edge__STRAIGHT_LINE = 0
};

/// Constant 'CUBIC_BEZIER'.
enum
{
  graph_msgs__msg__Edge__CUBIC_BEZIER = 1
};

/// Constant 'FORWARD'.
/**
  * Edge direction types
 */
enum
{
  graph_msgs__msg__Edge__FORWARD = 0
};

/// Constant 'REVERSE'.
enum
{
  graph_msgs__msg__Edge__REVERSE = 1
};

/// Constant 'BIDIRECTIONAL'.
enum
{
  graph_msgs__msg__Edge__BIDIRECTIONAL = 2
};

/// Constant 'CREATED'.
/**
  * Creation types
  * The edge is created
 */
enum
{
  graph_msgs__msg__Edge__CREATED = 0
};

/// Constant 'GENERATED'.
/**
  * The edge is generated
 */
enum
{
  graph_msgs__msg__Edge__GENERATED = 1
};

// Include directives for member types
// Member 'name'
// Member 'alias'
#include "rosidl_runtime_c/string.h"
// Member 'control_points'
// Member 'control_orientation'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_array__struct.h"
// Member 'properties'
#include "graph_msgs/msg/detail/property__struct.h"

/// Struct defined in msg/Edge in the package graph_msgs.
/**
  * Edge types
 */
typedef struct graph_msgs__msg__Edge
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String alias;
  uint8_t type;
  uint8_t edge_direction_type;
  uint8_t creation_type;
  uint32_t source_vertex_id;
  uint32_t target_vertex_id;
  double length;
  double cost_factor;
  bool bidirectional;
  bool independent_orientation;
  geometry_msgs__msg__Pose__Sequence control_points;
  geometry_msgs__msg__Pose control_orientation;
  geometry_msgs__msg__PoseArray poses;
  graph_msgs__msg__Property__Sequence properties;
} graph_msgs__msg__Edge;

// Struct for a sequence of graph_msgs__msg__Edge.
typedef struct graph_msgs__msg__Edge__Sequence
{
  graph_msgs__msg__Edge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msgs__msg__Edge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSGS__MSG__DETAIL__EDGE__STRUCT_H_
