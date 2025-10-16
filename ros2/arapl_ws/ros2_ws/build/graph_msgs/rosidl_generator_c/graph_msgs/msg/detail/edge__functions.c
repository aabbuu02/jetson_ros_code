// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msgs:msg/Edge.idl
// generated code does not contain a copyright notice
#include "graph_msgs/msg/detail/edge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `alias`
#include "rosidl_runtime_c/string_functions.h"
// Member `control_points`
// Member `control_orientation`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose_array__functions.h"
// Member `properties`
#include "graph_msgs/msg/detail/property__functions.h"

bool
graph_msgs__msg__Edge__init(graph_msgs__msg__Edge * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    graph_msgs__msg__Edge__fini(msg);
    return false;
  }
  // alias
  if (!rosidl_runtime_c__String__init(&msg->alias)) {
    graph_msgs__msg__Edge__fini(msg);
    return false;
  }
  // type
  // edge_direction_type
  // creation_type
  // source_vertex_id
  // target_vertex_id
  // length
  // cost_factor
  // bidirectional
  // independent_orientation
  // control_points
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->control_points, 0)) {
    graph_msgs__msg__Edge__fini(msg);
    return false;
  }
  // control_orientation
  if (!geometry_msgs__msg__Pose__init(&msg->control_orientation)) {
    graph_msgs__msg__Edge__fini(msg);
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseArray__init(&msg->poses)) {
    graph_msgs__msg__Edge__fini(msg);
    return false;
  }
  // properties
  if (!graph_msgs__msg__Property__Sequence__init(&msg->properties, 0)) {
    graph_msgs__msg__Edge__fini(msg);
    return false;
  }
  return true;
}

void
graph_msgs__msg__Edge__fini(graph_msgs__msg__Edge * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // alias
  rosidl_runtime_c__String__fini(&msg->alias);
  // type
  // edge_direction_type
  // creation_type
  // source_vertex_id
  // target_vertex_id
  // length
  // cost_factor
  // bidirectional
  // independent_orientation
  // control_points
  geometry_msgs__msg__Pose__Sequence__fini(&msg->control_points);
  // control_orientation
  geometry_msgs__msg__Pose__fini(&msg->control_orientation);
  // poses
  geometry_msgs__msg__PoseArray__fini(&msg->poses);
  // properties
  graph_msgs__msg__Property__Sequence__fini(&msg->properties);
}

bool
graph_msgs__msg__Edge__are_equal(const graph_msgs__msg__Edge * lhs, const graph_msgs__msg__Edge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // alias
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->alias), &(rhs->alias)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // edge_direction_type
  if (lhs->edge_direction_type != rhs->edge_direction_type) {
    return false;
  }
  // creation_type
  if (lhs->creation_type != rhs->creation_type) {
    return false;
  }
  // source_vertex_id
  if (lhs->source_vertex_id != rhs->source_vertex_id) {
    return false;
  }
  // target_vertex_id
  if (lhs->target_vertex_id != rhs->target_vertex_id) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // cost_factor
  if (lhs->cost_factor != rhs->cost_factor) {
    return false;
  }
  // bidirectional
  if (lhs->bidirectional != rhs->bidirectional) {
    return false;
  }
  // independent_orientation
  if (lhs->independent_orientation != rhs->independent_orientation) {
    return false;
  }
  // control_points
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->control_points), &(rhs->control_points)))
  {
    return false;
  }
  // control_orientation
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->control_orientation), &(rhs->control_orientation)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseArray__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  // properties
  if (!graph_msgs__msg__Property__Sequence__are_equal(
      &(lhs->properties), &(rhs->properties)))
  {
    return false;
  }
  return true;
}

bool
graph_msgs__msg__Edge__copy(
  const graph_msgs__msg__Edge * input,
  graph_msgs__msg__Edge * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // alias
  if (!rosidl_runtime_c__String__copy(
      &(input->alias), &(output->alias)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // edge_direction_type
  output->edge_direction_type = input->edge_direction_type;
  // creation_type
  output->creation_type = input->creation_type;
  // source_vertex_id
  output->source_vertex_id = input->source_vertex_id;
  // target_vertex_id
  output->target_vertex_id = input->target_vertex_id;
  // length
  output->length = input->length;
  // cost_factor
  output->cost_factor = input->cost_factor;
  // bidirectional
  output->bidirectional = input->bidirectional;
  // independent_orientation
  output->independent_orientation = input->independent_orientation;
  // control_points
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->control_points), &(output->control_points)))
  {
    return false;
  }
  // control_orientation
  if (!geometry_msgs__msg__Pose__copy(
      &(input->control_orientation), &(output->control_orientation)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseArray__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  // properties
  if (!graph_msgs__msg__Property__Sequence__copy(
      &(input->properties), &(output->properties)))
  {
    return false;
  }
  return true;
}

graph_msgs__msg__Edge *
graph_msgs__msg__Edge__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__Edge * msg = (graph_msgs__msg__Edge *)allocator.allocate(sizeof(graph_msgs__msg__Edge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msgs__msg__Edge));
  bool success = graph_msgs__msg__Edge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_msgs__msg__Edge__destroy(graph_msgs__msg__Edge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_msgs__msg__Edge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_msgs__msg__Edge__Sequence__init(graph_msgs__msg__Edge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__Edge * data = NULL;

  if (size) {
    data = (graph_msgs__msg__Edge *)allocator.zero_allocate(size, sizeof(graph_msgs__msg__Edge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msgs__msg__Edge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msgs__msg__Edge__fini(&data[i - 1]);
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
graph_msgs__msg__Edge__Sequence__fini(graph_msgs__msg__Edge__Sequence * array)
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
      graph_msgs__msg__Edge__fini(&array->data[i]);
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

graph_msgs__msg__Edge__Sequence *
graph_msgs__msg__Edge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__Edge__Sequence * array = (graph_msgs__msg__Edge__Sequence *)allocator.allocate(sizeof(graph_msgs__msg__Edge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_msgs__msg__Edge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_msgs__msg__Edge__Sequence__destroy(graph_msgs__msg__Edge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_msgs__msg__Edge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_msgs__msg__Edge__Sequence__are_equal(const graph_msgs__msg__Edge__Sequence * lhs, const graph_msgs__msg__Edge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_msgs__msg__Edge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_msgs__msg__Edge__Sequence__copy(
  const graph_msgs__msg__Edge__Sequence * input,
  graph_msgs__msg__Edge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_msgs__msg__Edge);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graph_msgs__msg__Edge * data =
      (graph_msgs__msg__Edge *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_msgs__msg__Edge__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graph_msgs__msg__Edge__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graph_msgs__msg__Edge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
