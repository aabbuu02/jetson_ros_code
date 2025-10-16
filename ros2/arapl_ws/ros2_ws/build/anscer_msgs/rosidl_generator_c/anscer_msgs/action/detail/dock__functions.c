// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:action/Dock.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/action/detail/dock__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
anscer_msgs__action__Dock_Goal__init(anscer_msgs__action__Dock_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // aruco_charging
  // reflector_charging
  // general_docking
  // vlmarker_charging
  // start_dock
  // start_undock
  // inplace_id
  // undock_distance
  return true;
}

void
anscer_msgs__action__Dock_Goal__fini(anscer_msgs__action__Dock_Goal * msg)
{
  if (!msg) {
    return;
  }
  // aruco_charging
  // reflector_charging
  // general_docking
  // vlmarker_charging
  // start_dock
  // start_undock
  // inplace_id
  // undock_distance
}

bool
anscer_msgs__action__Dock_Goal__are_equal(const anscer_msgs__action__Dock_Goal * lhs, const anscer_msgs__action__Dock_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // aruco_charging
  if (lhs->aruco_charging != rhs->aruco_charging) {
    return false;
  }
  // reflector_charging
  if (lhs->reflector_charging != rhs->reflector_charging) {
    return false;
  }
  // general_docking
  if (lhs->general_docking != rhs->general_docking) {
    return false;
  }
  // vlmarker_charging
  if (lhs->vlmarker_charging != rhs->vlmarker_charging) {
    return false;
  }
  // start_dock
  if (lhs->start_dock != rhs->start_dock) {
    return false;
  }
  // start_undock
  if (lhs->start_undock != rhs->start_undock) {
    return false;
  }
  // inplace_id
  if (lhs->inplace_id != rhs->inplace_id) {
    return false;
  }
  // undock_distance
  if (lhs->undock_distance != rhs->undock_distance) {
    return false;
  }
  return true;
}

bool
anscer_msgs__action__Dock_Goal__copy(
  const anscer_msgs__action__Dock_Goal * input,
  anscer_msgs__action__Dock_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // aruco_charging
  output->aruco_charging = input->aruco_charging;
  // reflector_charging
  output->reflector_charging = input->reflector_charging;
  // general_docking
  output->general_docking = input->general_docking;
  // vlmarker_charging
  output->vlmarker_charging = input->vlmarker_charging;
  // start_dock
  output->start_dock = input->start_dock;
  // start_undock
  output->start_undock = input->start_undock;
  // inplace_id
  output->inplace_id = input->inplace_id;
  // undock_distance
  output->undock_distance = input->undock_distance;
  return true;
}

