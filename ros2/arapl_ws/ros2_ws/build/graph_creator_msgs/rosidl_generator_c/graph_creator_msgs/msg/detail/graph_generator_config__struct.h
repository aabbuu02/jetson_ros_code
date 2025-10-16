// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graph_creator_msgs:msg/GraphGeneratorConfig.idl
// generated code does not contain a copyright notice

#ifndef GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_GENERATOR_CONFIG__STRUCT_H_
#define GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_GENERATOR_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GRAPH_GENERATION_TYPE_GRID'.
enum
{
  graph_creator_msgs__msg__GraphGeneratorConfig__GRAPH_GENERATION_TYPE_GRID = 0
};

/// Constant 'GRAPH_GENERATION_TYPE_DXF'.
enum
{
  graph_creator_msgs__msg__GraphGeneratorConfig__GRAPH_GENERATION_TYPE_DXF = 1
};

// Include directives for member types
// Member 'edge_creation_type'
#include "graph_creator_msgs/msg/detail/edge_creation_type__struct.h"
// Member 'edge_direction_type'
#include "graph_creator_msgs/msg/detail/edge_direction_creation_type__struct.h"
// Member 'dxf_file_path'
#include "rosidl_runtime_c/string.h"
// Member 'start_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/GraphGeneratorConfig in the package graph_creator_msgs.
typedef struct graph_creator_msgs__msg__GraphGeneratorConfig
{
  uint8_t generation_type;
  graph_creator_msgs__msg__EdgeCreationType edge_creation_type;
  graph_creator_msgs__msg__EdgeDirectionCreationType edge_direction_type;
  bool ignore_vertex_orientation;
  bool use_edge_count_threshold;
  uint32_t edge_count_threshold;
  /// For generating graph from DXF files
  rosidl_runtime_c__String dxf_file_path;
  float scale_x;
  float scale_y;
  /// For generating grid graphs
  geometry_msgs__msg__Pose start_pose;
  uint32_t rows;
  uint32_t columns;
  float row_spacing;
  float column_spacing;
} graph_creator_msgs__msg__GraphGeneratorConfig;

// Struct for a sequence of graph_creator_msgs__msg__GraphGeneratorConfig.
typedef struct graph_creator_msgs__msg__GraphGeneratorConfig__Sequence
{
  graph_creator_msgs__msg__GraphGeneratorConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graph_creator_msgs__msg__GraphGeneratorConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPH_CREATOR_MSGS__MSG__DETAIL__GRAPH_GENERATOR_CONFIG__STRUCT_H_
