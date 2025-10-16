// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_creator_msgs:msg/EdgeCreationType.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__EDGE_CREATION_TYPE__STRUCT_H_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__EDGE_CREATION_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EDGE_CREATION_TYPE_STRAIGHT_LINE'.
enum
{
  graph_creator_msgs__msg__EdgeCreationType__EDGE_CREATION_TYPE_STRAIGHT_LINE = 0
};

/// Constant 'EDGE_CREATION_TYPE_CUBIC_BEZIER'.
enum
{
  graph_creator_msgs__msg__EdgeCreationType__EDGE_CREATION_TYPE_CUBIC_BEZIER = 1
};

/// Struct defined in msg/EdgeCreationType in the package graph_creator_msgs.
typedef struct graph_creator_msgs__msg__EdgeCreationType
{
  uint8_t type;
} graph_creator_msgs__msg__EdgeCreationType;

// Struct for a sequence of graph_creator_msgs__msg__EdgeCreationType.
typedef struct graph_creator_msgs__msg__EdgeCreationType__Sequence
{
  graph_creator_msgs__msg__EdgeCreationType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__msg__EdgeCreationType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__EDGE_CREATION_TYPE__STRUCT_H_
