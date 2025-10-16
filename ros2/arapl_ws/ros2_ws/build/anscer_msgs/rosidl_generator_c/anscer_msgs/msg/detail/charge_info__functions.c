// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:msg/ChargeInfo.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/charge_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
anscer_msgs__msg__ChargeInfo__init(anscer_msgs__msg__ChargeInfo * msg)
{
  if (!msg) {
    return false;
  }
  // charger_activate
  // charge_time
  // ignore_time
  // charge_percentage
  // ignore_percentage
  return true;
}

void
anscer_msgs__msg__ChargeInfo__fini(anscer_msgs__msg__ChargeInfo * msg)
{
  if (!msg) {
    return;
  }
  // charger_activate
  // charge_time
  // ignore_time
  // charge_percentage
  // ignore_percentage
}

bool
anscer_msgs__msg__ChargeInfo__are_equal(const anscer_msgs__msg__ChargeInfo * lhs, const anscer_msgs__msg__ChargeInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // charger_activate
  if (lhs->charger_activate != rhs->charger_activate) {
    return false;
  }
  // charge_time
  if (lhs->charge_time != rhs->charge_time) {
    return false;
  }
  // ignore_time
  if (lhs->ignore_time != rhs->ignore_time) {
    return false;
  }
  // charge_percentage
  if (lhs->charge_percentage != rhs->charge_percentage) {
    return false;
  }
  // ignore_percentage
  if (lhs->ignore_percentage != rhs->ignore_percentage) {
    return false;
  }
  return true;
}

bool
anscer_msgs__msg__ChargeInfo__copy(
  const anscer_msgs__msg__ChargeInfo * input,
  anscer_msgs__msg__ChargeInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // charger_activate
  output->charger_activate = input->charger_activate;
  // charge_time
  output->charge_time = input->charge_time;
  // ignore_time
  output->ignore_time = input->ignore_time;
  // charge_percentage
  output->charge_percentage = input->charge_percentage;
  // ignore_percentage
  output->ignore_percentage = input->ignore_percentage;
  return true;
}

anscer_msgs__msg__ChargeInfo *
anscer_msgs__msg__ChargeInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__ChargeInfo * msg = (anscer_msgs__msg__ChargeInfo *)allocator.allocate(sizeof(anscer_msgs__msg__ChargeInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__msg__ChargeInfo));
  bool success = anscer_msgs__msg__ChargeInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__msg__ChargeInfo__destroy(anscer_msgs__msg__ChargeInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__msg__ChargeInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__msg__ChargeInfo__Sequence__init(anscer_msgs__msg__ChargeInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__ChargeInfo * data = NULL;

  if (size) {
    data = (anscer_msgs__msg__ChargeInfo *)allocator.zero_allocate(size, sizeof(anscer_msgs__msg__ChargeInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__msg__ChargeInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__msg__ChargeInfo__fini(&data[i - 1]);
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
anscer_msgs__msg__ChargeInfo__Sequence__fini(anscer_msgs__msg__ChargeInfo__Sequence * array)
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
      anscer_msgs__msg__ChargeInfo__fini(&array->data[i]);
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

anscer_msgs__msg__ChargeInfo__Sequence *
anscer_msgs__msg__ChargeInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__ChargeInfo__Sequence * array = (anscer_msgs__msg__ChargeInfo__Sequence *)allocator.allocate(sizeof(anscer_msgs__msg__ChargeInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__msg__ChargeInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__msg__ChargeInfo__Sequence__destroy(anscer_msgs__msg__ChargeInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__msg__ChargeInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__msg__ChargeInfo__Sequence__are_equal(const anscer_msgs__msg__ChargeInfo__Sequence * lhs, const anscer_msgs__msg__ChargeInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__msg__ChargeInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__msg__ChargeInfo__Sequence__copy(
  const anscer_msgs__msg__ChargeInfo__Sequence * input,
  anscer_msgs__msg__ChargeInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__msg__ChargeInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__msg__ChargeInfo * data =
      (anscer_msgs__msg__ChargeInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__msg__ChargeInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__msg__ChargeInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__msg__ChargeInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
