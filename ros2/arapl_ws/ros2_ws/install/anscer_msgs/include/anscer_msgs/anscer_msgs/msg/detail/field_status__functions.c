// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:msg/FieldStatus.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/field_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
anscer_msgs__msg__FieldStatus__init(anscer_msgs__msg__FieldStatus * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  // is_safety
  // is_warning
  return true;
}

void
anscer_msgs__msg__FieldStatus__fini(anscer_msgs__msg__FieldStatus * msg)
{
  if (!msg) {
    return;
  }
  // direction
  // is_safety
  // is_warning
}

bool
anscer_msgs__msg__FieldStatus__are_equal(const anscer_msgs__msg__FieldStatus * lhs, const anscer_msgs__msg__FieldStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // is_safety
  if (lhs->is_safety != rhs->is_safety) {
    return false;
  }
  // is_warning
  if (lhs->is_warning != rhs->is_warning) {
    return false;
  }
  return true;
}

bool
anscer_msgs__msg__FieldStatus__copy(
  const anscer_msgs__msg__FieldStatus * input,
  anscer_msgs__msg__FieldStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  output->direction = input->direction;
  // is_safety
  output->is_safety = input->is_safety;
  // is_warning
  output->is_warning = input->is_warning;
  return true;
}

anscer_msgs__msg__FieldStatus *
anscer_msgs__msg__FieldStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__FieldStatus * msg = (anscer_msgs__msg__FieldStatus *)allocator.allocate(sizeof(anscer_msgs__msg__FieldStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__msg__FieldStatus));
  bool success = anscer_msgs__msg__FieldStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__msg__FieldStatus__destroy(anscer_msgs__msg__FieldStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__msg__FieldStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__msg__FieldStatus__Sequence__init(anscer_msgs__msg__FieldStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__FieldStatus * data = NULL;

  if (size) {
    data = (anscer_msgs__msg__FieldStatus *)allocator.zero_allocate(size, sizeof(anscer_msgs__msg__FieldStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__msg__FieldStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__msg__FieldStatus__fini(&data[i - 1]);
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
anscer_msgs__msg__FieldStatus__Sequence__fini(anscer_msgs__msg__FieldStatus__Sequence * array)
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
      anscer_msgs__msg__FieldStatus__fini(&array->data[i]);
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

anscer_msgs__msg__FieldStatus__Sequence *
anscer_msgs__msg__FieldStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__FieldStatus__Sequence * array = (anscer_msgs__msg__FieldStatus__Sequence *)allocator.allocate(sizeof(anscer_msgs__msg__FieldStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__msg__FieldStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__msg__FieldStatus__Sequence__destroy(anscer_msgs__msg__FieldStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__msg__FieldStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__msg__FieldStatus__Sequence__are_equal(const anscer_msgs__msg__FieldStatus__Sequence * lhs, const anscer_msgs__msg__FieldStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__msg__FieldStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__msg__FieldStatus__Sequence__copy(
  const anscer_msgs__msg__FieldStatus__Sequence * input,
  anscer_msgs__msg__FieldStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__msg__FieldStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__msg__FieldStatus * data =
      (anscer_msgs__msg__FieldStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__msg__FieldStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__msg__FieldStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__msg__FieldStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
