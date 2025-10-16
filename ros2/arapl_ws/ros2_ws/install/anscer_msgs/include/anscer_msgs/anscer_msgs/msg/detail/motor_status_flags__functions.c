// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:msg/MotorStatusFlags.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/msg/detail/motor_status_flags__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
anscer_msgs__msg__MotorStatusFlags__init(anscer_msgs__msg__MotorStatusFlags * msg)
{
  if (!msg) {
    return false;
  }
  // serial_mode
  // pulse_mode
  // analog_mode
  // power_stage_off
  // stall_detected
  // at_limit
  // unused
  // micro_basic_script_running
  // motor_tuning_mode
  return true;
}

void
anscer_msgs__msg__MotorStatusFlags__fini(anscer_msgs__msg__MotorStatusFlags * msg)
{
  if (!msg) {
    return;
  }
  // serial_mode
  // pulse_mode
  // analog_mode
  // power_stage_off
  // stall_detected
  // at_limit
  // unused
  // micro_basic_script_running
  // motor_tuning_mode
}

bool
anscer_msgs__msg__MotorStatusFlags__are_equal(const anscer_msgs__msg__MotorStatusFlags * lhs, const anscer_msgs__msg__MotorStatusFlags * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // serial_mode
  if (lhs->serial_mode != rhs->serial_mode) {
    return false;
  }
  // pulse_mode
  if (lhs->pulse_mode != rhs->pulse_mode) {
    return false;
  }
  // analog_mode
  if (lhs->analog_mode != rhs->analog_mode) {
    return false;
  }
  // power_stage_off
  if (lhs->power_stage_off != rhs->power_stage_off) {
    return false;
  }
  // stall_detected
  if (lhs->stall_detected != rhs->stall_detected) {
    return false;
  }
  // at_limit
  if (lhs->at_limit != rhs->at_limit) {
    return false;
  }
  // unused
  if (lhs->unused != rhs->unused) {
    return false;
  }
  // micro_basic_script_running
  if (lhs->micro_basic_script_running != rhs->micro_basic_script_running) {
    return false;
  }
  // motor_tuning_mode
  if (lhs->motor_tuning_mode != rhs->motor_tuning_mode) {
    return false;
  }
  return true;
}

bool
anscer_msgs__msg__MotorStatusFlags__copy(
  const anscer_msgs__msg__MotorStatusFlags * input,
  anscer_msgs__msg__MotorStatusFlags * output)
{
  if (!input || !output) {
    return false;
  }
  // serial_mode
  output->serial_mode = input->serial_mode;
  // pulse_mode
  output->pulse_mode = input->pulse_mode;
  // analog_mode
  output->analog_mode = input->analog_mode;
  // power_stage_off
  output->power_stage_off = input->power_stage_off;
  // stall_detected
  output->stall_detected = input->stall_detected;
  // at_limit
  output->at_limit = input->at_limit;
  // unused
  output->unused = input->unused;
  // micro_basic_script_running
  output->micro_basic_script_running = input->micro_basic_script_running;
  // motor_tuning_mode
  output->motor_tuning_mode = input->motor_tuning_mode;
  return true;
}

anscer_msgs__msg__MotorStatusFlags *
anscer_msgs__msg__MotorStatusFlags__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__MotorStatusFlags * msg = (anscer_msgs__msg__MotorStatusFlags *)allocator.allocate(sizeof(anscer_msgs__msg__MotorStatusFlags), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__msg__MotorStatusFlags));
  bool success = anscer_msgs__msg__MotorStatusFlags__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__msg__MotorStatusFlags__destroy(anscer_msgs__msg__MotorStatusFlags * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__msg__MotorStatusFlags__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__msg__MotorStatusFlags__Sequence__init(anscer_msgs__msg__MotorStatusFlags__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__MotorStatusFlags * data = NULL;

  if (size) {
    data = (anscer_msgs__msg__MotorStatusFlags *)allocator.zero_allocate(size, sizeof(anscer_msgs__msg__MotorStatusFlags), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__msg__MotorStatusFlags__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__msg__MotorStatusFlags__fini(&data[i - 1]);
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
anscer_msgs__msg__MotorStatusFlags__Sequence__fini(anscer_msgs__msg__MotorStatusFlags__Sequence * array)
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
      anscer_msgs__msg__MotorStatusFlags__fini(&array->data[i]);
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

anscer_msgs__msg__MotorStatusFlags__Sequence *
anscer_msgs__msg__MotorStatusFlags__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__msg__MotorStatusFlags__Sequence * array = (anscer_msgs__msg__MotorStatusFlags__Sequence *)allocator.allocate(sizeof(anscer_msgs__msg__MotorStatusFlags__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__msg__MotorStatusFlags__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__msg__MotorStatusFlags__Sequence__destroy(anscer_msgs__msg__MotorStatusFlags__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__msg__MotorStatusFlags__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__msg__MotorStatusFlags__Sequence__are_equal(const anscer_msgs__msg__MotorStatusFlags__Sequence * lhs, const anscer_msgs__msg__MotorStatusFlags__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__msg__MotorStatusFlags__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__msg__MotorStatusFlags__Sequence__copy(
  const anscer_msgs__msg__MotorStatusFlags__Sequence * input,
  anscer_msgs__msg__MotorStatusFlags__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__msg__MotorStatusFlags);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__msg__MotorStatusFlags * data =
      (anscer_msgs__msg__MotorStatusFlags *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__msg__MotorStatusFlags__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__msg__MotorStatusFlags__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__msg__MotorStatusFlags__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
