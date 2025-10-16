// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_creator_msgs:msg/GraphGeneratorConfig.idl
// generated code does not contain a copyright notice
#include "graph_creator_msgs/msg/detail/graph_generator_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `edge_creation_type`
#include "graph_creator_msgs/msg/detail/edge_creation_type__functions.h"
// Member `edge_direction_type`
#include "graph_creator_msgs/msg/detail/edge_direction_creation_type__functions.h"
// Member `dxf_file_path`
#include "rosidl_runtime_c/string_functions.h"
// Member `start_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
graph_creator_msgs__msg__GraphGeneratorConfig__init(graph_creator_msgs__msg__GraphGeneratorConfig * msg)
{
  if (!msg) {
    return false;
  }
  // generation_type
  // edge_creation_type
  if (!graph_creator_msgs__msg__EdgeCreationType__init(&msg->edge_creation_type)) {
    graph_creator_msgs__msg__GraphGeneratorConfig__fini(msg);
    return false;
  }
  // edge_direction_type
  if (!graph_creator_msgs__msg__EdgeDirectionCreationType__init(&msg->edge_direction_type)) {
    graph_creator_msgs__msg__GraphGeneratorConfig__fini(msg);
    return false;
  }
  // ignore_vertex_orientation
  // use_edge_count_threshold
  // edge_count_threshold
  // dxf_file_path
  if (!rosidl_runtime_c__String__init(&msg->dxf_file_path)) {
    graph_creator_msgs__msg__GraphGeneratorConfig__fini(msg);
    return false;
  }
  // scale_x
  // scale_y
  // start_pose
  if (!geometry_msgs__msg__Pose__init(&msg->start_pose)) {
    graph_creator_msgs__msg__GraphGeneratorConfig__fini(msg);
    return false;
  }
  // rows
  // columns
  // row_spacing
  // column_spacing
  return true;
}

void
graph_creator_msgs__msg__GraphGeneratorConfig__fini(graph_creator_msgs__msg__GraphGeneratorConfig * msg)
{
  if (!msg) {
    return;
  }
  // generation_type
  // edge_creation_type
  graph_creator_msgs__msg__EdgeCreationType__fini(&msg->edge_creation_type);
  // edge_direction_type
  graph_creator_msgs__msg__EdgeDirectionCreationType__fini(&msg->edge_direction_type);
  // ignore_vertex_orientation
  // use_edge_count_threshold
  // edge_count_threshold
  // dxf_file_path
  rosidl_runtime_c__String__fini(&msg->dxf_file_path);
  // scale_x
  // scale_y
  // start_pose
  geometry_msgs__msg__Pose__fini(&msg->start_pose);
  // rows
  // columns
  // row_spacing
  // column_spacing
}

bool
graph_creator_msgs__msg__GraphGeneratorConfig__are_equal(const graph_creator_msgs__msg__GraphGeneratorConfig * lhs, const graph_creator_msgs__msg__GraphGeneratorConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // generation_type
  if (lhs->generation_type != rhs->generation_type) {
    return false;
  }
  // edge_creation_type
  if (!graph_creator_msgs__msg__EdgeCreationType__are_equal(
      &(lhs->edge_creation_type), &(rhs->edge_creation_type)))
  {
    return false;
  }
  // edge_direction_type
  if (!graph_creator_msgs__msg__EdgeDirectionCreationType__are_equal(
      &(lhs->edge_direction_type), &(rhs->edge_direction_type)))
  {
    return false;
  }
  // ignore_vertex_orientation
  if (lhs->ignore_vertex_orientation != rhs->ignore_vertex_orientation) {
    return false;
  }
  // use_edge_count_threshold
  if (lhs->use_edge_count_threshold != rhs->use_edge_count_threshold) {
    return false;
  }
  // edge_count_threshold
  if (lhs->edge_count_threshold != rhs->edge_count_threshold) {
    return false;
  }
  // dxf_file_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dxf_file_path), &(rhs->dxf_file_path)))
  {
    return false;
  }
  // scale_x
  if (lhs->scale_x != rhs->scale_x) {
    return false;
  }
  // scale_y
  if (lhs->scale_y != rhs->scale_y) {
    return false;
  }
  // start_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->start_pose), &(rhs->start_pose)))
  {
    return false;
  }
  // rows
  if (lhs->rows != rhs->rows) {
    return false;
  }
  // columns
  if (lhs->columns != rhs->columns) {
    return false;
  }
  // row_spacing
  if (lhs->row_spacing != rhs->row_spacing) {
    return false;
  }
  // column_spacing
  if (lhs->column_spacing != rhs->column_spacing) {
    return false;
  }
  return true;
}

