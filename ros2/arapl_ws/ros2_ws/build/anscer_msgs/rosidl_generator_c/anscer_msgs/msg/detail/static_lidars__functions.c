// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:msg/StaticLidars.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/static_lidars__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `point`
#include "anscer_msgs/msg/detail/static_lidar__functions.h"

bool
anscer_msgs__msg__StaticLidars__init(anscer_msgs__msg__StaticLidars * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    anscer_msgs__msg__StaticLidars__fini(msg);
    return false;
  }
  // point
  if (!anscer_msgs__msg__StaticLidar__Sequence__init(&msg->point, 0)) {
    anscer_msgs__msg__StaticLidars__fini(msg);
    return false;
  }
  return true;
}

void
anscer_msgs__msg__StaticLidars__fini(anscer_msgs__msg__StaticLidars * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // point
  anscer_msgs__msg__StaticLidar__Sequence__fini(&msg->point);
}

bool
anscer_msgs__msg__StaticLidars__are_equal(const anscer_msgs__msg__StaticLidars * lhs, const anscer_msgs__msg__StaticLidars * rhs)
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
  // point
  if (!anscer_msgs__msg__StaticLidar__Sequence__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  return true;
}

bool
anscer_msgs__msg__StaticLidars__copy(
  const anscer_msgs__msg__StaticLidars * input,
  anscer_msgs__msg__StaticLidars * output)
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
  // point
  if (!anscer_msgs__msg__StaticLidar__Sequence__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  return true;
}

anscer_msgs__msg__StaticLidars *
anscer_msgs__msg__StaticLidars__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__StaticLidars * msg = (anscer_msgs__msg__StaticLidars *)allocator.allocate(sizeof(anscer_msgs__msg__StaticLidars), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__msg__StaticLidars));
  bool success = anscer_msgs__msg__StaticLidars__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__msg__StaticLidars__destroy(anscer_msgs__msg__StaticLidars * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__msg__StaticLidars__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__msg__StaticLidars__Sequence__init(anscer_msgs__msg__StaticLidars__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__StaticLidars * data = NULL;

  if (size) {
    data = (anscer_msgs__msg__StaticLidars *)allocator.zero_allocate(size, sizeof(anscer_msgs__msg__StaticLidars), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__msg__StaticLidars__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__msg__StaticLidars__fini(&data[i - 1]);
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
anscer_msgs__msg__StaticLidars__Sequence__fini(anscer_msgs__msg__StaticLidars__Sequence * array)
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
      anscer_msgs__msg__StaticLidars__fini(&array->data[i]);
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

anscer_msgs__msg__StaticLidars__Sequence *
anscer_msgs__msg__StaticLidars__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__StaticLidars__Sequence * array = (anscer_msgs__msg__StaticLidars__Sequence *)allocator.allocate(sizeof(anscer_msgs__msg__StaticLidars__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__msg__StaticLidars__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__msg__StaticLidars__Sequence__destroy(anscer_msgs__msg__StaticLidars__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__msg__StaticLidars__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__msg__StaticLidars__Sequence__are_equal(const anscer_msgs__msg__StaticLidars__Sequence * lhs, const anscer_msgs__msg__StaticLidars__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__msg__StaticLidars__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__msg__StaticLidars__Sequence__copy(
  const anscer_msgs__msg__StaticLidars__Sequence * input,
  anscer_msgs__msg__StaticLidars__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__msg__StaticLidars);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__msg__StaticLidars * data =
      (anscer_msgs__msg__StaticLidars *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__msg__StaticLidars__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__msg__StaticLidars__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__msg__StaticLidars__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
