// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:msg/BatteryDB.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/battery_db__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "rosidl_runtime_c/string_functions.h"

bool
anscer_msgs__msg__BatteryDB__init(anscer_msgs__msg__BatteryDB * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!rosidl_runtime_c__String__init(&msg->timestamp)) {
    anscer_msgs__msg__BatteryDB__fini(msg);
    return false;
  }
  // capacity
  // voltage
  // current
  // linear_velocity
  // angular_velocity
  // state_of_charge
  return true;
}

void
anscer_msgs__msg__BatteryDB__fini(anscer_msgs__msg__BatteryDB * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  rosidl_runtime_c__String__fini(&msg->timestamp);
  // capacity
  // voltage
  // current
  // linear_velocity
  // angular_velocity
  // state_of_charge
}

bool
anscer_msgs__msg__BatteryDB__are_equal(const anscer_msgs__msg__BatteryDB * lhs, const anscer_msgs__msg__BatteryDB * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // capacity
  if (lhs->capacity != rhs->capacity) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // linear_velocity
  if (lhs->linear_velocity != rhs->linear_velocity) {
    return false;
  }
  // angular_velocity
  if (lhs->angular_velocity != rhs->angular_velocity) {
    return false;
  }
  // state_of_charge
  if (lhs->state_of_charge != rhs->state_of_charge) {
    return false;
  }
  return true;
}

bool
anscer_msgs__msg__BatteryDB__copy(
  const anscer_msgs__msg__BatteryDB * input,
  anscer_msgs__msg__BatteryDB * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!rosidl_runtime_c__String__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // capacity
  output->capacity = input->capacity;
  // voltage
  output->voltage = input->voltage;
  // current
  output->current = input->current;
  // linear_velocity
  output->linear_velocity = input->linear_velocity;
  // angular_velocity
  output->angular_velocity = input->angular_velocity;
  // state_of_charge
  output->state_of_charge = input->state_of_charge;
  return true;
}

anscer_msgs__msg__BatteryDB *
anscer_msgs__msg__BatteryDB__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__BatteryDB * msg = (anscer_msgs__msg__BatteryDB *)allocator.allocate(sizeof(anscer_msgs__msg__BatteryDB), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__msg__BatteryDB));
  bool success = anscer_msgs__msg__BatteryDB__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__msg__BatteryDB__destroy(anscer_msgs__msg__BatteryDB * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__msg__BatteryDB__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__msg__BatteryDB__Sequence__init(anscer_msgs__msg__BatteryDB__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__BatteryDB * data = NULL;

  if (size) {
    data = (anscer_msgs__msg__BatteryDB *)allocator.zero_allocate(size, sizeof(anscer_msgs__msg__BatteryDB), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__msg__BatteryDB__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__msg__BatteryDB__fini(&data[i - 1]);
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
anscer_msgs__msg__BatteryDB__Sequence__fini(anscer_msgs__msg__BatteryDB__Sequence * array)
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
      anscer_msgs__msg__BatteryDB__fini(&array->data[i]);
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

anscer_msgs__msg__BatteryDB__Sequence *
anscer_msgs__msg__BatteryDB__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__BatteryDB__Sequence * array = (anscer_msgs__msg__BatteryDB__Sequence *)allocator.allocate(sizeof(anscer_msgs__msg__BatteryDB__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__msg__BatteryDB__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__msg__BatteryDB__Sequence__destroy(anscer_msgs__msg__BatteryDB__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__msg__BatteryDB__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__msg__BatteryDB__Sequence__are_equal(const anscer_msgs__msg__BatteryDB__Sequence * lhs, const anscer_msgs__msg__BatteryDB__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__msg__BatteryDB__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__msg__BatteryDB__Sequence__copy(
  const anscer_msgs__msg__BatteryDB__Sequence * input,
  anscer_msgs__msg__BatteryDB__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__msg__BatteryDB);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__msg__BatteryDB * data =
      (anscer_msgs__msg__BatteryDB *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__msg__BatteryDB__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__msg__BatteryDB__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__msg__BatteryDB__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