anscer_msgs__action__Dock_Goal *
anscer_msgs__action__Dock_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_Goal * msg = (anscer_msgs__action__Dock_Goal *)allocator.allocate(sizeof(anscer_msgs__action__Dock_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__action__Dock_Goal));
  bool success = anscer_msgs__action__Dock_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__action__Dock_Goal__destroy(anscer_msgs__action__Dock_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__action__Dock_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__action__Dock_Goal__Sequence__init(anscer_msgs__action__Dock_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_Goal * data = NULL;

  if (size) {
    data = (anscer_msgs__action__Dock_Goal *)allocator.zero_allocate(size, sizeof(anscer_msgs__action__Dock_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__action__Dock_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__action__Dock_Goal__fini(&data[i - 1]);
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
anscer_msgs__action__Dock_Goal__Sequence__fini(anscer_msgs__action__Dock_Goal__Sequence * array)
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
      anscer_msgs__action__Dock_Goal__fini(&array->data[i]);
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

anscer_msgs__action__Dock_Goal__Sequence *
anscer_msgs__action__Dock_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_Goal__Sequence * array = (anscer_msgs__action__Dock_Goal__Sequence *)allocator.allocate(sizeof(anscer_msgs__action__Dock_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__action__Dock_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__action__Dock_Goal__Sequence__destroy(anscer_msgs__action__Dock_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__action__Dock_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__action__Dock_Goal__Sequence__are_equal(const anscer_msgs__action__Dock_Goal__Sequence * lhs, const anscer_msgs__action__Dock_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__action__Dock_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__action__Dock_Goal__Sequence__copy(
  const anscer_msgs__action__Dock_Goal__Sequence * input,
  anscer_msgs__action__Dock_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__action__Dock_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__action__Dock_Goal * data =
      (anscer_msgs__action__Dock_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__action__Dock_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__action__Dock_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__action__Dock_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
anscer_msgs__action__Dock_Result__init(anscer_msgs__action__Dock_Result * msg)
{
  if (!msg) {
    return false;
  }
  // is_success
  return true;
}

void
anscer_msgs__action__Dock_Result__fini(anscer_msgs__action__Dock_Result * msg)
{
  if (!msg) {
    return;
  }
  // is_success
}

bool
anscer_msgs__action__Dock_Result__are_equal(const anscer_msgs__action__Dock_Result * lhs, const anscer_msgs__action__Dock_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_success
  if (lhs->is_success != rhs->is_success) {
    return false;
  }
  return true;
}

bool
anscer_msgs__action__Dock_Result__copy(
  const anscer_msgs__action__Dock_Result * input,
  anscer_msgs__action__Dock_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // is_success
  output->is_success = input->is_success;
  return true;
}

anscer_msgs__action__Dock_Result *
anscer_msgs__action__Dock_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_Result * msg = (anscer_msgs__action__Dock_Result *)allocator.allocate(sizeof(anscer_msgs__action__Dock_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__action__Dock_Result));
  bool success = anscer_msgs__action__Dock_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__action__Dock_Result__destroy(anscer_msgs__action__Dock_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__action__Dock_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__action__Dock_Result__Sequence__init(anscer_msgs__action__Dock_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_Result * data = NULL;

  if (size) {
    data = (anscer_msgs__action__Dock_Result *)allocator.zero_allocate(size, sizeof(anscer_msgs__action__Dock_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__action__Dock_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__action__Dock_Result__fini(&data[i - 1]);
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
anscer_msgs__action__Dock_Result__Sequence__fini(anscer_msgs__action__Dock_Result__Sequence * array)
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
      anscer_msgs__action__Dock_Result__fini(&array->data[i]);
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

anscer_msgs__action__Dock_Result__Sequence *
anscer_msgs__action__Dock_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_Result__Sequence * array = (anscer_msgs__action__Dock_Result__Sequence *)allocator.allocate(sizeof(anscer_msgs__action__Dock_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__action__Dock_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__action__Dock_Result__Sequence__destroy(anscer_msgs__action__Dock_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__action__Dock_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__action__Dock_Result__Sequence__are_equal(const anscer_msgs__action__Dock_Result__Sequence * lhs, const anscer_msgs__action__Dock_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__action__Dock_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__action__Dock_Result__Sequence__copy(
  const anscer_msgs__action__Dock_Result__Sequence * input,
  anscer_msgs__action__Dock_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__action__Dock_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__action__Dock_Result * data =
      (anscer_msgs__action__Dock_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__action__Dock_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__action__Dock_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__action__Dock_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `dock_info`
#include "anscer_msgs/msg/detail/dock_info__functions.h"

bool
anscer_msgs__action__Dock_Feedback__init(anscer_msgs__action__Dock_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // dock_info
  if (!anscer_msgs__msg__DockInfo__init(&msg->dock_info)) {
    anscer_msgs__action__Dock_Feedback__fini(msg);
    return false;
  }
  // undock_distance_remaining
  // dock_found
  // controller_status
  return true;
}

void
anscer_msgs__action__Dock_Feedback__fini(anscer_msgs__action__Dock_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // dock_info
  anscer_msgs__msg__DockInfo__fini(&msg->dock_info);
  // undock_distance_remaining
  // dock_found
  // controller_status
}

bool
anscer_msgs__action__Dock_Feedback__are_equal(const anscer_msgs__action__Dock_Feedback * lhs, const anscer_msgs__action__Dock_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dock_info
  if (!anscer_msgs__msg__DockInfo__are_equal(
      &(lhs->dock_info), &(rhs->dock_info)))
  {
    return false;
  }
  // undock_distance_remaining
  if (lhs->undock_distance_remaining != rhs->undock_distance_remaining) {
    return false;
  }
  // dock_found
  if (lhs->dock_found != rhs->dock_found) {
    return false;
  }
  // controller_status
  if (lhs->controller_status != rhs->controller_status) {
    return false;
  }
  return true;
}

bool
anscer_msgs__action__Dock_Feedback__copy(
  const anscer_msgs__action__Dock_Feedback * input,
  anscer_msgs__action__Dock_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // dock_info
  if (!anscer_msgs__msg__DockInfo__copy(
      &(input->dock_info), &(output->dock_info)))
  {
    return false;
  }
  // undock_distance_remaining
  output->undock_distance_remaining = input->undock_distance_remaining;
  // dock_found
  output->dock_found = input->dock_found;
  // controller_status
  output->controller_status = input->controller_status;
  return true;
}

anscer_msgs__action__Dock_Feedback *
anscer_msgs__action__Dock_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_Feedback * msg = (anscer_msgs__action__Dock_Feedback *)allocator.allocate(sizeof(anscer_msgs__action__Dock_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__action__Dock_Feedback));
  bool success = anscer_msgs__action__Dock_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__action__Dock_Feedback__destroy(anscer_msgs__action__Dock_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__action__Dock_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__action__Dock_Feedback__Sequence__init(anscer_msgs__action__Dock_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_Feedback * data = NULL;

  if (size) {
    data = (anscer_msgs__action__Dock_Feedback *)allocator.zero_allocate(size, sizeof(anscer_msgs__action__Dock_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__action__Dock_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__action__Dock_Feedback__fini(&data[i - 1]);
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
anscer_msgs__action__Dock_Feedback__Sequence__fini(anscer_msgs__action__Dock_Feedback__Sequence * array)
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
      anscer_msgs__action__Dock_Feedback__fini(&array->data[i]);
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

anscer_msgs__action__Dock_Feedback__Sequence *
anscer_msgs__action__Dock_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_Feedback__Sequence * array = (anscer_msgs__action__Dock_Feedback__Sequence *)allocator.allocate(sizeof(anscer_msgs__action__Dock_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__action__Dock_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__action__Dock_Feedback__Sequence__destroy(anscer_msgs__action__Dock_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__action__Dock_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__action__Dock_Feedback__Sequence__are_equal(const anscer_msgs__action__Dock_Feedback__Sequence * lhs, const anscer_msgs__action__Dock_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__action__Dock_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__action__Dock_Feedback__Sequence__copy(
  const anscer_msgs__action__Dock_Feedback__Sequence * input,
  anscer_msgs__action__Dock_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__action__Dock_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__action__Dock_Feedback * data =
      (anscer_msgs__action__Dock_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__action__Dock_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__action__Dock_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__action__Dock_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "anscer_msgs/action/detail/dock__functions.h"

bool
anscer_msgs__action__Dock_SendGoal_Request__init(anscer_msgs__action__Dock_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    anscer_msgs__action__Dock_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!anscer_msgs__action__Dock_Goal__init(&msg->goal)) {
    anscer_msgs__action__Dock_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
anscer_msgs__action__Dock_SendGoal_Request__fini(anscer_msgs__action__Dock_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  anscer_msgs__action__Dock_Goal__fini(&msg->goal);
}

bool
anscer_msgs__action__Dock_SendGoal_Request__are_equal(const anscer_msgs__action__Dock_SendGoal_Request * lhs, const anscer_msgs__action__Dock_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!anscer_msgs__action__Dock_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
anscer_msgs__action__Dock_SendGoal_Request__copy(
  const anscer_msgs__action__Dock_SendGoal_Request * input,
  anscer_msgs__action__Dock_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!anscer_msgs__action__Dock_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

anscer_msgs__action__Dock_SendGoal_Request *
anscer_msgs__action__Dock_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_SendGoal_Request * msg = (anscer_msgs__action__Dock_SendGoal_Request *)allocator.allocate(sizeof(anscer_msgs__action__Dock_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__action__Dock_SendGoal_Request));
  bool success = anscer_msgs__action__Dock_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__action__Dock_SendGoal_Request__destroy(anscer_msgs__action__Dock_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__action__Dock_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__action__Dock_SendGoal_Request__Sequence__init(anscer_msgs__action__Dock_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_SendGoal_Request * data = NULL;

  if (size) {
    data = (anscer_msgs__action__Dock_SendGoal_Request *)allocator.zero_allocate(size, sizeof(anscer_msgs__action__Dock_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__action__Dock_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__action__Dock_SendGoal_Request__fini(&data[i - 1]);
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
anscer_msgs__action__Dock_SendGoal_Request__Sequence__fini(anscer_msgs__action__Dock_SendGoal_Request__Sequence * array)
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
      anscer_msgs__action__Dock_SendGoal_Request__fini(&array->data[i]);
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

anscer_msgs__action__Dock_SendGoal_Request__Sequence *
anscer_msgs__action__Dock_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_SendGoal_Request__Sequence * array = (anscer_msgs__action__Dock_SendGoal_Request__Sequence *)allocator.allocate(sizeof(anscer_msgs__action__Dock_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__action__Dock_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__action__Dock_SendGoal_Request__Sequence__destroy(anscer_msgs__action__Dock_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__action__Dock_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__action__Dock_SendGoal_Request__Sequence__are_equal(const anscer_msgs__action__Dock_SendGoal_Request__Sequence * lhs, const anscer_msgs__action__Dock_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__action__Dock_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__action__Dock_SendGoal_Request__Sequence__copy(
  const anscer_msgs__action__Dock_SendGoal_Request__Sequence * input,
  anscer_msgs__action__Dock_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__action__Dock_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__action__Dock_SendGoal_Request * data =
      (anscer_msgs__action__Dock_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__action__Dock_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__action__Dock_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__action__Dock_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
anscer_msgs__action__Dock_SendGoal_Response__init(anscer_msgs__action__Dock_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    anscer_msgs__action__Dock_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
anscer_msgs__action__Dock_SendGoal_Response__fini(anscer_msgs__action__Dock_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
anscer_msgs__action__Dock_SendGoal_Response__are_equal(const anscer_msgs__action__Dock_SendGoal_Response * lhs, const anscer_msgs__action__Dock_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
anscer_msgs__action__Dock_SendGoal_Response__copy(
  const anscer_msgs__action__Dock_SendGoal_Response * input,
  anscer_msgs__action__Dock_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

anscer_msgs__action__Dock_SendGoal_Response *
anscer_msgs__action__Dock_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_SendGoal_Response * msg = (anscer_msgs__action__Dock_SendGoal_Response *)allocator.allocate(sizeof(anscer_msgs__action__Dock_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__action__Dock_SendGoal_Response));
  bool success = anscer_msgs__action__Dock_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__action__Dock_SendGoal_Response__destroy(anscer_msgs__action__Dock_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__action__Dock_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__action__Dock_SendGoal_Response__Sequence__init(anscer_msgs__action__Dock_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_SendGoal_Response * data = NULL;

  if (size) {
    data = (anscer_msgs__action__Dock_SendGoal_Response *)allocator.zero_allocate(size, sizeof(anscer_msgs__action__Dock_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__action__Dock_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__action__Dock_SendGoal_Response__fini(&data[i - 1]);
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
anscer_msgs__action__Dock_SendGoal_Response__Sequence__fini(anscer_msgs__action__Dock_SendGoal_Response__Sequence * array)
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
      anscer_msgs__action__Dock_SendGoal_Response__fini(&array->data[i]);
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

anscer_msgs__action__Dock_SendGoal_Response__Sequence *
anscer_msgs__action__Dock_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_SendGoal_Response__Sequence * array = (anscer_msgs__action__Dock_SendGoal_Response__Sequence *)allocator.allocate(sizeof(anscer_msgs__action__Dock_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__action__Dock_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__action__Dock_SendGoal_Response__Sequence__destroy(anscer_msgs__action__Dock_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__action__Dock_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__action__Dock_SendGoal_Response__Sequence__are_equal(const anscer_msgs__action__Dock_SendGoal_Response__Sequence * lhs, const anscer_msgs__action__Dock_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__action__Dock_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__action__Dock_SendGoal_Response__Sequence__copy(
  const anscer_msgs__action__Dock_SendGoal_Response__Sequence * input,
  anscer_msgs__action__Dock_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__action__Dock_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__action__Dock_SendGoal_Response * data =
      (anscer_msgs__action__Dock_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__action__Dock_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__action__Dock_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__action__Dock_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
anscer_msgs__action__Dock_GetResult_Request__init(anscer_msgs__action__Dock_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    anscer_msgs__action__Dock_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
anscer_msgs__action__Dock_GetResult_Request__fini(anscer_msgs__action__Dock_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
anscer_msgs__action__Dock_GetResult_Request__are_equal(const anscer_msgs__action__Dock_GetResult_Request * lhs, const anscer_msgs__action__Dock_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
anscer_msgs__action__Dock_GetResult_Request__copy(
  const anscer_msgs__action__Dock_GetResult_Request * input,
  anscer_msgs__action__Dock_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

anscer_msgs__action__Dock_GetResult_Request *
anscer_msgs__action__Dock_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_GetResult_Request * msg = (anscer_msgs__action__Dock_GetResult_Request *)allocator.allocate(sizeof(anscer_msgs__action__Dock_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__action__Dock_GetResult_Request));
  bool success = anscer_msgs__action__Dock_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__action__Dock_GetResult_Request__destroy(anscer_msgs__action__Dock_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__action__Dock_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__action__Dock_GetResult_Request__Sequence__init(anscer_msgs__action__Dock_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_GetResult_Request * data = NULL;

  if (size) {
    data = (anscer_msgs__action__Dock_GetResult_Request *)allocator.zero_allocate(size, sizeof(anscer_msgs__action__Dock_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__action__Dock_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__action__Dock_GetResult_Request__fini(&data[i - 1]);
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
anscer_msgs__action__Dock_GetResult_Request__Sequence__fini(anscer_msgs__action__Dock_GetResult_Request__Sequence * array)
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
      anscer_msgs__action__Dock_GetResult_Request__fini(&array->data[i]);
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

anscer_msgs__action__Dock_GetResult_Request__Sequence *
anscer_msgs__action__Dock_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_GetResult_Request__Sequence * array = (anscer_msgs__action__Dock_GetResult_Request__Sequence *)allocator.allocate(sizeof(anscer_msgs__action__Dock_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__action__Dock_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__action__Dock_GetResult_Request__Sequence__destroy(anscer_msgs__action__Dock_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__action__Dock_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__action__Dock_GetResult_Request__Sequence__are_equal(const anscer_msgs__action__Dock_GetResult_Request__Sequence * lhs, const anscer_msgs__action__Dock_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__action__Dock_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__action__Dock_GetResult_Request__Sequence__copy(
  const anscer_msgs__action__Dock_GetResult_Request__Sequence * input,
  anscer_msgs__action__Dock_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__action__Dock_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__action__Dock_GetResult_Request * data =
      (anscer_msgs__action__Dock_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__action__Dock_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__action__Dock_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__action__Dock_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "anscer_msgs/action/detail/dock__functions.h"

bool
anscer_msgs__action__Dock_GetResult_Response__init(anscer_msgs__action__Dock_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!anscer_msgs__action__Dock_Result__init(&msg->result)) {
    anscer_msgs__action__Dock_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
anscer_msgs__action__Dock_GetResult_Response__fini(anscer_msgs__action__Dock_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  anscer_msgs__action__Dock_Result__fini(&msg->result);
}

bool
anscer_msgs__action__Dock_GetResult_Response__are_equal(const anscer_msgs__action__Dock_GetResult_Response * lhs, const anscer_msgs__action__Dock_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!anscer_msgs__action__Dock_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
anscer_msgs__action__Dock_GetResult_Response__copy(
  const anscer_msgs__action__Dock_GetResult_Response * input,
  anscer_msgs__action__Dock_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!anscer_msgs__action__Dock_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

anscer_msgs__action__Dock_GetResult_Response *
anscer_msgs__action__Dock_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_GetResult_Response * msg = (anscer_msgs__action__Dock_GetResult_Response *)allocator.allocate(sizeof(anscer_msgs__action__Dock_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__action__Dock_GetResult_Response));
  bool success = anscer_msgs__action__Dock_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__action__Dock_GetResult_Response__destroy(anscer_msgs__action__Dock_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__action__Dock_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__action__Dock_GetResult_Response__Sequence__init(anscer_msgs__action__Dock_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_GetResult_Response * data = NULL;

  if (size) {
    data = (anscer_msgs__action__Dock_GetResult_Response *)allocator.zero_allocate(size, sizeof(anscer_msgs__action__Dock_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__action__Dock_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__action__Dock_GetResult_Response__fini(&data[i - 1]);
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
anscer_msgs__action__Dock_GetResult_Response__Sequence__fini(anscer_msgs__action__Dock_GetResult_Response__Sequence * array)
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
      anscer_msgs__action__Dock_GetResult_Response__fini(&array->data[i]);
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

anscer_msgs__action__Dock_GetResult_Response__Sequence *
anscer_msgs__action__Dock_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_GetResult_Response__Sequence * array = (anscer_msgs__action__Dock_GetResult_Response__Sequence *)allocator.allocate(sizeof(anscer_msgs__action__Dock_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__action__Dock_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__action__Dock_GetResult_Response__Sequence__destroy(anscer_msgs__action__Dock_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__action__Dock_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__action__Dock_GetResult_Response__Sequence__are_equal(const anscer_msgs__action__Dock_GetResult_Response__Sequence * lhs, const anscer_msgs__action__Dock_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__action__Dock_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__action__Dock_GetResult_Response__Sequence__copy(
  const anscer_msgs__action__Dock_GetResult_Response__Sequence * input,
  anscer_msgs__action__Dock_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__action__Dock_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__action__Dock_GetResult_Response * data =
      (anscer_msgs__action__Dock_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__action__Dock_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__action__Dock_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__action__Dock_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "anscer_msgs/action/detail/dock__functions.h"

bool
anscer_msgs__action__Dock_FeedbackMessage__init(anscer_msgs__action__Dock_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    anscer_msgs__action__Dock_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!anscer_msgs__action__Dock_Feedback__init(&msg->feedback)) {
    anscer_msgs__action__Dock_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
anscer_msgs__action__Dock_FeedbackMessage__fini(anscer_msgs__action__Dock_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  anscer_msgs__action__Dock_Feedback__fini(&msg->feedback);
}

bool
anscer_msgs__action__Dock_FeedbackMessage__are_equal(const anscer_msgs__action__Dock_FeedbackMessage * lhs, const anscer_msgs__action__Dock_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!anscer_msgs__action__Dock_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
anscer_msgs__action__Dock_FeedbackMessage__copy(
  const anscer_msgs__action__Dock_FeedbackMessage * input,
  anscer_msgs__action__Dock_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!anscer_msgs__action__Dock_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

anscer_msgs__action__Dock_FeedbackMessage *
anscer_msgs__action__Dock_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_FeedbackMessage * msg = (anscer_msgs__action__Dock_FeedbackMessage *)allocator.allocate(sizeof(anscer_msgs__action__Dock_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__action__Dock_FeedbackMessage));
  bool success = anscer_msgs__action__Dock_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__action__Dock_FeedbackMessage__destroy(anscer_msgs__action__Dock_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__action__Dock_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__action__Dock_FeedbackMessage__Sequence__init(anscer_msgs__action__Dock_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_FeedbackMessage * data = NULL;

  if (size) {
    data = (anscer_msgs__action__Dock_FeedbackMessage *)allocator.zero_allocate(size, sizeof(anscer_msgs__action__Dock_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__action__Dock_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__action__Dock_FeedbackMessage__fini(&data[i - 1]);
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
anscer_msgs__action__Dock_FeedbackMessage__Sequence__fini(anscer_msgs__action__Dock_FeedbackMessage__Sequence * array)
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
      anscer_msgs__action__Dock_FeedbackMessage__fini(&array->data[i]);
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

anscer_msgs__action__Dock_FeedbackMessage__Sequence *
anscer_msgs__action__Dock_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__action__Dock_FeedbackMessage__Sequence * array = (anscer_msgs__action__Dock_FeedbackMessage__Sequence *)allocator.allocate(sizeof(anscer_msgs__action__Dock_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__action__Dock_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__action__Dock_FeedbackMessage__Sequence__destroy(anscer_msgs__action__Dock_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__action__Dock_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__action__Dock_FeedbackMessage__Sequence__are_equal(const anscer_msgs__action__Dock_FeedbackMessage__Sequence * lhs, const anscer_msgs__action__Dock_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__action__Dock_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__action__Dock_FeedbackMessage__Sequence__copy(
  const anscer_msgs__action__Dock_FeedbackMessage__Sequence * input,
  anscer_msgs__action__Dock_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__action__Dock_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__action__Dock_FeedbackMessage * data =
      (anscer_msgs__action__Dock_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__action__Dock_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__action__Dock_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__action__Dock_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
