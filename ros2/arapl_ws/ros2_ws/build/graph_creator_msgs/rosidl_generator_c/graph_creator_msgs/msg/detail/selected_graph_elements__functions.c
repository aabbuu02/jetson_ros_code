// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_creator_msgs:msg/SelectedGraphElements.idl
// generated code does not contain a copyright notice
#include "graph_creator_msgs/msg/detail/selected_graph_elements__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `all_vertices`
// Member `all_edges`
#include "rosidl_runtime_c/string_functions.h"

bool
graph_creator_msgs__msg__SelectedGraphElements__init(graph_creator_msgs__msg__SelectedGraphElements * msg)
{
  if (!msg) {
    return false;
  }
  // all_vertices
  if (!rosidl_runtime_c__String__Sequence__init(&msg->all_vertices, 0)) {
    graph_creator_msgs__msg__SelectedGraphElements__fini(msg);
    return false;
  }
  // all_edges
  if (!rosidl_runtime_c__String__Sequence__init(&msg->all_edges, 0)) {
    graph_creator_msgs__msg__SelectedGraphElements__fini(msg);
    return false;
  }
  return true;
}

void
graph_creator_msgs__msg__SelectedGraphElements__fini(graph_creator_msgs__msg__SelectedGraphElements * msg)
{
  if (!msg) {
    return;
  }
  // all_vertices
  rosidl_runtime_c__String__Sequence__fini(&msg->all_vertices);
  // all_edges
  rosidl_runtime_c__String__Sequence__fini(&msg->all_edges);
}

bool
graph_creator_msgs__msg__SelectedGraphElements__are_equal(const graph_creator_msgs__msg__SelectedGraphElements * lhs, const graph_creator_msgs__msg__SelectedGraphElements * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // all_vertices
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->all_vertices), &(rhs->all_vertices)))
  {
    return false;
  }
  // all_edges
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->all_edges), &(rhs->all_edges)))
  {
    return false;
  }
  return true;
}

bool
graph_creator_msgs__msg__SelectedGraphElements__copy(
  const graph_creator_msgs__msg__SelectedGraphElements * input,
  graph_creator_msgs__msg__SelectedGraphElements * output)
{
  if (!input || !output) {
    return false;
  }
  // all_vertices
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->all_vertices), &(output->all_vertices)))
  {
    return false;
  }
  // all_edges
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->all_edges), &(output->all_edges)))
  {
    return false;
  }
  return true;
}

graph_creator_msgs__msg__SelectedGraphElements *
graph_creator_msgs__msg__SelectedGraphElements__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__SelectedGraphElements * msg = (graph_creator_msgs__msg__SelectedGraphElements *)allocator.allocate(sizeof(graph_creator_msgs__msg__SelectedGraphElements), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_creator_msgs__msg__SelectedGraphElements));
  bool success = graph_creator_msgs__msg__SelectedGraphElements__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_creator_msgs__msg__SelectedGraphElements__destroy(graph_creator_msgs__msg__SelectedGraphElements * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_creator_msgs__msg__SelectedGraphElements__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_creator_msgs__msg__SelectedGraphElements__Sequence__init(graph_creator_msgs__msg__SelectedGraphElements__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__SelectedGraphElements * data = NULL;

  if (size) {
    data = (graph_creator_msgs__msg__SelectedGraphElements *)allocator.zero_allocate(size, sizeof(graph_creator_msgs__msg__SelectedGraphElements), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_creator_msgs__msg__SelectedGraphElements__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_creator_msgs__msg__SelectedGraphElements__fini(&data[i - 1]);
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
graph_creator_msgs__msg__SelectedGraphElements__Sequence__fini(graph_creator_msgs__msg__SelectedGraphElements__Sequence * array)
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
      graph_creator_msgs__msg__SelectedGraphElements__fini(&array->data[i]);
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

graph_creator_msgs__msg__SelectedGraphElements__Sequence *
graph_creator_msgs__msg__SelectedGraphElements__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_creator_msgs__msg__SelectedGraphElements__Sequence * array = (graph_creator_msgs__msg__SelectedGraphElements__Sequence *)allocator.allocate(sizeof(graph_creator_msgs__msg__SelectedGraphElements__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_creator_msgs__msg__SelectedGraphElements__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_creator_msgs__msg__SelectedGraphElements__Sequence__destroy(graph_creator_msgs__msg__SelectedGraphElements__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_creator_msgs__msg__SelectedGraphElements__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_creator_msgs__msg__SelectedGraphElements__Sequence__are_equal(const graph_creator_msgs__msg__SelectedGraphElements__Sequence * lhs, const graph_creator_msgs__msg__SelectedGraphElements__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_creator_msgs__msg__SelectedGraphElements__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_creator_msgs__msg__SelectedGraphElements__Sequence__copy(
  const graph_creator_msgs__msg__SelectedGraphElements__Sequence * input,
  graph_creator_msgs__msg__SelectedGraphElements__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_creator_msgs__msg__SelectedGraphElements);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graph_creator_msgs__msg__SelectedGraphElements * data =
      (graph_creator_msgs__msg__SelectedGraphElements *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_creator_msgs__msg__SelectedGraphElements__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graph_creator_msgs__msg__SelectedGraphElements__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graph_creator_msgs__msg__SelectedGraphElements__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
