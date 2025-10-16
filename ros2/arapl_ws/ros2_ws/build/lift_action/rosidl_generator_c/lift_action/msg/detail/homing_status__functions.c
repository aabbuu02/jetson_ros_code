// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lift_action:msg/HomingStatus.idl
// generated code does not contain a copyright notice
#include "lift_action/msg/detail/homing_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lift_action__msg__HomingStatus__init(lift_action__msg__HomingStatus * msg)
{
  if (!msg) {
    return false;
  }
  // lifter_status
  // extractor_status
  // turn_table_status
  // is_homed
  return true;
}

void
lift_action__msg__HomingStatus__fini(lift_action__msg__HomingStatus * msg)
{
  if (!msg) {
    return;
  }
  // lifter_status
  // extractor_status
  // turn_table_status
  // is_homed
}

bool
lift_action__msg__HomingStatus__are_equal(const lift_action__msg__HomingStatus * lhs, const lift_action__msg__HomingStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lifter_status
  if (lhs->lifter_status != rhs->lifter_status) {
    return false;
  }
  // extractor_status
  if (lhs->extractor_status != rhs->extractor_status) {
    return false;
  }
  // turn_table_status
  if (lhs->turn_table_status != rhs->turn_table_status) {
    return false;
  }
  // is_homed
  if (lhs->is_homed != rhs->is_homed) {
    return false;
  }
  return true;
}

bool
lift_action__msg__HomingStatus__copy(
  const lift_action__msg__HomingStatus * input,
  lift_action__msg__HomingStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // lifter_status
  output->lifter_status = input->lifter_status;
  // extractor_status
  output->extractor_status = input->extractor_status;
  // turn_table_status
  output->turn_table_status = input->turn_table_status;
  // is_homed
  output->is_homed = input->is_homed;
  return true;
}

lift_action__msg__HomingStatus *
lift_action__msg__HomingStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lift_action__msg__HomingStatus * msg = (lift_action__msg__HomingStatus *)allocator.allocate(sizeof(lift_action__msg__HomingStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lift_action__msg__HomingStatus));
  bool success = lift_action__msg__HomingStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lift_action__msg__HomingStatus__destroy(lift_action__msg__HomingStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lift_action__msg__HomingStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lift_action__msg__HomingStatus__Sequence__init(lift_action__msg__HomingStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lift_action__msg__HomingStatus * data = NULL;

  if (size) {
    data = (lift_action__msg__HomingStatus *)allocator.zero_allocate(size, sizeof(lift_action__msg__HomingStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lift_action__msg__HomingStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lift_action__msg__HomingStatus__fini(&data[i - 1]);
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
lift_action__msg__HomingStatus__Sequence__fini(lift_action__msg__HomingStatus__Sequence * array)
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
      lift_action__msg__HomingStatus__fini(&array->data[i]);
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

lift_action__msg__HomingStatus__Sequence *
lift_action__msg__HomingStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lift_action__msg__HomingStatus__Sequence * array = (lift_action__msg__HomingStatus__Sequence *)allocator.allocate(sizeof(lift_action__msg__HomingStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lift_action__msg__HomingStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lift_action__msg__HomingStatus__Sequence__destroy(lift_action__msg__HomingStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lift_action__msg__HomingStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lift_action__msg__HomingStatus__Sequence__are_equal(const lift_action__msg__HomingStatus__Sequence * lhs, const lift_action__msg__HomingStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lift_action__msg__HomingStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lift_action__msg__HomingStatus__Sequence__copy(
  const lift_action__msg__HomingStatus__Sequence * input,
  lift_action__msg__HomingStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lift_action__msg__HomingStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lift_action__msg__HomingStatus * data =
      (lift_action__msg__HomingStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lift_action__msg__HomingStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lift_action__msg__HomingStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lift_action__msg__HomingStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
