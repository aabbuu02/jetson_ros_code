// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_creator_msgs:msg/GraphCreatorMode.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_MODE__STRUCT_H_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CREATE_VERTICES'.
enum
{
  graph_creator_msgs__msg__GraphCreatorMode__CREATE_VERTICES = 0
};

/// Constant 'CREATE_EDGES'.
enum
{
  graph_creator_msgs__msg__GraphCreatorMode__CREATE_EDGES = 1
};

/// Struct defined in msg/GraphCreatorMode in the package graph_creator_msgs.
typedef struct graph_creator_msgs__msg__GraphCreatorMode
{
  uint8_t mode;
} graph_creator_msgs__msg__GraphCreatorMode;

// Struct for a sequence of graph_creator_msgs__msg__GraphCreatorMode.
typedef struct graph_creator_msgs__msg__GraphCreatorMode__Sequence
{
  graph_creator_msgs__msg__GraphCreatorMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__msg__GraphCreatorMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_MODE__STRUCT_H_
