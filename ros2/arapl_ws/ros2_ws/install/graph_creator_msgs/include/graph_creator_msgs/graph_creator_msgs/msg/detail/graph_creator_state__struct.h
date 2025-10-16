// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_creator_msgs:msg/GraphCreatorState.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_STATE__STRUCT_H_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GraphCreatorState in the package graph_creator_msgs.
typedef struct graph_creator_msgs__msg__GraphCreatorState
{
  uint8_t graph_mode;
  uint8_t current_edge_type;
  bool edge_is_bidirectional;
  bool all_vertices_locked;
  bool all_edges_locked;
} graph_creator_msgs__msg__GraphCreatorState;

// Struct for a sequence of graph_creator_msgs__msg__GraphCreatorState.
typedef struct graph_creator_msgs__msg__GraphCreatorState__Sequence
{
  graph_creator_msgs__msg__GraphCreatorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__msg__GraphCreatorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_STATE__STRUCT_H_
