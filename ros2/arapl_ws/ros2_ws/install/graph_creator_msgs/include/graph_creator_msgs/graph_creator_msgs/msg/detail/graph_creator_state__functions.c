// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_creator_msgs:msg/GraphCreatorState.idl
// generated code does not contain a copyright notice
#include "graph_creator_msgs/msg/detail/graph_creator_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
graph_creator_msgs__msg__GraphCreatorState__init(graph_creator_msgs__msg__GraphCreatorState * msg)
{
  if (!msg) {
    return false;
  }
  // graph_mode
  // current_edge_type
  // edge_is_bidirectional
  // all_vertices_locked
  // all_edges_locked
  return true;
}

void
graph_creator_msgs__msg__GraphCreatorState__fini(graph_creator_msgs__msg__GraphCreatorState * msg)
{
  if (!msg) {
    return;
  }
  // graph_mode
  // current_edge_type
  // edge_is_bidirectional
  // all_vertices_locked
  // all_edges_locked
}

bool
graph_creator_msgs__msg__GraphCreatorState__are_equal(const graph_creator_msgs__msg__GraphCreatorState * lhs, const graph_creator_msgs__msg__GraphCreatorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // graph_mode
  if (lhs->graph_mode != rhs->graph_mode) {
    return false;
  }
  // current_edge_type
  if (lhs->current_edge_type != rhs->current_edge_type) {
    return false;
  }
  // edge_is_bidirectional
  if (lhs->edge_is_bidirectional != rhs->edge_is_bidirectional) {
    return false;
  }
  // all_vertices_locked
  if (lhs->all_vertices_locked != rhs->all_vertices_locked) {
    return false;
  }
  // all_edges_locked
  if (lhs->all_edges_locked != rhs->all_edges_locked) {
    return false;
  }
  return true;
}

bool
graph_creator_msgs__msg__GraphCreatorState__copy(
  const graph_creator_msgs__msg__GraphCreatorState * input,
  graph_creator_msgs__msg__GraphCreatorState * output)
{
  if (!input || !output) {
    return false;
  }
  // graph_mode
  output->graph_mode = input->graph_mode;
  // current_edge_type
  output->current_edge_type = input->current_edge_type;
  // edge_is_bidirectional
  output->edge_is_bidirectional = input->edge_is_bidirectional;
  // all_vertices_locked
  output->all_vertices_locked = input->all_vertices_locked;
  // all_edges_locked
  output->all_edges_locked = input->all_edges_locked;
  return true;
}

graph_creator_msgs__msg__GraphCreatorState *
graph_creator_msgs__msg__GraphCreatorState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__GraphCreatorState * msg = (graph_creator_msgs__msg__GraphCreatorState *)allocator.allocate(sizeof(graph_creator_msgs__msg__GraphCreatorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_creator_msgs__msg__GraphCreatorState));
  bool success = graph_creator_msgs__msg__GraphCreatorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_creator_msgs__msg__GraphCreatorState__destroy(graph_creator_msgs__msg__GraphCreatorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_creator_msgs__msg__GraphCreatorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_creator_msgs__msg__GraphCreatorState__Sequence__init(graph_creator_msgs__msg__GraphCreatorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__GraphCreatorState * data = NULL;

  if (size) {
    data = (graph_creator_msgs__msg__GraphCreatorState *)allocator.zero_allocate(size, sizeof(graph_creator_msgs__msg__GraphCreatorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_creator_msgs__msg__GraphCreatorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_creator_msgs__msg__GraphCreatorState__fini(&data[i - 1]);
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
graph_creator_msgs__msg__GraphCreatorState__Sequence__fini(graph_creator_msgs__msg__GraphCreatorState__Sequence * array)
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
      graph_creator_msgs__msg__GraphCreatorState__fini(&array->data[i]);
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

graph_creator_msgs__msg__GraphCreatorState__Sequence *
graph_creator_msgs__msg__GraphCreatorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__GraphCreatorState__Sequence * array = (graph_creator_msgs__msg__GraphCreatorState__Sequence *)allocator.allocate(sizeof(graph_creator_msgs__msg__GraphCreatorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_creator_msgs__msg__GraphCreatorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_creator_msgs__msg__GraphCreatorState__Sequence__destroy(graph_creator_msgs__msg__GraphCreatorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_creator_msgs__msg__GraphCreatorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_creator_msgs__msg__GraphCreatorState__Sequence__are_equal(const graph_creator_msgs__msg__GraphCreatorState__Sequence * lhs, const graph_creator_msgs__msg__GraphCreatorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_creator_msgs__msg__GraphCreatorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_creator_msgs__msg__GraphCreatorState__Sequence__copy(
  const graph_creator_msgs__msg__GraphCreatorState__Sequence * input,
  graph_creator_msgs__msg__GraphCreatorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_creator_msgs__msg__GraphCreatorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graph_creator_msgs__msg__GraphCreatorState * data =
      (graph_creator_msgs__msg__GraphCreatorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_creator_msgs__msg__GraphCreatorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graph_creator_msgs__msg__GraphCreatorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graph_creator_msgs__msg__GraphCreatorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
