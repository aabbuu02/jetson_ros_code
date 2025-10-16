// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msgs:msg/Property.idl
// generated code does not contain a copyright notice
#include "graph_msgs/msg/detail/property__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `key`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
graph_msgs__msg__Property__init(graph_msgs__msg__Property * msg)
{
  if (!msg) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__init(&msg->key)) {
    graph_msgs__msg__Property__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__init(&msg->value)) {
    graph_msgs__msg__Property__fini(msg);
    return false;
  }
  return true;
}

void
graph_msgs__msg__Property__fini(graph_msgs__msg__Property * msg)
{
  if (!msg) {
    return;
  }
  // key
  rosidl_runtime_c__String__fini(&msg->key);
  // value
  rosidl_runtime_c__String__fini(&msg->value);
}

bool
graph_msgs__msg__Property__are_equal(const graph_msgs__msg__Property * lhs, const graph_msgs__msg__Property * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->key), &(rhs->key)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
graph_msgs__msg__Property__copy(
  const graph_msgs__msg__Property * input,
  graph_msgs__msg__Property * output)
{
  if (!input || !output) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__copy(
      &(input->key), &(output->key)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

graph_msgs__msg__Property *
graph_msgs__msg__Property__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__Property * msg = (graph_msgs__msg__Property *)allocator.allocate(sizeof(graph_msgs__msg__Property), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msgs__msg__Property));
  bool success = graph_msgs__msg__Property__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_msgs__msg__Property__destroy(graph_msgs__msg__Property * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_msgs__msg__Property__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_msgs__msg__Property__Sequence__init(graph_msgs__msg__Property__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__Property * data = NULL;

  if (size) {
    data = (graph_msgs__msg__Property *)allocator.zero_allocate(size, sizeof(graph_msgs__msg__Property), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msgs__msg__Property__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msgs__msg__Property__fini(&data[i - 1]);
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
graph_msgs__msg__Property__Sequence__fini(graph_msgs__msg__Property__Sequence * array)
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
      graph_msgs__msg__Property__fini(&array->data[i]);
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

graph_msgs__msg__Property__Sequence *
graph_msgs__msg__Property__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__Property__Sequence * array = (graph_msgs__msg__Property__Sequence *)allocator.allocate(sizeof(graph_msgs__msg__Property__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_msgs__msg__Property__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_msgs__msg__Property__Sequence__destroy(graph_msgs__msg__Property__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_msgs__msg__Property__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_msgs__msg__Property__Sequence__are_equal(const graph_msgs__msg__Property__Sequence * lhs, const graph_msgs__msg__Property__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_msgs__msg__Property__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_msgs__msg__Property__Sequence__copy(
  const graph_msgs__msg__Property__Sequence * input,
  graph_msgs__msg__Property__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_msgs__msg__Property);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graph_msgs__msg__Property * data =
      (graph_msgs__msg__Property *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_msgs__msg__Property__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graph_msgs__msg__Property__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graph_msgs__msg__Property__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
