// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lift_action:msg/ErrorStatus.idl
// generated code does not contain a copyright notice
#include "lift_action/msg/detail/error_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lift_action__msg__ErrorStatus__init(lift_action__msg__ErrorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // lifter_fault
  // extractor_fault
  // turn_table_fault
  // swing_arm_fault
  // emergency_pb_fault
  // swing_arm_sensor_zero_fault
  // swing_arm_sensor_ninety_fault
  // turntable_sensor_zero_fault
  // extractor_sensor_laser_fault
  return true;
}

void
lift_action__msg__ErrorStatus__fini(lift_action__msg__ErrorStatus * msg)
{
  if (!msg) {
    return;
  }
  // lifter_fault
  // extractor_fault
  // turn_table_fault
  // swing_arm_fault
  // emergency_pb_fault
  // swing_arm_sensor_zero_fault
  // swing_arm_sensor_ninety_fault
  // turntable_sensor_zero_fault
  // extractor_sensor_laser_fault
}

bool
lift_action__msg__ErrorStatus__are_equal(const lift_action__msg__ErrorStatus * lhs, const lift_action__msg__ErrorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lifter_fault
  if (lhs->lifter_fault != rhs->lifter_fault) {
    return false;
  }
  // extractor_fault
  if (lhs->extractor_fault != rhs->extractor_fault) {
    return false;
  }
  // turn_table_fault
  if (lhs->turn_table_fault != rhs->turn_table_fault) {
    return false;
  }
  // swing_arm_fault
  if (lhs->swing_arm_fault != rhs->swing_arm_fault) {
    return false;
  }
  // emergency_pb_fault
  if (lhs->emergency_pb_fault != rhs->emergency_pb_fault) {
    return false;
  }
  // swing_arm_sensor_zero_fault
  if (lhs->swing_arm_sensor_zero_fault != rhs->swing_arm_sensor_zero_fault) {
    return false;
  }
  // swing_arm_sensor_ninety_fault
  if (lhs->swing_arm_sensor_ninety_fault != rhs->swing_arm_sensor_ninety_fault) {
    return false;
  }
  // turntable_sensor_zero_fault
  if (lhs->turntable_sensor_zero_fault != rhs->turntable_sensor_zero_fault) {
    return false;
  }
  // extractor_sensor_laser_fault
  if (lhs->extractor_sensor_laser_fault != rhs->extractor_sensor_laser_fault) {
    return false;
  }
  return true;
}

bool
lift_action__msg__ErrorStatus__copy(
  const lift_action__msg__ErrorStatus * input,
  lift_action__msg__ErrorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // lifter_fault
  output->lifter_fault = input->lifter_fault;
  // extractor_fault
  output->extractor_fault = input->extractor_fault;
  // turn_table_fault
  output->turn_table_fault = input->turn_table_fault;
  // swing_arm_fault
  output->swing_arm_fault = input->swing_arm_fault;
  // emergency_pb_fault
  output->emergency_pb_fault = input->emergency_pb_fault;
  // swing_arm_sensor_zero_fault
  output->swing_arm_sensor_zero_fault = input->swing_arm_sensor_zero_fault;
  // swing_arm_sensor_ninety_fault
  output->swing_arm_sensor_ninety_fault = input->swing_arm_sensor_ninety_fault;
  // turntable_sensor_zero_fault
  output->turntable_sensor_zero_fault = input->turntable_sensor_zero_fault;
  // extractor_sensor_laser_fault
  output->extractor_sensor_laser_fault = input->extractor_sensor_laser_fault;
  return true;
}

lift_action__msg__ErrorStatus *
lift_action__msg__ErrorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lift_action__msg__ErrorStatus * msg = (lift_action__msg__ErrorStatus *)allocator.allocate(sizeof(lift_action__msg__ErrorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lift_action__msg__ErrorStatus));
  bool success = lift_action__msg__ErrorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lift_action__msg__ErrorStatus__destroy(lift_action__msg__ErrorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lift_action__msg__ErrorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lift_action__msg__ErrorStatus__Sequence__init(lift_action__msg__ErrorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lift_action__msg__ErrorStatus * data = NULL;

  if (size) {
    data = (lift_action__msg__ErrorStatus *)allocator.zero_allocate(size, sizeof(lift_action__msg__ErrorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lift_action__msg__ErrorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lift_action__msg__ErrorStatus__fini(&data[i - 1]);
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
lift_action__msg__ErrorStatus__Sequence__fini(lift_action__msg__ErrorStatus__Sequence * array)
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
      lift_action__msg__ErrorStatus__fini(&array->data[i]);
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

lift_action__msg__ErrorStatus__Sequence *
lift_action__msg__ErrorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lift_action__msg__ErrorStatus__Sequence * array = (lift_action__msg__ErrorStatus__Sequence *)allocator.allocate(sizeof(lift_action__msg__ErrorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lift_action__msg__ErrorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lift_action__msg__ErrorStatus__Sequence__destroy(lift_action__msg__ErrorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lift_action__msg__ErrorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lift_action__msg__ErrorStatus__Sequence__are_equal(const lift_action__msg__ErrorStatus__Sequence * lhs, const lift_action__msg__ErrorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lift_action__msg__ErrorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lift_action__msg__ErrorStatus__Sequence__copy(
  const lift_action__msg__ErrorStatus__Sequence * input,
  lift_action__msg__ErrorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lift_action__msg__ErrorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lift_action__msg__ErrorStatus * data =
      (lift_action__msg__ErrorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lift_action__msg__ErrorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lift_action__msg__ErrorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lift_action__msg__ErrorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
