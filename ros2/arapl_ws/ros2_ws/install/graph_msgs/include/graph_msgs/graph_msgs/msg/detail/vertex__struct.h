// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msgs:msg/Vertex.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__VERTEX__STRUCT_H_
#define GRAPH_MSGS__MSG__DETAIL__VERTEX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NORMAL'.
enum
{
  graph_msgs__msg__Vertex__NORMAL = 0
};

/// Constant 'PARK'.
enum
{
  graph_msgs__msg__Vertex__PARK = 1
};

/// Constant 'CHARGE'.
enum
{
  graph_msgs__msg__Vertex__CHARGE = 2
};

/// Constant 'CONTROL'.
enum
{
  graph_msgs__msg__Vertex__CONTROL = 3
};

/// Constant 'REPORT'.
enum
{
  graph_msgs__msg__Vertex__REPORT = 4
};

// Include directives for member types
// Member 'name'
// Member 'alias'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'properties'
#include "graph_msgs/msg/detail/property__struct.h"

/// Struct defined in msg/Vertex in the package graph_msgs.
/**
  * Vertex types
 */
typedef struct graph_msgs__msg__Vertex
{
  uint32_t id;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String alias;
  uint8_t type;
  bool ignore_orientation;
  geometry_msgs__msg__Pose pose;
  graph_msgs__msg__Property__Sequence properties;
} graph_msgs__msg__Vertex;

// Struct for a sequence of graph_msgs__msg__Vertex.
typedef struct graph_msgs__msg__Vertex__Sequence
{
  graph_msgs__msg__Vertex * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msgs__msg__Vertex__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSGS__MSG__DETAIL__VERTEX__STRUCT_H_
