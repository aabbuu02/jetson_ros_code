// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wms_data:msg/WMSTasks.idl
// generated code does not contain a copyright notice
#include "wms_data/msg/detail/wms_tasks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tasks`
#include "wms_data/msg/detail/wms_data__functions.h"

bool
wms_data__msg__WMSTasks__init(wms_data__msg__WMSTasks * msg)
{
  if (!msg) {
    return false;
  }
  // tasks
  if (!wms_data__msg__WMSData__Sequence__init(&msg->tasks, 0)) {
    wms_data__msg__WMSTasks__fini(msg);
    return false;
  }
  return true;
}

void
wms_data__msg__WMSTasks__fini(wms_data__msg__WMSTasks * msg)
{
  if (!msg) {
    return;
  }
  // tasks
  wms_data__msg__WMSData__Sequence__fini(&msg->tasks);
}

bool
wms_data__msg__WMSTasks__are_equal(const wms_data__msg__WMSTasks * lhs, const wms_data__msg__WMSTasks * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tasks
  if (!wms_data__msg__WMSData__Sequence__are_equal(
      &(lhs->tasks), &(rhs->tasks)))
  {
    return false;
  }
  return true;
}

bool
wms_data__msg__WMSTasks__copy(
  const wms_data__msg__WMSTasks * input,
  wms_data__msg__WMSTasks * output)
{
  if (!input || !output) {
    return false;
  }
  // tasks
  if (!wms_data__msg__WMSData__Sequence__copy(
      &(input->tasks), &(output->tasks)))
  {
    return false;
  }
  return true;
}

wms_data__msg__WMSTasks *
wms_data__msg__WMSTasks__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wms_data__msg__WMSTasks * msg = (wms_data__msg__WMSTasks *)allocator.allocate(sizeof(wms_data__msg__WMSTasks), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wms_data__msg__WMSTasks));
  bool success = wms_data__msg__WMSTasks__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wms_data__msg__WMSTasks__destroy(wms_data__msg__WMSTasks * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wms_data__msg__WMSTasks__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wms_data__msg__WMSTasks__Sequence__init(wms_data__msg__WMSTasks__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wms_data__msg__WMSTasks * data = NULL;

  if (size) {
    data = (wms_data__msg__WMSTasks *)allocator.zero_allocate(size, sizeof(wms_data__msg__WMSTasks), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wms_data__msg__WMSTasks__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wms_data__msg__WMSTasks__fini(&data[i - 1]);
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
wms_data__msg__WMSTasks__Sequence__fini(wms_data__msg__WMSTasks__Sequence * array)
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
      wms_data__msg__WMSTasks__fini(&array->data[i]);
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

wms_data__msg__WMSTasks__Sequence *
wms_data__msg__WMSTasks__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wms_data__msg__WMSTasks__Sequence * array = (wms_data__msg__WMSTasks__Sequence *)allocator.allocate(sizeof(wms_data__msg__WMSTasks__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wms_data__msg__WMSTasks__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wms_data__msg__WMSTasks__Sequence__destroy(wms_data__msg__WMSTasks__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wms_data__msg__WMSTasks__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wms_data__msg__WMSTasks__Sequence__are_equal(const wms_data__msg__WMSTasks__Sequence * lhs, const wms_data__msg__WMSTasks__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wms_data__msg__WMSTasks__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wms_data__msg__WMSTasks__Sequence__copy(
  const wms_data__msg__WMSTasks__Sequence * input,
  wms_data__msg__WMSTasks__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wms_data__msg__WMSTasks);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wms_data__msg__WMSTasks * data =
      (wms_data__msg__WMSTasks *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wms_data__msg__WMSTasks__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wms_data__msg__WMSTasks__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wms_data__msg__WMSTasks__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
