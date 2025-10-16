// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_creator_msgs:msg/GraphCreatorConfig.idl
// generated code does not contain a copyright notice
#include "graph_creator_msgs/msg/detail/graph_creator_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
graph_creator_msgs__msg__GraphCreatorConfig__init(graph_creator_msgs__msg__GraphCreatorConfig * msg)
{
  if (!msg) {
    return false;
  }
  // vertex_sphere_scale
  // vertex_arrow_scale
  // control_pose_scale
  // edge_pose_spacing
  // bezier_resolution
  return true;
}

void
graph_creator_msgs__msg__GraphCreatorConfig__fini(graph_creator_msgs__msg__GraphCreatorConfig * msg)
{
  if (!msg) {
    return;
  }
  // vertex_sphere_scale
  // vertex_arrow_scale
  // control_pose_scale
  // edge_pose_spacing
  // bezier_resolution
}

bool
graph_creator_msgs__msg__GraphCreatorConfig__are_equal(const graph_creator_msgs__msg__GraphCreatorConfig * lhs, const graph_creator_msgs__msg__GraphCreatorConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vertex_sphere_scale
  if (lhs->vertex_sphere_scale != rhs->vertex_sphere_scale) {
    return false;
  }
  // vertex_arrow_scale
  if (lhs->vertex_arrow_scale != rhs->vertex_arrow_scale) {
    return false;
  }
  // control_pose_scale
  if (lhs->control_pose_scale != rhs->control_pose_scale) {
    return false;
  }
  // edge_pose_spacing
  if (lhs->edge_pose_spacing != rhs->edge_pose_spacing) {
    return false;
  }
  // bezier_resolution
  if (lhs->bezier_resolution != rhs->bezier_resolution) {
    return false;
  }
  return true;
}

bool
graph_creator_msgs__msg__GraphCreatorConfig__copy(
  const graph_creator_msgs__msg__GraphCreatorConfig * input,
  graph_creator_msgs__msg__GraphCreatorConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // vertex_sphere_scale
  output->vertex_sphere_scale = input->vertex_sphere_scale;
  // vertex_arrow_scale
  output->vertex_arrow_scale = input->vertex_arrow_scale;
  // control_pose_scale
  output->control_pose_scale = input->control_pose_scale;
  // edge_pose_spacing
  output->edge_pose_spacing = input->edge_pose_spacing;
  // bezier_resolution
  output->bezier_resolution = input->bezier_resolution;
  return true;
}

graph_creator_msgs__msg__GraphCreatorConfig *
graph_creator_msgs__msg__GraphCreatorConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__GraphCreatorConfig * msg = (graph_creator_msgs__msg__GraphCreatorConfig *)allocator.allocate(sizeof(graph_creator_msgs__msg__GraphCreatorConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_creator_msgs__msg__GraphCreatorConfig));
  bool success = graph_creator_msgs__msg__GraphCreatorConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_creator_msgs__msg__GraphCreatorConfig__destroy(graph_creator_msgs__msg__GraphCreatorConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_creator_msgs__msg__GraphCreatorConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_creator_msgs__msg__GraphCreatorConfig__Sequence__init(graph_creator_msgs__msg__GraphCreatorConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__GraphCreatorConfig * data = NULL;

  if (size) {
    data = (graph_creator_msgs__msg__GraphCreatorConfig *)allocator.zero_allocate(size, sizeof(graph_creator_msgs__msg__GraphCreatorConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_creator_msgs__msg__GraphCreatorConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_creator_msgs__msg__GraphCreatorConfig__fini(&data[i - 1]);
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
graph_creator_msgs__msg__GraphCreatorConfig__Sequence__fini(graph_creator_msgs__msg__GraphCreatorConfig__Sequence * array)
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
      graph_creator_msgs__msg__GraphCreatorConfig__fini(&array->data[i]);
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

graph_creator_msgs__msg__GraphCreatorConfig__Sequence *
graph_creator_msgs__msg__GraphCreatorConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__GraphCreatorConfig__Sequence * array = (graph_creator_msgs__msg__GraphCreatorConfig__Sequence *)allocator.allocate(sizeof(graph_creator_msgs__msg__GraphCreatorConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_creator_msgs__msg__GraphCreatorConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_creator_msgs__msg__GraphCreatorConfig__Sequence__destroy(graph_creator_msgs__msg__GraphCreatorConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_creator_msgs__msg__GraphCreatorConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_creator_msgs__msg__GraphCreatorConfig__Sequence__are_equal(const graph_creator_msgs__msg__GraphCreatorConfig__Sequence * lhs, const graph_creator_msgs__msg__GraphCreatorConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_creator_msgs__msg__GraphCreatorConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_creator_msgs__msg__GraphCreatorConfig__Sequence__copy(
  const graph_creator_msgs__msg__GraphCreatorConfig__Sequence * input,
  graph_creator_msgs__msg__GraphCreatorConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_creator_msgs__msg__GraphCreatorConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graph_creator_msgs__msg__GraphCreatorConfig * data =
      (graph_creator_msgs__msg__GraphCreatorConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_creator_msgs__msg__GraphCreatorConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graph_creator_msgs__msg__GraphCreatorConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graph_creator_msgs__msg__GraphCreatorConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
