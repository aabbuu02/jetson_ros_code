// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msgs:msg/GraphMetaData.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__MSG__DETAIL__GRAPH_META_DATA__STRUCT_H_
#define GRAPH_MSGS__MSG__DETAIL__GRAPH_META_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DIRECTED'.
enum
{
  graph_msgs__msg__GraphMetaData__DIRECTED = 0
};

/// Constant 'UNDIRECTED'.
enum
{
  graph_msgs__msg__GraphMetaData__UNDIRECTED = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'graph_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GraphMetaData in the package graph_msgs.
typedef struct graph_msgs__msg__GraphMetaData
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String graph_name;
  uint8_t graph_type;
  uint32_t number_of_vertices;
  uint32_t number_of_edges;
} graph_msgs__msg__GraphMetaData;

// Struct for a sequence of graph_msgs__msg__GraphMetaData.
typedef struct graph_msgs__msg__GraphMetaData__Sequence
{
  graph_msgs__msg__GraphMetaData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msgs__msg__GraphMetaData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSGS__MSG__DETAIL__GRAPH_META_DATA__STRUCT_H_
