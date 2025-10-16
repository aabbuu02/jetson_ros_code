// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_msgs:srv/GetGraphPlan.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_MSGS__SRV__DETAIL__GET_GRAPH_PLAN__STRUCT_H_
#define GRAPH_MSGS__SRV__DETAIL__GET_GRAPH_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetGraphPlan in the package graph_msgs.
typedef struct graph_msgs__srv__GetGraphPlan_Request
{
  uint32_t source_id;
  uint32_t target_id;
  bool ignore_goal_orientation;
  bool ignore_path_orientation;
} graph_msgs__srv__GetGraphPlan_Request;

// Struct for a sequence of graph_msgs__srv__GetGraphPlan_Request.
typedef struct graph_msgs__srv__GetGraphPlan_Request__Sequence
{
  graph_msgs__srv__GetGraphPlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msgs__srv__GetGraphPlan_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'vertices_in_plan'
#include "graph_msgs/msg/detail/vertex__struct.h"
// Member 'plan'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetGraphPlan in the package graph_msgs.
typedef struct graph_msgs__srv__GetGraphPlan_Response
{
  /// The vertices that are part of the plan
  graph_msgs__msg__Vertex__Sequence vertices_in_plan;
  /// The plan from the pre-defined graph curves
  nav_msgs__msg__Path plan;
  /// Total plan distance
  double plan_distance;
  /// Whether planning was success
  bool success;
  /// Messages related to planning
  rosidl_runtime_c__String message;
} graph_msgs__srv__GetGraphPlan_Response;

// Struct for a sequence of graph_msgs__srv__GetGraphPlan_Response.
typedef struct graph_msgs__srv__GetGraphPlan_Response__Sequence
{
  graph_msgs__srv__GetGraphPlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_msgs__srv__GetGraphPlan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_MSGS__SRV__DETAIL__GET_GRAPH_PLAN__STRUCT_H_
