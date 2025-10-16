// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msgs:msg/GraphMetaData.idl
// generated code does not contain a copyright notice
#include "graph_msgs/msg/detail/graph_meta_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `graph_name`
#include "rosidl_runtime_c/string_functions.h"

bool
graph_msgs__msg__GraphMetaData__init(graph_msgs__msg__GraphMetaData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    graph_msgs__msg__GraphMetaData__fini(msg);
    return false;
  }
  // graph_name
  if (!rosidl_runtime_c__String__init(&msg->graph_name)) {
    graph_msgs__msg__GraphMetaData__fini(msg);
    return false;
  }
  // graph_type
  // number_of_vertices
  // number_of_edges
  return true;
}

void
graph_msgs__msg__GraphMetaData__fini(graph_msgs__msg__GraphMetaData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // graph_name
  rosidl_runtime_c__String__fini(&msg->graph_name);
  // graph_type
  // number_of_vertices
  // number_of_edges
}

bool
graph_msgs__msg__GraphMetaData__are_equal(const graph_msgs__msg__GraphMetaData * lhs, const graph_msgs__msg__GraphMetaData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // graph_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->graph_name), &(rhs->graph_name)))
  {
    return false;
  }
  // graph_type
  if (lhs->graph_type != rhs->graph_type) {
    return false;
  }
  // number_of_vertices
  if (lhs->number_of_vertices != rhs->number_of_vertices) {
    return false;
  }
  // number_of_edges
  if (lhs->number_of_edges != rhs->number_of_edges) {
    return false;
  }
  return true;
}

bool
graph_msgs__msg__GraphMetaData__copy(
  const graph_msgs__msg__GraphMetaData * input,
  graph_msgs__msg__GraphMetaData * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // graph_name
  if (!rosidl_runtime_c__String__copy(
      &(input->graph_name), &(output->graph_name)))
  {
    return false;
  }
  // graph_type
  output->graph_type = input->graph_type;
  // number_of_vertices
  output->number_of_vertices = input->number_of_vertices;
  // number_of_edges
  output->number_of_edges = input->number_of_edges;
  return true;
}

graph_msgs__msg__GraphMetaData *
graph_msgs__msg__GraphMetaData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__GraphMetaData * msg = (graph_msgs__msg__GraphMetaData *)allocator.allocate(sizeof(graph_msgs__msg__GraphMetaData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msgs__msg__GraphMetaData));
  bool success = graph_msgs__msg__GraphMetaData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_msgs__msg__GraphMetaData__destroy(graph_msgs__msg__GraphMetaData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_msgs__msg__GraphMetaData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_msgs__msg__GraphMetaData__Sequence__init(graph_msgs__msg__GraphMetaData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__GraphMetaData * data = NULL;

  if (size) {
    data = (graph_msgs__msg__GraphMetaData *)allocator.zero_allocate(size, sizeof(graph_msgs__msg__GraphMetaData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msgs__msg__GraphMetaData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msgs__msg__GraphMetaData__fini(&data[i - 1]);
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
graph_msgs__msg__GraphMetaData__Sequence__fini(graph_msgs__msg__GraphMetaData__Sequence * array)
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
      graph_msgs__msg__GraphMetaData__fini(&array->data[i]);
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

graph_msgs__msg__GraphMetaData__Sequence *
graph_msgs__msg__GraphMetaData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__GraphMetaData__Sequence * array = (graph_msgs__msg__GraphMetaData__Sequence *)allocator.allocate(sizeof(graph_msgs__msg__GraphMetaData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_msgs__msg__GraphMetaData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_msgs__msg__GraphMetaData__Sequence__destroy(graph_msgs__msg__GraphMetaData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_msgs__msg__GraphMetaData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_msgs__msg__GraphMetaData__Sequence__are_equal(const graph_msgs__msg__GraphMetaData__Sequence * lhs, const graph_msgs__msg__GraphMetaData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_msgs__msg__GraphMetaData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_msgs__msg__GraphMetaData__Sequence__copy(
  const graph_msgs__msg__GraphMetaData__Sequence * input,
  graph_msgs__msg__GraphMetaData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_msgs__msg__GraphMetaData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graph_msgs__msg__GraphMetaData * data =
      (graph_msgs__msg__GraphMetaData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_msgs__msg__GraphMetaData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graph_msgs__msg__GraphMetaData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graph_msgs__msg__GraphMetaData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
