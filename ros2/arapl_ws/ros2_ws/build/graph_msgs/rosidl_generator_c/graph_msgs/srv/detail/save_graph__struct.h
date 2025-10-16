// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msgs:srv/SaveGraph.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__SRV__DETAIL__SAVE_GRAPH__STRUCT_H_
#define GRAPH_MSGS__SRV__DETAIL__SAVE_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'graph_file_name'
// Member 'save_graph_url'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveGraph in the package graph_msgs.
typedef struct graph_msgs__srv__SaveGraph_Request
{
  rosidl_runtime_c__String graph_file_name;
  rosidl_runtime_c__String save_graph_url;
} graph_msgs__srv__SaveGraph_Request;

// Struct for a sequence of graph_msgs__srv__SaveGraph_Request.
typedef struct graph_msgs__srv__SaveGraph_Request__Sequence
{
  graph_msgs__srv__SaveGraph_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msgs__srv__SaveGraph_Request__Sequence;


// Constants defined in the message

/// Constant 'RESULT_SUCCESS'.
enum
{
  graph_msgs__srv__SaveGraph_Response__RESULT_SUCCESS = 0
};

/// Constant 'RESULT_GRAPH_ALREADY_EXISTS'.
enum
{
  graph_msgs__srv__SaveGraph_Response__RESULT_GRAPH_ALREADY_EXISTS = 1
};

/// Constant 'RESULT_INVALID_GRAPH_FILE_NAME'.
enum
{
  graph_msgs__srv__SaveGraph_Response__RESULT_INVALID_GRAPH_FILE_NAME = 2
};

/// Constant 'RESULT_INVALID_GRAPH_FILE_PATH'.
enum
{
  graph_msgs__srv__SaveGraph_Response__RESULT_INVALID_GRAPH_FILE_PATH = 3
};

/// Constant 'RESULT_UNDEFINED_FAILURE'.
enum
{
  graph_msgs__srv__SaveGraph_Response__RESULT_UNDEFINED_FAILURE = 255
};

// Include directives for member types
// Member 'graph'
#include "graph_msgs/msg/detail/graph__struct.h"

/// Struct defined in srv/SaveGraph in the package graph_msgs.
typedef struct graph_msgs__srv__SaveGraph_Response
{
  graph_msgs__msg__Graph graph;
  uint8_t result;
} graph_msgs__srv__SaveGraph_Response;

// Struct for a sequence of graph_msgs__srv__SaveGraph_Response.
typedef struct graph_msgs__srv__SaveGraph_Response__Sequence
{
  graph_msgs__srv__SaveGraph_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msgs__srv__SaveGraph_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSGS__SRV__DETAIL__SAVE_GRAPH__STRUCT_H_
