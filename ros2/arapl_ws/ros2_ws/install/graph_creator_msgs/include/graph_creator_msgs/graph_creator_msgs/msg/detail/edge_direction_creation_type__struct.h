// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_creator_msgs:msg/EdgeDirectionCreationType.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__EDGE_DIRECTION_CREATION_TYPE__STRUCT_H_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__EDGE_DIRECTION_CREATION_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EDGE_DIRECTION_CREATION_TYPE_FORWARD'.
enum
{
  graph_creator_msgs__msg__EdgeDirectionCreationType__EDGE_DIRECTION_CREATION_TYPE_FORWARD = 0
};

/// Constant 'EDGE_DIRECTION_CREATION_TYPE_REVERSE'.
enum
{
  graph_creator_msgs__msg__EdgeDirectionCreationType__EDGE_DIRECTION_CREATION_TYPE_REVERSE = 1
};

/// Constant 'EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL'.
enum
{
  graph_creator_msgs__msg__EdgeDirectionCreationType__EDGE_DIRECTION_CREATION_TYPE_BIDIRECTIONAL = 2
};

/// Struct defined in msg/EdgeDirectionCreationType in the package graph_creator_msgs.
typedef struct graph_creator_msgs__msg__EdgeDirectionCreationType
{
  uint8_t direction_type;
} graph_creator_msgs__msg__EdgeDirectionCreationType;

// Struct for a sequence of graph_creator_msgs__msg__EdgeDirectionCreationType.
typedef struct graph_creator_msgs__msg__EdgeDirectionCreationType__Sequence
{
  graph_creator_msgs__msg__EdgeDirectionCreationType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__msg__EdgeDirectionCreationType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__EDGE_DIRECTION_CREATION_TYPE__STRUCT_H_
