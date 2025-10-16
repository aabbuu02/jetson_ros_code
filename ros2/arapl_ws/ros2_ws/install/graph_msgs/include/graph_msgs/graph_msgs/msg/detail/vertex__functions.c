// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graph_msgs:msg/Vertex.idl
// generated code does not contain a copyright notice
#include "graph_msgs/msg/detail/vertex__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `alias`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `properties`
#include "graph_msgs/msg/detail/property__functions.h"

bool
graph_msgs__msg__Vertex__init(graph_msgs__msg__Vertex * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    graph_msgs__msg__Vertex__fini(msg);
    return false;
  }
  // alias
  if (!rosidl_runtime_c__String__init(&msg->alias)) {
    graph_msgs__msg__Vertex__fini(msg);
    return false;
  }
  // type
  // ignore_orientation
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    graph_msgs__msg__Vertex__fini(msg);
    return false;
  }
  // properties
  if (!graph_msgs__msg__Property__Sequence__init(&msg->properties, 0)) {
    graph_msgs__msg__Vertex__fini(msg);
    return false;
  }
  return true;
}

void
graph_msgs__msg__Vertex__fini(graph_msgs__msg__Vertex * msg)
{
  if (!msg) {
    return;
  }
  // id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // alias
  rosidl_runtime_c__String__fini(&msg->alias);
  // type
  // ignore_orientation
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // properties
  graph_msgs__msg__Property__Sequence__fini(&msg->properties);
}

bool
graph_msgs__msg__Vertex__are_equal(const graph_msgs__msg__Vertex * lhs, const graph_msgs__msg__Vertex * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
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
  // ignore_orientation
  if (lhs->ignore_orientation != rhs->ignore_orientation) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
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
graph_msgs__msg__Vertex__copy(
  const graph_msgs__msg__Vertex * input,
  graph_msgs__msg__Vertex * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
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
  // ignore_orientation
  output->ignore_orientation = input->ignore_orientation;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
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

graph_msgs__msg__Vertex *
graph_msgs__msg__Vertex__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__Vertex * msg = (graph_msgs__msg__Vertex *)allocator.allocate(sizeof(graph_msgs__msg__Vertex), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graph_msgs__msg__Vertex));
  bool success = graph_msgs__msg__Vertex__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graph_msgs__msg__Vertex__destroy(graph_msgs__msg__Vertex * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graph_msgs__msg__Vertex__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graph_msgs__msg__Vertex__Sequence__init(graph_msgs__msg__Vertex__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__Vertex * data = NULL;

  if (size) {
    data = (graph_msgs__msg__Vertex *)allocator.zero_allocate(size, sizeof(graph_msgs__msg__Vertex), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graph_msgs__msg__Vertex__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graph_msgs__msg__Vertex__fini(&data[i - 1]);
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
graph_msgs__msg__Vertex__Sequence__fini(graph_msgs__msg__Vertex__Sequence * array)
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
      graph_msgs__msg__Vertex__fini(&array->data[i]);
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

graph_msgs__msg__Vertex__Sequence *
graph_msgs__msg__Vertex__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graph_msgs__msg__Vertex__Sequence * array = (graph_msgs__msg__Vertex__Sequence *)allocator.allocate(sizeof(graph_msgs__msg__Vertex__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graph_msgs__msg__Vertex__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graph_msgs__msg__Vertex__Sequence__destroy(graph_msgs__msg__Vertex__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graph_msgs__msg__Vertex__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graph_msgs__msg__Vertex__Sequence__are_equal(const graph_msgs__msg__Vertex__Sequence * lhs, const graph_msgs__msg__Vertex__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graph_msgs__msg__Vertex__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graph_msgs__msg__Vertex__Sequence__copy(
  const graph_msgs__msg__Vertex__Sequence * input,
  graph_msgs__msg__Vertex__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graph_msgs__msg__Vertex);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graph_msgs__msg__Vertex * data =
      (graph_msgs__msg__Vertex *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graph_msgs__msg__Vertex__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graph_msgs__msg__Vertex__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graph_msgs__msg__Vertex__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
