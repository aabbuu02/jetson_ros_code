// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lift_action:msg/LiftAction.idl
// generated code does not contain a copyright notice
#include "lift_action/msg/detail/lift_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `unique_id`
// Member `whole_bin_no`
// Member `putaway_barcode`
#include "rosidl_runtime_c/string_functions.h"

bool
lift_action__msg__LiftAction__init(lift_action__msg__LiftAction * msg)
{
  if (!msg) {
    return false;
  }
  // unique_id
  if (!rosidl_runtime_c__String__init(&msg->unique_id)) {
    lift_action__msg__LiftAction__fini(msg);
    return false;
  }
  // reached
  // rack
  // shelf
  // acr_shelf
  // action
  // whole_bin_no
  if (!rosidl_runtime_c__String__init(&msg->whole_bin_no)) {
    lift_action__msg__LiftAction__fini(msg);
    return false;
  }
  // putaway_barcode
  if (!rosidl_runtime_c__String__init(&msg->putaway_barcode)) {
    lift_action__msg__LiftAction__fini(msg);
    return false;
  }
  return true;
}

void
lift_action__msg__LiftAction__fini(lift_action__msg__LiftAction * msg)
{
  if (!msg) {
    return;
  }
  // unique_id
  rosidl_runtime_c__String__fini(&msg->unique_id);
  // reached
  // rack
  // shelf
  // acr_shelf
  // action
  // whole_bin_no
  rosidl_runtime_c__String__fini(&msg->whole_bin_no);
  // putaway_barcode
  rosidl_runtime_c__String__fini(&msg->putaway_barcode);
}

bool
lift_action__msg__LiftAction__are_equal(const lift_action__msg__LiftAction * lhs, const lift_action__msg__LiftAction * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // unique_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->unique_id), &(rhs->unique_id)))
  {
    return false;
  }
  // reached
  if (lhs->reached != rhs->reached) {
    return false;
  }
  // rack
  if (lhs->rack != rhs->rack) {
    return false;
  }
  // shelf
  if (lhs->shelf != rhs->shelf) {
    return false;
  }
  // acr_shelf
  if (lhs->acr_shelf != rhs->acr_shelf) {
    return false;
  }
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // whole_bin_no
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->whole_bin_no), &(rhs->whole_bin_no)))
  {
    return false;
  }
  // putaway_barcode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->putaway_barcode), &(rhs->putaway_barcode)))
  {
    return false;
  }
  return true;
}

bool
lift_action__msg__LiftAction__copy(
  const lift_action__msg__LiftAction * input,
  lift_action__msg__LiftAction * output)
{
  if (!input || !output) {
    return false;
  }
  // unique_id
  if (!rosidl_runtime_c__String__copy(
      &(input->unique_id), &(output->unique_id)))
  {
    return false;
  }
  // reached
  output->reached = input->reached;
  // rack
  output->rack = input->rack;
  // shelf
  output->shelf = input->shelf;
  // acr_shelf
  output->acr_shelf = input->acr_shelf;
  // action
  output->action = input->action;
  // whole_bin_no
  if (!rosidl_runtime_c__String__copy(
      &(input->whole_bin_no), &(output->whole_bin_no)))
  {
    return false;
  }
  // putaway_barcode
  if (!rosidl_runtime_c__String__copy(
      &(input->putaway_barcode), &(output->putaway_barcode)))
  {
    return false;
  }
  return true;
}

lift_action__msg__LiftAction *
lift_action__msg__LiftAction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lift_action__msg__LiftAction * msg = (lift_action__msg__LiftAction *)allocator.allocate(sizeof(lift_action__msg__LiftAction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lift_action__msg__LiftAction));
  bool success = lift_action__msg__LiftAction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lift_action__msg__LiftAction__destroy(lift_action__msg__LiftAction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lift_action__msg__LiftAction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lift_action__msg__LiftAction__Sequence__init(lift_action__msg__LiftAction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lift_action__msg__LiftAction * data = NULL;

  if (size) {
    data = (lift_action__msg__LiftAction *)allocator.zero_allocate(size, sizeof(lift_action__msg__LiftAction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lift_action__msg__LiftAction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lift_action__msg__LiftAction__fini(&data[i - 1]);
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
lift_action__msg__LiftAction__Sequence__fini(lift_action__msg__LiftAction__Sequence * array)
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
      lift_action__msg__LiftAction__fini(&array->data[i]);
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

lift_action__msg__LiftAction__Sequence *
lift_action__msg__LiftAction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lift_action__msg__LiftAction__Sequence * array = (lift_action__msg__LiftAction__Sequence *)allocator.allocate(sizeof(lift_action__msg__LiftAction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lift_action__msg__LiftAction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lift_action__msg__LiftAction__Sequence__destroy(lift_action__msg__LiftAction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lift_action__msg__LiftAction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lift_action__msg__LiftAction__Sequence__are_equal(const lift_action__msg__LiftAction__Sequence * lhs, const lift_action__msg__LiftAction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lift_action__msg__LiftAction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lift_action__msg__LiftAction__Sequence__copy(
  const lift_action__msg__LiftAction__Sequence * input,
  lift_action__msg__LiftAction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lift_action__msg__LiftAction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lift_action__msg__LiftAction * data =
      (lift_action__msg__LiftAction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lift_action__msg__LiftAction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lift_action__msg__LiftAction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lift_action__msg__LiftAction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
