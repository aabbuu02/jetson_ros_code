// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_creator_msgs:msg/SnapPoseConfig.idl
// generated code does not contain a copyright notice
#include "graph_creator_msgs/msg/detail/snap_pose_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
graph_creator_msgs__msg__SnapPoseConfig__init(graph_creator_msgs__msg__SnapPoseConfig * msg)
{
  if (!msg) {
    return false;
  }
  // enable_for_vertices
  // enable_for_edges
  // enable_position_snap
  // enable_orientation_snap
  // position_snap_grid_size
  // orientation_snap_angle
  return true;
}

void
graph_creator_msgs__msg__SnapPoseConfig__fini(graph_creator_msgs__msg__SnapPoseConfig * msg)
{
  if (!msg) {
    return;
  }
  // enable_for_vertices
  // enable_for_edges
  // enable_position_snap
  // enable_orientation_snap
  // position_snap_grid_size
  // orientation_snap_angle
}

bool
graph_creator_msgs__msg__SnapPoseConfig__are_equal(const graph_creator_msgs__msg__SnapPoseConfig * lhs, const graph_creator_msgs__msg__SnapPoseConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enable_for_vertices
  if (lhs->enable_for_vertices != rhs->enable_for_vertices) {
    return false;
  }
  // enable_for_edges
  if (lhs->enable_for_edges != rhs->enable_for_edges) {
    return false;
  }
  // enable_position_snap
  if (lhs->enable_position_snap != rhs->enable_position_snap) {
    return false;
  }
  // enable_orientation_snap
  if (lhs->enable_orientation_snap != rhs->enable_orientation_snap) {
    return false;
  }
  // position_snap_grid_size
  if (lhs->position_snap_grid_size != rhs->position_snap_grid_size) {
    return false;
  }
  // orientation_snap_angle
  if (lhs->orientation_snap_angle != rhs->orientation_snap_angle) {
    return false;
  }
  return true;
}

bool
graph_creator_msgs__msg__SnapPoseConfig__copy(
  const graph_creator_msgs__msg__SnapPoseConfig * input,
  graph_creator_msgs__msg__SnapPoseConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // enable_for_vertices
  output->enable_for_vertices = input->enable_for_vertices;
  // enable_for_edges
  output->enable_for_edges = input->enable_for_edges;
  // enable_position_snap
  output->enable_position_snap = input->enable_position_snap;
  // enable_orientation_snap
  output->enable_orientation_snap = input->enable_orientation_snap;
  // position_snap_grid_size
  output->position_snap_grid_size = input->position_snap_grid_size;
  // orientation_snap_angle
  output->orientation_snap_angle = input->orientation_snap_angle;
  return true;
}

graph_creator_msgs__msg__SnapPoseConfig *
graph_creator_msgs__msg__SnapPoseConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__SnapPoseConfig * msg = (graph_creator_msgs__msg__SnapPoseConfig *)allocator.allocate(sizeof(graph_creator_msgs__msg__SnapPoseConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_creator_msgs__msg__SnapPoseConfig));
  bool success = graph_creator_msgs__msg__SnapPoseConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_creator_msgs__msg__SnapPoseConfig__destroy(graph_creator_msgs__msg__SnapPoseConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_creator_msgs__msg__SnapPoseConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_creator_msgs__msg__SnapPoseConfig__Sequence__init(graph_creator_msgs__msg__SnapPoseConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__SnapPoseConfig * data = NULL;

  if (size) {
    data = (graph_creator_msgs__msg__SnapPoseConfig *)allocator.zero_allocate(size, sizeof(graph_creator_msgs__msg__SnapPoseConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_creator_msgs__msg__SnapPoseConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_creator_msgs__msg__SnapPoseConfig__fini(&data[i - 1]);
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
graph_creator_msgs__msg__SnapPoseConfig__Sequence__fini(graph_creator_msgs__msg__SnapPoseConfig__Sequence * array)
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
      graph_creator_msgs__msg__SnapPoseConfig__fini(&array->data[i]);
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

graph_creator_msgs__msg__SnapPoseConfig__Sequence *
graph_creator_msgs__msg__SnapPoseConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__SnapPoseConfig__Sequence * array = (graph_creator_msgs__msg__SnapPoseConfig__Sequence *)allocator.allocate(sizeof(graph_creator_msgs__msg__SnapPoseConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_creator_msgs__msg__SnapPoseConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_creator_msgs__msg__SnapPoseConfig__Sequence__destroy(graph_creator_msgs__msg__SnapPoseConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_creator_msgs__msg__SnapPoseConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_creator_msgs__msg__SnapPoseConfig__Sequence__are_equal(const graph_creator_msgs__msg__SnapPoseConfig__Sequence * lhs, const graph_creator_msgs__msg__SnapPoseConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_creator_msgs__msg__SnapPoseConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_creator_msgs__msg__SnapPoseConfig__Sequence__copy(
  const graph_creator_msgs__msg__SnapPoseConfig__Sequence * input,
  graph_creator_msgs__msg__SnapPoseConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_creator_msgs__msg__SnapPoseConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graph_creator_msgs__msg__SnapPoseConfig * data =
      (graph_creator_msgs__msg__SnapPoseConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_creator_msgs__msg__SnapPoseConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graph_creator_msgs__msg__SnapPoseConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graph_creator_msgs__msg__SnapPoseConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
