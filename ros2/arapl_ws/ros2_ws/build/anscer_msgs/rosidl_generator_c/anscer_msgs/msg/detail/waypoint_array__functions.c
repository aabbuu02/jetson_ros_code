// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:msg/WaypointArray.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/waypoint_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
anscer_msgs__msg__WaypointArray__init(anscer_msgs__msg__WaypointArray * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    anscer_msgs__msg__WaypointArray__fini(msg);
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->map_name, 0)) {
    anscer_msgs__msg__WaypointArray__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->pose, 0)) {
    anscer_msgs__msg__WaypointArray__fini(msg);
    return false;
  }
  return true;
}

void
anscer_msgs__msg__WaypointArray__fini(anscer_msgs__msg__WaypointArray * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // map_name
  rosidl_runtime_c__String__Sequence__fini(&msg->map_name);
  // pose
  geometry_msgs__msg__Pose__Sequence__fini(&msg->pose);
}

bool
anscer_msgs__msg__WaypointArray__are_equal(const anscer_msgs__msg__WaypointArray * lhs, const anscer_msgs__msg__WaypointArray * rhs)
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
  // map_name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
anscer_msgs__msg__WaypointArray__copy(
  const anscer_msgs__msg__WaypointArray * input,
  anscer_msgs__msg__WaypointArray * output)
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
  // map_name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

anscer_msgs__msg__WaypointArray *
anscer_msgs__msg__WaypointArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__WaypointArray * msg = (anscer_msgs__msg__WaypointArray *)allocator.allocate(sizeof(anscer_msgs__msg__WaypointArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__msg__WaypointArray));
  bool success = anscer_msgs__msg__WaypointArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__msg__WaypointArray__destroy(anscer_msgs__msg__WaypointArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__msg__WaypointArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__msg__WaypointArray__Sequence__init(anscer_msgs__msg__WaypointArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__WaypointArray * data = NULL;

  if (size) {
    data = (anscer_msgs__msg__WaypointArray *)allocator.zero_allocate(size, sizeof(anscer_msgs__msg__WaypointArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__msg__WaypointArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__msg__WaypointArray__fini(&data[i - 1]);
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
anscer_msgs__msg__WaypointArray__Sequence__fini(anscer_msgs__msg__WaypointArray__Sequence * array)
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
      anscer_msgs__msg__WaypointArray__fini(&array->data[i]);
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

anscer_msgs__msg__WaypointArray__Sequence *
anscer_msgs__msg__WaypointArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__WaypointArray__Sequence * array = (anscer_msgs__msg__WaypointArray__Sequence *)allocator.allocate(sizeof(anscer_msgs__msg__WaypointArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__msg__WaypointArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__msg__WaypointArray__Sequence__destroy(anscer_msgs__msg__WaypointArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__msg__WaypointArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__msg__WaypointArray__Sequence__are_equal(const anscer_msgs__msg__WaypointArray__Sequence * lhs, const anscer_msgs__msg__WaypointArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__msg__WaypointArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__msg__WaypointArray__Sequence__copy(
  const anscer_msgs__msg__WaypointArray__Sequence * input,
  anscer_msgs__msg__WaypointArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__msg__WaypointArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__msg__WaypointArray * data =
      (anscer_msgs__msg__WaypointArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__msg__WaypointArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__msg__WaypointArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__msg__WaypointArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
