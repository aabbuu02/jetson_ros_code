// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wms_data:msg/Feedback.idl
// generated code does not contain a copyright notice
#include "wms_data/msg/detail/feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `unique_id`
#include "rosidl_runtime_c/string_functions.h"

bool
wms_data__msg__Feedback__init(wms_data__msg__Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // unique_id
  if (!rosidl_runtime_c__String__init(&msg->unique_id)) {
    wms_data__msg__Feedback__fini(msg);
    return false;
  }
  // acr_shelf
  // action
  // status
  // fail_status
  return true;
}

void
wms_data__msg__Feedback__fini(wms_data__msg__Feedback * msg)
{
  if (!msg) {
    return;
  }
  // unique_id
  rosidl_runtime_c__String__fini(&msg->unique_id);
  // acr_shelf
  // action
  // status
  // fail_status
}

bool
wms_data__msg__Feedback__are_equal(const wms_data__msg__Feedback * lhs, const wms_data__msg__Feedback * rhs)
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
  // acr_shelf
  if (lhs->acr_shelf != rhs->acr_shelf) {
    return false;
  }
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // fail_status
  if (lhs->fail_status != rhs->fail_status) {
    return false;
  }
  return true;
}

bool
wms_data__msg__Feedback__copy(
  const wms_data__msg__Feedback * input,
  wms_data__msg__Feedback * output)
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
  // acr_shelf
  output->acr_shelf = input->acr_shelf;
  // action
  output->action = input->action;
  // status
  output->status = input->status;
  // fail_status
  output->fail_status = input->fail_status;
  return true;
}

wms_data__msg__Feedback *
wms_data__msg__Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wms_data__msg__Feedback * msg = (wms_data__msg__Feedback *)allocator.allocate(sizeof(wms_data__msg__Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wms_data__msg__Feedback));
  bool success = wms_data__msg__Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wms_data__msg__Feedback__destroy(wms_data__msg__Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wms_data__msg__Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wms_data__msg__Feedback__Sequence__init(wms_data__msg__Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wms_data__msg__Feedback * data = NULL;

  if (size) {
    data = (wms_data__msg__Feedback *)allocator.zero_allocate(size, sizeof(wms_data__msg__Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wms_data__msg__Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wms_data__msg__Feedback__fini(&data[i - 1]);
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
wms_data__msg__Feedback__Sequence__fini(wms_data__msg__Feedback__Sequence * array)
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
      wms_data__msg__Feedback__fini(&array->data[i]);
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

wms_data__msg__Feedback__Sequence *
wms_data__msg__Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wms_data__msg__Feedback__Sequence * array = (wms_data__msg__Feedback__Sequence *)allocator.allocate(sizeof(wms_data__msg__Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wms_data__msg__Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wms_data__msg__Feedback__Sequence__destroy(wms_data__msg__Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wms_data__msg__Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wms_data__msg__Feedback__Sequence__are_equal(const wms_data__msg__Feedback__Sequence * lhs, const wms_data__msg__Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wms_data__msg__Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wms_data__msg__Feedback__Sequence__copy(
  const wms_data__msg__Feedback__Sequence * input,
  wms_data__msg__Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wms_data__msg__Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wms_data__msg__Feedback * data =
      (wms_data__msg__Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wms_data__msg__Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wms_data__msg__Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wms_data__msg__Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
