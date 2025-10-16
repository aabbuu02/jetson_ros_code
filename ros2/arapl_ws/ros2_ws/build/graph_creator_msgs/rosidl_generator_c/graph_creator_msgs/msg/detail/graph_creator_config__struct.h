// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_creator_msgs:msg/GraphCreatorConfig.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_CONFIG__STRUCT_H_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GraphCreatorConfig in the package graph_creator_msgs.
typedef struct graph_creator_msgs__msg__GraphCreatorConfig
{
  double vertex_sphere_scale;
  double vertex_arrow_scale;
  double control_pose_scale;
  double edge_pose_spacing;
  double bezier_resolution;
} graph_creator_msgs__msg__GraphCreatorConfig;

// Struct for a sequence of graph_creator_msgs__msg__GraphCreatorConfig.
typedef struct graph_creator_msgs__msg__GraphCreatorConfig__Sequence
{
  graph_creator_msgs__msg__GraphCreatorConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__msg__GraphCreatorConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_CREATOR_CONFIG__STRUCT_H_
