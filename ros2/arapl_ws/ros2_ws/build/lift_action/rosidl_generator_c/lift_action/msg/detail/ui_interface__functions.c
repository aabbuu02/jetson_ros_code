// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lift_action:msg/UiInterface.idl
// generated code does not contain a copyright notice
#include "lift_action/msg/detail/ui_interface__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `process`
#include "rosidl_runtime_c/string_functions.h"

bool
lift_action__msg__UiInterface__init(lift_action__msg__UiInterface * msg)
{
  if (!msg) {
    return false;
  }
  // process
  if (!rosidl_runtime_c__String__init(&msg->process)) {
    lift_action__msg__UiInterface__fini(msg);
    return false;
  }
  // button
  // direction
  return true;
}

void
lift_action__msg__UiInterface__fini(lift_action__msg__UiInterface * msg)
{
  if (!msg) {
    return;
  }
  // process
  rosidl_runtime_c__String__fini(&msg->process);
  // button
  // direction
}

bool
lift_action__msg__UiInterface__are_equal(const lift_action__msg__UiInterface * lhs, const lift_action__msg__UiInterface * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // process
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->process), &(rhs->process)))
  {
    return false;
  }
  // button
  if (lhs->button != rhs->button) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  return true;
}

bool
lift_action__msg__UiInterface__copy(
  const lift_action__msg__UiInterface * input,
  lift_action__msg__UiInterface * output)
{
  if (!input || !output) {
    return false;
  }
  // process
  if (!rosidl_runtime_c__String__copy(
      &(input->process), &(output->process)))
  {
    return false;
  }
  // button
  output->button = input->button;
  // direction
  output->direction = input->direction;
  return true;
}

lift_action__msg__UiInterface *
lift_action__msg__UiInterface__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lift_action__msg__UiInterface * msg = (lift_action__msg__UiInterface *)allocator.allocate(sizeof(lift_action__msg__UiInterface), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lift_action__msg__UiInterface));
  bool success = lift_action__msg__UiInterface__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lift_action__msg__UiInterface__destroy(lift_action__msg__UiInterface * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lift_action__msg__UiInterface__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lift_action__msg__UiInterface__Sequence__init(lift_action__msg__UiInterface__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lift_action__msg__UiInterface * data = NULL;

  if (size) {
    data = (lift_action__msg__UiInterface *)allocator.zero_allocate(size, sizeof(lift_action__msg__UiInterface), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lift_action__msg__UiInterface__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lift_action__msg__UiInterface__fini(&data[i - 1]);
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
lift_action__msg__UiInterface__Sequence__fini(lift_action__msg__UiInterface__Sequence * array)
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
      lift_action__msg__UiInterface__fini(&array->data[i]);
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

lift_action__msg__UiInterface__Sequence *
lift_action__msg__UiInterface__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lift_action__msg__UiInterface__Sequence * array = (lift_action__msg__UiInterface__Sequence *)allocator.allocate(sizeof(lift_action__msg__UiInterface__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lift_action__msg__UiInterface__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lift_action__msg__UiInterface__Sequence__destroy(lift_action__msg__UiInterface__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lift_action__msg__UiInterface__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lift_action__msg__UiInterface__Sequence__are_equal(const lift_action__msg__UiInterface__Sequence * lhs, const lift_action__msg__UiInterface__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lift_action__msg__UiInterface__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lift_action__msg__UiInterface__Sequence__copy(
  const lift_action__msg__UiInterface__Sequence * input,
  lift_action__msg__UiInterface__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lift_action__msg__UiInterface);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lift_action__msg__UiInterface * data =
      (lift_action__msg__UiInterface *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lift_action__msg__UiInterface__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lift_action__msg__UiInterface__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lift_action__msg__UiInterface__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