bool
graph_creator_msgs__msg__GraphGeneratorConfig__copy(
  const graph_creator_msgs__msg__GraphGeneratorConfig * input,
  graph_creator_msgs__msg__GraphGeneratorConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // generation_type
  output->generation_type = input->generation_type;
  // edge_creation_type
  if (!graph_creator_msgs__msg__EdgeCreationType__copy(
      &(input->edge_creation_type), &(output->edge_creation_type)))
  {
    return false;
  }
  // edge_direction_type
  if (!graph_creator_msgs__msg__EdgeDirectionCreationType__copy(
      &(input->edge_direction_type), &(output->edge_direction_type)))
  {
    return false;
  }
  // ignore_vertex_orientation
  output->ignore_vertex_orientation = input->ignore_vertex_orientation;
  // use_edge_count_threshold
  output->use_edge_count_threshold = input->use_edge_count_threshold;
  // edge_count_threshold
  output->edge_count_threshold = input->edge_count_threshold;
  // dxf_file_path
  if (!rosidl_runtime_c__String__copy(
      &(input->dxf_file_path), &(output->dxf_file_path)))
  {
    return false;
  }
  // scale_x
  output->scale_x = input->scale_x;
  // scale_y
  output->scale_y = input->scale_y;
  // start_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->start_pose), &(output->start_pose)))
  {
    return false;
  }
  // rows
  output->rows = input->rows;
  // columns
  output->columns = input->columns;
  // row_spacing
  output->row_spacing = input->row_spacing;
  // column_spacing
  output->column_spacing = input->column_spacing;
  return true;
}

graph_creator_msgs__msg__GraphGeneratorConfig *
graph_creator_msgs__msg__GraphGeneratorConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__GraphGeneratorConfig * msg = (graph_creator_msgs__msg__GraphGeneratorConfig *)allocator.allocate(sizeof(graph_creator_msgs__msg__GraphGeneratorConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_creator_msgs__msg__GraphGeneratorConfig));
  bool success = graph_creator_msgs__msg__GraphGeneratorConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_creator_msgs__msg__GraphGeneratorConfig__destroy(graph_creator_msgs__msg__GraphGeneratorConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_creator_msgs__msg__GraphGeneratorConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_creator_msgs__msg__GraphGeneratorConfig__Sequence__init(graph_creator_msgs__msg__GraphGeneratorConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__GraphGeneratorConfig * data = NULL;

  if (size) {
    data = (graph_creator_msgs__msg__GraphGeneratorConfig *)allocator.zero_allocate(size, sizeof(graph_creator_msgs__msg__GraphGeneratorConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_creator_msgs__msg__GraphGeneratorConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_creator_msgs__msg__GraphGeneratorConfig__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
graph_creator_msgs__msg__GraphGeneratorConfig__Sequence__fini(graph_creator_msgs__msg__GraphGeneratorConfig__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      graph_creator_msgs__msg__GraphGeneratorConfig__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

graph_creator_msgs__msg__GraphGeneratorConfig__Sequence *
graph_creator_msgs__msg__GraphGeneratorConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__GraphGeneratorConfig__Sequence * array = (graph_creator_msgs__msg__GraphGeneratorConfig__Sequence *)allocator.allocate(sizeof(graph_creator_msgs__msg__GraphGeneratorConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_creator_msgs__msg__GraphGeneratorConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_creator_msgs__msg__GraphGeneratorConfig__Sequence__destroy(graph_creator_msgs__msg__GraphGeneratorConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_creator_msgs__msg__GraphGeneratorConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_creator_msgs__msg__GraphGeneratorConfig__Sequence__are_equal(const graph_creator_msgs__msg__GraphGeneratorConfig__Sequence * lhs, const graph_creator_msgs__msg__GraphGeneratorConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_creator_msgs__msg__GraphGeneratorConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_creator_msgs__msg__GraphGeneratorConfig__Sequence__copy(
  const graph_creator_msgs__msg__GraphGeneratorConfig__Sequence * input,
  graph_creator_msgs__msg__GraphGeneratorConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_creator_msgs__msg__GraphGeneratorConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graph_creator_msgs__msg__GraphGeneratorConfig * data =
      (graph_creator_msgs__msg__GraphGeneratorConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_creator_msgs__msg__GraphGeneratorConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graph_creator_msgs__msg__GraphGeneratorConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graph_creator_msgs__msg__GraphGeneratorConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
