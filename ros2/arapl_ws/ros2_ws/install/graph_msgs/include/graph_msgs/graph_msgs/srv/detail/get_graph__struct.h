// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msgs:srv/GetGraph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__SRV__DETAIL__GET_GRAPH__STRUCT_H_
#define GRAPH_MSGS__SRV__DETAIL__GET_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetGraph in the package graph_msgs.
typedef struct graph_msgs__srv__GetGraph_Request
{
  uint8_t structure_needs_at_least_one_member;
} graph_msgs__srv__GetGraph_Request;

// Struct for a sequence of graph_msgs__srv__GetGraph_Request.
typedef struct graph_msgs__srv__GetGraph_Request__Sequence
{
  graph_msgs__srv__GetGraph_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msgs__srv__GetGraph_Request__Sequence;


// Constants defined in the message

/// Constant 'RESULT_GRAPH_VALID'.
enum
{
  graph_msgs__srv__GetGraph_Response__RESULT_GRAPH_VALID = 0
};

/// Constant 'RESULT_GRAPH_INVALID'.
enum
{
  graph_msgs__srv__GetGraph_Response__RESULT_GRAPH_INVALID = 1
};

// Include directives for member types
// Member 'graph'
#include "graph_msgs/msg/detail/graph__struct.h"

/// Struct defined in srv/GetGraph in the package graph_msgs.
typedef struct graph_msgs__srv__GetGraph_Response
{
  graph_msgs__msg__Graph graph;
  uint8_t result;
} graph_msgs__srv__GetGraph_Response;

// Struct for a sequence of graph_msgs__srv__GetGraph_Response.
typedef struct graph_msgs__srv__GetGraph_Response__Sequence
{
  graph_msgs__srv__GetGraph_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msgs__srv__GetGraph_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSGS__SRV__DETAIL__GET_GRAPH__STRUCT_H_
