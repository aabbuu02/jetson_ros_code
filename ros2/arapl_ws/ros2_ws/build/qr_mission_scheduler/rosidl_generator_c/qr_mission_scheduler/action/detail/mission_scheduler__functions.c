// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from qr_mission_scheduler:action/MissionScheduler.idl
// generated code does not contain a copyright notice
#include "qr_mission_scheduler/action/detail/mission_scheduler__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `goal_type`
#include "qr_mission_scheduler/msg/detail/goal_msg__functions.h"

bool
qr_mission_scheduler__action__MissionScheduler_Goal__init(qr_mission_scheduler__action__MissionScheduler_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_type
  if (!qr_mission_scheduler__msg__GoalMsg__init(&msg->goal_type)) {
    qr_mission_scheduler__action__MissionScheduler_Goal__fini(msg);
    return false;
  }
  return true;
}

void
qr_mission_scheduler__action__MissionScheduler_Goal__fini(qr_mission_scheduler__action__MissionScheduler_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_type
  qr_mission_scheduler__msg__GoalMsg__fini(&msg->goal_type);
}

bool
qr_mission_scheduler__action__MissionScheduler_Goal__are_equal(const qr_mission_scheduler__action__MissionScheduler_Goal * lhs, const qr_mission_scheduler__action__MissionScheduler_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_type
  if (!qr_mission_scheduler__msg__GoalMsg__are_equal(
      &(lhs->goal_type), &(rhs->goal_type)))
  {
    return false;
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_Goal__copy(
  const qr_mission_scheduler__action__MissionScheduler_Goal * input,
  qr_mission_scheduler__action__MissionScheduler_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_type
  if (!qr_mission_scheduler__msg__GoalMsg__copy(
      &(input->goal_type), &(output->goal_type)))
  {
    return false;
  }
  return true;
}

qr_mission_scheduler__action__MissionScheduler_Goal *
qr_mission_scheduler__action__MissionScheduler_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_Goal * msg = (qr_mission_scheduler__action__MissionScheduler_Goal *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(qr_mission_scheduler__action__MissionScheduler_Goal));
  bool success = qr_mission_scheduler__action__MissionScheduler_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
qr_mission_scheduler__action__MissionScheduler_Goal__destroy(qr_mission_scheduler__action__MissionScheduler_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    qr_mission_scheduler__action__MissionScheduler_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
qr_mission_scheduler__action__MissionScheduler_Goal__Sequence__init(qr_mission_scheduler__action__MissionScheduler_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_Goal * data = NULL;

  if (size) {
    data = (qr_mission_scheduler__action__MissionScheduler_Goal *)allocator.zero_allocate(size, sizeof(qr_mission_scheduler__action__MissionScheduler_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = qr_mission_scheduler__action__MissionScheduler_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        qr_mission_scheduler__action__MissionScheduler_Goal__fini(&data[i - 1]);
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
qr_mission_scheduler__action__MissionScheduler_Goal__Sequence__fini(qr_mission_scheduler__action__MissionScheduler_Goal__Sequence * array)
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
      qr_mission_scheduler__action__MissionScheduler_Goal__fini(&array->data[i]);
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

qr_mission_scheduler__action__MissionScheduler_Goal__Sequence *
qr_mission_scheduler__action__MissionScheduler_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_Goal__Sequence * array = (qr_mission_scheduler__action__MissionScheduler_Goal__Sequence *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = qr_mission_scheduler__action__MissionScheduler_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
qr_mission_scheduler__action__MissionScheduler_Goal__Sequence__destroy(qr_mission_scheduler__action__MissionScheduler_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    qr_mission_scheduler__action__MissionScheduler_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
qr_mission_scheduler__action__MissionScheduler_Goal__Sequence__are_equal(const qr_mission_scheduler__action__MissionScheduler_Goal__Sequence * lhs, const qr_mission_scheduler__action__MissionScheduler_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_Goal__Sequence__copy(
  const qr_mission_scheduler__action__MissionScheduler_Goal__Sequence * input,
  qr_mission_scheduler__action__MissionScheduler_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(qr_mission_scheduler__action__MissionScheduler_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    qr_mission_scheduler__action__MissionScheduler_Goal * data =
      (qr_mission_scheduler__action__MissionScheduler_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!qr_mission_scheduler__action__MissionScheduler_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          qr_mission_scheduler__action__MissionScheduler_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `success`
#include "rosidl_runtime_c/string_functions.h"

bool
qr_mission_scheduler__action__MissionScheduler_Result__init(qr_mission_scheduler__action__MissionScheduler_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  if (!rosidl_runtime_c__String__init(&msg->success)) {
    qr_mission_scheduler__action__MissionScheduler_Result__fini(msg);
    return false;
  }
  return true;
}

void
qr_mission_scheduler__action__MissionScheduler_Result__fini(qr_mission_scheduler__action__MissionScheduler_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  rosidl_runtime_c__String__fini(&msg->success);
}

bool
qr_mission_scheduler__action__MissionScheduler_Result__are_equal(const qr_mission_scheduler__action__MissionScheduler_Result * lhs, const qr_mission_scheduler__action__MissionScheduler_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->success), &(rhs->success)))
  {
    return false;
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_Result__copy(
  const qr_mission_scheduler__action__MissionScheduler_Result * input,
  qr_mission_scheduler__action__MissionScheduler_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  if (!rosidl_runtime_c__String__copy(
      &(input->success), &(output->success)))
  {
    return false;
  }
  return true;
}

qr_mission_scheduler__action__MissionScheduler_Result *
qr_mission_scheduler__action__MissionScheduler_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_Result * msg = (qr_mission_scheduler__action__MissionScheduler_Result *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(qr_mission_scheduler__action__MissionScheduler_Result));
  bool success = qr_mission_scheduler__action__MissionScheduler_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
qr_mission_scheduler__action__MissionScheduler_Result__destroy(qr_mission_scheduler__action__MissionScheduler_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    qr_mission_scheduler__action__MissionScheduler_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
qr_mission_scheduler__action__MissionScheduler_Result__Sequence__init(qr_mission_scheduler__action__MissionScheduler_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_Result * data = NULL;

  if (size) {
    data = (qr_mission_scheduler__action__MissionScheduler_Result *)allocator.zero_allocate(size, sizeof(qr_mission_scheduler__action__MissionScheduler_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = qr_mission_scheduler__action__MissionScheduler_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        qr_mission_scheduler__action__MissionScheduler_Result__fini(&data[i - 1]);
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
qr_mission_scheduler__action__MissionScheduler_Result__Sequence__fini(qr_mission_scheduler__action__MissionScheduler_Result__Sequence * array)
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
      qr_mission_scheduler__action__MissionScheduler_Result__fini(&array->data[i]);
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

qr_mission_scheduler__action__MissionScheduler_Result__Sequence *
qr_mission_scheduler__action__MissionScheduler_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_Result__Sequence * array = (qr_mission_scheduler__action__MissionScheduler_Result__Sequence *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = qr_mission_scheduler__action__MissionScheduler_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
qr_mission_scheduler__action__MissionScheduler_Result__Sequence__destroy(qr_mission_scheduler__action__MissionScheduler_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    qr_mission_scheduler__action__MissionScheduler_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
qr_mission_scheduler__action__MissionScheduler_Result__Sequence__are_equal(const qr_mission_scheduler__action__MissionScheduler_Result__Sequence * lhs, const qr_mission_scheduler__action__MissionScheduler_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_Result__Sequence__copy(
  const qr_mission_scheduler__action__MissionScheduler_Result__Sequence * input,
  qr_mission_scheduler__action__MissionScheduler_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(qr_mission_scheduler__action__MissionScheduler_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    qr_mission_scheduler__action__MissionScheduler_Result * data =
      (qr_mission_scheduler__action__MissionScheduler_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!qr_mission_scheduler__action__MissionScheduler_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          qr_mission_scheduler__action__MissionScheduler_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pose`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
qr_mission_scheduler__action__MissionScheduler_Feedback__init(qr_mission_scheduler__action__MissionScheduler_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!rosidl_runtime_c__double__Sequence__init(&msg->pose, 0)) {
    qr_mission_scheduler__action__MissionScheduler_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
qr_mission_scheduler__action__MissionScheduler_Feedback__fini(qr_mission_scheduler__action__MissionScheduler_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // pose
  rosidl_runtime_c__double__Sequence__fini(&msg->pose);
}

bool
qr_mission_scheduler__action__MissionScheduler_Feedback__are_equal(const qr_mission_scheduler__action__MissionScheduler_Feedback * lhs, const qr_mission_scheduler__action__MissionScheduler_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_Feedback__copy(
  const qr_mission_scheduler__action__MissionScheduler_Feedback * input,
  qr_mission_scheduler__action__MissionScheduler_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

qr_mission_scheduler__action__MissionScheduler_Feedback *
qr_mission_scheduler__action__MissionScheduler_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_Feedback * msg = (qr_mission_scheduler__action__MissionScheduler_Feedback *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(qr_mission_scheduler__action__MissionScheduler_Feedback));
  bool success = qr_mission_scheduler__action__MissionScheduler_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
qr_mission_scheduler__action__MissionScheduler_Feedback__destroy(qr_mission_scheduler__action__MissionScheduler_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    qr_mission_scheduler__action__MissionScheduler_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence__init(qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_Feedback * data = NULL;

  if (size) {
    data = (qr_mission_scheduler__action__MissionScheduler_Feedback *)allocator.zero_allocate(size, sizeof(qr_mission_scheduler__action__MissionScheduler_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = qr_mission_scheduler__action__MissionScheduler_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        qr_mission_scheduler__action__MissionScheduler_Feedback__fini(&data[i - 1]);
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
qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence__fini(qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence * array)
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
      qr_mission_scheduler__action__MissionScheduler_Feedback__fini(&array->data[i]);
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

qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence *
qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence * array = (qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence__destroy(qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence__are_equal(const qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence * lhs, const qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence__copy(
  const qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence * input,
  qr_mission_scheduler__action__MissionScheduler_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(qr_mission_scheduler__action__MissionScheduler_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    qr_mission_scheduler__action__MissionScheduler_Feedback * data =
      (qr_mission_scheduler__action__MissionScheduler_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!qr_mission_scheduler__action__MissionScheduler_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          qr_mission_scheduler__action__MissionScheduler_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_Feedback__copy(
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
// #include "qr_mission_scheduler/action/detail/mission_scheduler__functions.h"

bool
qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__init(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!qr_mission_scheduler__action__MissionScheduler_Goal__init(&msg->goal)) {
    qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__fini(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  qr_mission_scheduler__action__MissionScheduler_Goal__fini(&msg->goal);
}

bool
qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__are_equal(const qr_mission_scheduler__action__MissionScheduler_SendGoal_Request * lhs, const qr_mission_scheduler__action__MissionScheduler_SendGoal_Request * rhs)
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
  if (!qr_mission_scheduler__action__MissionScheduler_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__copy(
  const qr_mission_scheduler__action__MissionScheduler_SendGoal_Request * input,
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Request * output)
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
  if (!qr_mission_scheduler__action__MissionScheduler_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

qr_mission_scheduler__action__MissionScheduler_SendGoal_Request *
qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Request * msg = (qr_mission_scheduler__action__MissionScheduler_SendGoal_Request *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request));
  bool success = qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__destroy(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence__init(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Request * data = NULL;

  if (size) {
    data = (qr_mission_scheduler__action__MissionScheduler_SendGoal_Request *)allocator.zero_allocate(size, sizeof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__fini(&data[i - 1]);
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
qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence__fini(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence * array)
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
      qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__fini(&array->data[i]);
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

qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence *
qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence * array = (qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence__destroy(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence__are_equal(const qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence * lhs, const qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence__copy(
  const qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence * input,
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    qr_mission_scheduler__action__MissionScheduler_SendGoal_Request * data =
      (qr_mission_scheduler__action__MissionScheduler_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__copy(
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
qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__init(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__fini(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__are_equal(const qr_mission_scheduler__action__MissionScheduler_SendGoal_Response * lhs, const qr_mission_scheduler__action__MissionScheduler_SendGoal_Response * rhs)
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
qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__copy(
  const qr_mission_scheduler__action__MissionScheduler_SendGoal_Response * input,
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Response * output)
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

qr_mission_scheduler__action__MissionScheduler_SendGoal_Response *
qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Response * msg = (qr_mission_scheduler__action__MissionScheduler_SendGoal_Response *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response));
  bool success = qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__destroy(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence__init(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Response * data = NULL;

  if (size) {
    data = (qr_mission_scheduler__action__MissionScheduler_SendGoal_Response *)allocator.zero_allocate(size, sizeof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__fini(&data[i - 1]);
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
qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence__fini(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence * array)
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
      qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__fini(&array->data[i]);
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

qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence *
qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence * array = (qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence__destroy(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence__are_equal(const qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence * lhs, const qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence__copy(
  const qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence * input,
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    qr_mission_scheduler__action__MissionScheduler_SendGoal_Response * data =
      (qr_mission_scheduler__action__MissionScheduler_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__copy(
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
qr_mission_scheduler__action__MissionScheduler_GetResult_Request__init(qr_mission_scheduler__action__MissionScheduler_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    qr_mission_scheduler__action__MissionScheduler_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
qr_mission_scheduler__action__MissionScheduler_GetResult_Request__fini(qr_mission_scheduler__action__MissionScheduler_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
qr_mission_scheduler__action__MissionScheduler_GetResult_Request__are_equal(const qr_mission_scheduler__action__MissionScheduler_GetResult_Request * lhs, const qr_mission_scheduler__action__MissionScheduler_GetResult_Request * rhs)
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
qr_mission_scheduler__action__MissionScheduler_GetResult_Request__copy(
  const qr_mission_scheduler__action__MissionScheduler_GetResult_Request * input,
  qr_mission_scheduler__action__MissionScheduler_GetResult_Request * output)
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

qr_mission_scheduler__action__MissionScheduler_GetResult_Request *
qr_mission_scheduler__action__MissionScheduler_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_GetResult_Request * msg = (qr_mission_scheduler__action__MissionScheduler_GetResult_Request *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(qr_mission_scheduler__action__MissionScheduler_GetResult_Request));
  bool success = qr_mission_scheduler__action__MissionScheduler_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
qr_mission_scheduler__action__MissionScheduler_GetResult_Request__destroy(qr_mission_scheduler__action__MissionScheduler_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    qr_mission_scheduler__action__MissionScheduler_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence__init(qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_GetResult_Request * data = NULL;

  if (size) {
    data = (qr_mission_scheduler__action__MissionScheduler_GetResult_Request *)allocator.zero_allocate(size, sizeof(qr_mission_scheduler__action__MissionScheduler_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = qr_mission_scheduler__action__MissionScheduler_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        qr_mission_scheduler__action__MissionScheduler_GetResult_Request__fini(&data[i - 1]);
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
qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence__fini(qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence * array)
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
      qr_mission_scheduler__action__MissionScheduler_GetResult_Request__fini(&array->data[i]);
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

qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence *
qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence * array = (qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence__destroy(qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence__are_equal(const qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence * lhs, const qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence__copy(
  const qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence * input,
  qr_mission_scheduler__action__MissionScheduler_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(qr_mission_scheduler__action__MissionScheduler_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    qr_mission_scheduler__action__MissionScheduler_GetResult_Request * data =
      (qr_mission_scheduler__action__MissionScheduler_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!qr_mission_scheduler__action__MissionScheduler_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          qr_mission_scheduler__action__MissionScheduler_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_GetResult_Request__copy(
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
// #include "qr_mission_scheduler/action/detail/mission_scheduler__functions.h"

bool
qr_mission_scheduler__action__MissionScheduler_GetResult_Response__init(qr_mission_scheduler__action__MissionScheduler_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!qr_mission_scheduler__action__MissionScheduler_Result__init(&msg->result)) {
    qr_mission_scheduler__action__MissionScheduler_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
qr_mission_scheduler__action__MissionScheduler_GetResult_Response__fini(qr_mission_scheduler__action__MissionScheduler_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  qr_mission_scheduler__action__MissionScheduler_Result__fini(&msg->result);
}

bool
qr_mission_scheduler__action__MissionScheduler_GetResult_Response__are_equal(const qr_mission_scheduler__action__MissionScheduler_GetResult_Response * lhs, const qr_mission_scheduler__action__MissionScheduler_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!qr_mission_scheduler__action__MissionScheduler_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_GetResult_Response__copy(
  const qr_mission_scheduler__action__MissionScheduler_GetResult_Response * input,
  qr_mission_scheduler__action__MissionScheduler_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!qr_mission_scheduler__action__MissionScheduler_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

qr_mission_scheduler__action__MissionScheduler_GetResult_Response *
qr_mission_scheduler__action__MissionScheduler_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_GetResult_Response * msg = (qr_mission_scheduler__action__MissionScheduler_GetResult_Response *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(qr_mission_scheduler__action__MissionScheduler_GetResult_Response));
  bool success = qr_mission_scheduler__action__MissionScheduler_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
qr_mission_scheduler__action__MissionScheduler_GetResult_Response__destroy(qr_mission_scheduler__action__MissionScheduler_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    qr_mission_scheduler__action__MissionScheduler_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence__init(qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_GetResult_Response * data = NULL;

  if (size) {
    data = (qr_mission_scheduler__action__MissionScheduler_GetResult_Response *)allocator.zero_allocate(size, sizeof(qr_mission_scheduler__action__MissionScheduler_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = qr_mission_scheduler__action__MissionScheduler_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        qr_mission_scheduler__action__MissionScheduler_GetResult_Response__fini(&data[i - 1]);
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
qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence__fini(qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence * array)
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
      qr_mission_scheduler__action__MissionScheduler_GetResult_Response__fini(&array->data[i]);
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

qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence *
qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence * array = (qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence__destroy(qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence__are_equal(const qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence * lhs, const qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence__copy(
  const qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence * input,
  qr_mission_scheduler__action__MissionScheduler_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(qr_mission_scheduler__action__MissionScheduler_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    qr_mission_scheduler__action__MissionScheduler_GetResult_Response * data =
      (qr_mission_scheduler__action__MissionScheduler_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!qr_mission_scheduler__action__MissionScheduler_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          qr_mission_scheduler__action__MissionScheduler_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_GetResult_Response__copy(
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
// #include "qr_mission_scheduler/action/detail/mission_scheduler__functions.h"

bool
qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__init(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!qr_mission_scheduler__action__MissionScheduler_Feedback__init(&msg->feedback)) {
    qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__fini(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  qr_mission_scheduler__action__MissionScheduler_Feedback__fini(&msg->feedback);
}

bool
qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__are_equal(const qr_mission_scheduler__action__MissionScheduler_FeedbackMessage * lhs, const qr_mission_scheduler__action__MissionScheduler_FeedbackMessage * rhs)
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
  if (!qr_mission_scheduler__action__MissionScheduler_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__copy(
  const qr_mission_scheduler__action__MissionScheduler_FeedbackMessage * input,
  qr_mission_scheduler__action__MissionScheduler_FeedbackMessage * output)
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
  if (!qr_mission_scheduler__action__MissionScheduler_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

qr_mission_scheduler__action__MissionScheduler_FeedbackMessage *
qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_FeedbackMessage * msg = (qr_mission_scheduler__action__MissionScheduler_FeedbackMessage *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage));
  bool success = qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__destroy(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence__init(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_FeedbackMessage * data = NULL;

  if (size) {
    data = (qr_mission_scheduler__action__MissionScheduler_FeedbackMessage *)allocator.zero_allocate(size, sizeof(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__fini(&data[i - 1]);
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
qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence__fini(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence * array)
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
      qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__fini(&array->data[i]);
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

qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence *
qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence * array = (qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence *)allocator.allocate(sizeof(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence__destroy(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence__are_equal(const qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence * lhs, const qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence__copy(
  const qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence * input,
  qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    qr_mission_scheduler__action__MissionScheduler_FeedbackMessage * data =
      (qr_mission_scheduler__action__MissionScheduler_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
