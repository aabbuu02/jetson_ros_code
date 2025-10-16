// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_creator_msgs:msg/SelectedGraphElements.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__SELECTED_GRAPH_ELEMENTS__STRUCT_H_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__SELECTED_GRAPH_ELEMENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'all_vertices'
// Member 'all_edges'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SelectedGraphElements in the package graph_creator_msgs.
typedef struct graph_creator_msgs__msg__SelectedGraphElements
{
  rosidl_runtime_c__String__Sequence all_vertices;
  rosidl_runtime_c__String__Sequence all_edges;
} graph_creator_msgs__msg__SelectedGraphElements;

// Struct for a sequence of graph_creator_msgs__msg__SelectedGraphElements.
typedef struct graph_creator_msgs__msg__SelectedGraphElements__Sequence
{
  graph_creator_msgs__msg__SelectedGraphElements * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__msg__SelectedGraphElements__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__SELECTED_GRAPH_ELEMENTS__STRUCT_H_
