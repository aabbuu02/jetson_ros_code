// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__GRAPH__STRUCT_H_
#define GRAPH_MSGS__MSG__DETAIL__GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'meta_data'
#include "graph_msgs/msg/detail/graph_meta_data__struct.h"
// Member 'vertices'
#include "graph_msgs/msg/detail/vertex__struct.h"
// Member 'edges'
#include "graph_msgs/msg/detail/edge__struct.h"
// Member 'properties'
#include "graph_msgs/msg/detail/property__struct.h"

/// Struct defined in msg/Graph in the package graph_msgs.
typedef struct graph_msgs__msg__Graph
{
  std_msgs__msg__Header header;
  graph_msgs__msg__GraphMetaData meta_data;
  graph_msgs__msg__Vertex__Sequence vertices;
  graph_msgs__msg__Edge__Sequence edges;
  graph_msgs__msg__Property__Sequence properties;
} graph_msgs__msg__Graph;

// Struct for a sequence of graph_msgs__msg__Graph.
typedef struct graph_msgs__msg__Graph__Sequence
{
  graph_msgs__msg__Graph * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msgs__msg__Graph__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSGS__MSG__DETAIL__GRAPH__STRUCT_H_
