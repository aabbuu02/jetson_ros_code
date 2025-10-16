// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anscer_msgs:srv/EditWaypoint.idl
// generated code does not contain a copyright notice
#include "anscer_msgs/srv/detail/edit_waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `waypoint_id`
// Member `new_id`
// Member `waypoint_type`
// Member `waypoint_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoint_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
anscer_msgs__srv__EditWaypoint_Request__init(anscer_msgs__srv__EditWaypoint_Request * msg)
{
  if (!msg) {
    return false;
  }
  // rename
  // replace_id
  // replace_to_current_pose
  // replace_to_pose
  // waypoint_order
  // waypoint_id
  if (!rosidl_runtime_c__String__init(&msg->waypoint_id)) {
    anscer_msgs__srv__EditWaypoint_Request__fini(msg);
    return false;
  }
  // new_id
  if (!rosidl_runtime_c__String__init(&msg->new_id)) {
    anscer_msgs__srv__EditWaypoint_Request__fini(msg);
    return false;
  }
  // waypoint_type
  if (!rosidl_runtime_c__String__init(&msg->waypoint_type)) {
    anscer_msgs__srv__EditWaypoint_Request__fini(msg);
    return false;
  }
  // waypoint_name
  if (!rosidl_runtime_c__String__init(&msg->waypoint_name)) {
    anscer_msgs__srv__EditWaypoint_Request__fini(msg);
    return false;
  }
  // waypoint_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->waypoint_pose)) {
    anscer_msgs__srv__EditWaypoint_Request__fini(msg);
    return false;
  }
  return true;
}

void
anscer_msgs__srv__EditWaypoint_Request__fini(anscer_msgs__srv__EditWaypoint_Request * msg)
{
  if (!msg) {
    return;
  }
  // rename
  // replace_id
  // replace_to_current_pose
  // replace_to_pose
  // waypoint_order
  // waypoint_id
  rosidl_runtime_c__String__fini(&msg->waypoint_id);
  // new_id
  rosidl_runtime_c__String__fini(&msg->new_id);
  // waypoint_type
  rosidl_runtime_c__String__fini(&msg->waypoint_type);
  // waypoint_name
  rosidl_runtime_c__String__fini(&msg->waypoint_name);
  // waypoint_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->waypoint_pose);
}

bool
anscer_msgs__srv__EditWaypoint_Request__are_equal(const anscer_msgs__srv__EditWaypoint_Request * lhs, const anscer_msgs__srv__EditWaypoint_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rename
  if (lhs->rename != rhs->rename) {
    return false;
  }
  // replace_id
  if (lhs->replace_id != rhs->replace_id) {
    return false;
  }
  // replace_to_current_pose
  if (lhs->replace_to_current_pose != rhs->replace_to_current_pose) {
    return false;
  }
  // replace_to_pose
  if (lhs->replace_to_pose != rhs->replace_to_pose) {
    return false;
  }
  // waypoint_order
  if (lhs->waypoint_order != rhs->waypoint_order) {
    return false;
  }
  // waypoint_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->waypoint_id), &(rhs->waypoint_id)))
  {
    return false;
  }
  // new_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->new_id), &(rhs->new_id)))
  {
    return false;
  }
  // waypoint_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->waypoint_type), &(rhs->waypoint_type)))
  {
    return false;
  }
  // waypoint_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->waypoint_name), &(rhs->waypoint_name)))
  {
    return false;
  }
  // waypoint_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->waypoint_pose), &(rhs->waypoint_pose)))
  {
    return false;
  }
  return true;
}

bool
anscer_msgs__srv__EditWaypoint_Request__copy(
  const anscer_msgs__srv__EditWaypoint_Request * input,
  anscer_msgs__srv__EditWaypoint_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // rename
  output->rename = input->rename;
  // replace_id
  output->replace_id = input->replace_id;
  // replace_to_current_pose
  output->replace_to_current_pose = input->replace_to_current_pose;
  // replace_to_pose
  output->replace_to_pose = input->replace_to_pose;
  // waypoint_order
  output->waypoint_order = input->waypoint_order;
  // waypoint_id
  if (!rosidl_runtime_c__String__copy(
      &(input->waypoint_id), &(output->waypoint_id)))
  {
    return false;
  }
  // new_id
  if (!rosidl_runtime_c__String__copy(
      &(input->new_id), &(output->new_id)))
  {
    return false;
  }
  // waypoint_type
  if (!rosidl_runtime_c__String__copy(
      &(input->waypoint_type), &(output->waypoint_type)))
  {
    return false;
  }
  // waypoint_name
  if (!rosidl_runtime_c__String__copy(
      &(input->waypoint_name), &(output->waypoint_name)))
  {
    return false;
  }
  // waypoint_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->waypoint_pose), &(output->waypoint_pose)))
  {
    return false;
  }
  return true;
}

anscer_msgs__srv__EditWaypoint_Request *
anscer_msgs__srv__EditWaypoint_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__EditWaypoint_Request * msg = (anscer_msgs__srv__EditWaypoint_Request *)allocator.allocate(sizeof(anscer_msgs__srv__EditWaypoint_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__srv__EditWaypoint_Request));
  bool success = anscer_msgs__srv__EditWaypoint_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__srv__EditWaypoint_Request__destroy(anscer_msgs__srv__EditWaypoint_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__srv__EditWaypoint_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__srv__EditWaypoint_Request__Sequence__init(anscer_msgs__srv__EditWaypoint_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__EditWaypoint_Request * data = NULL;

  if (size) {
    data = (anscer_msgs__srv__EditWaypoint_Request *)allocator.zero_allocate(size, sizeof(anscer_msgs__srv__EditWaypoint_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__srv__EditWaypoint_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__srv__EditWaypoint_Request__fini(&data[i - 1]);
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
anscer_msgs__srv__EditWaypoint_Request__Sequence__fini(anscer_msgs__srv__EditWaypoint_Request__Sequence * array)
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
      anscer_msgs__srv__EditWaypoint_Request__fini(&array->data[i]);
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

anscer_msgs__srv__EditWaypoint_Request__Sequence *
anscer_msgs__srv__EditWaypoint_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__EditWaypoint_Request__Sequence * array = (anscer_msgs__srv__EditWaypoint_Request__Sequence *)allocator.allocate(sizeof(anscer_msgs__srv__EditWaypoint_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__srv__EditWaypoint_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__srv__EditWaypoint_Request__Sequence__destroy(anscer_msgs__srv__EditWaypoint_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__srv__EditWaypoint_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__srv__EditWaypoint_Request__Sequence__are_equal(const anscer_msgs__srv__EditWaypoint_Request__Sequence * lhs, const anscer_msgs__srv__EditWaypoint_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__srv__EditWaypoint_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__srv__EditWaypoint_Request__Sequence__copy(
  const anscer_msgs__srv__EditWaypoint_Request__Sequence * input,
  anscer_msgs__srv__EditWaypoint_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__srv__EditWaypoint_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__srv__EditWaypoint_Request * data =
      (anscer_msgs__srv__EditWaypoint_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__srv__EditWaypoint_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__srv__EditWaypoint_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__srv__EditWaypoint_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
anscer_msgs__srv__EditWaypoint_Response__init(anscer_msgs__srv__EditWaypoint_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    anscer_msgs__srv__EditWaypoint_Response__fini(msg);
    return false;
  }
  // edited
  return true;
}

void
anscer_msgs__srv__EditWaypoint_Response__fini(anscer_msgs__srv__EditWaypoint_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // edited
}

bool
anscer_msgs__srv__EditWaypoint_Response__are_equal(const anscer_msgs__srv__EditWaypoint_Response * lhs, const anscer_msgs__srv__EditWaypoint_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // edited
  if (lhs->edited != rhs->edited) {
    return false;
  }
  return true;
}

bool
anscer_msgs__srv__EditWaypoint_Response__copy(
  const anscer_msgs__srv__EditWaypoint_Response * input,
  anscer_msgs__srv__EditWaypoint_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // edited
  output->edited = input->edited;
  return true;
}

anscer_msgs__srv__EditWaypoint_Response *
anscer_msgs__srv__EditWaypoint_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__EditWaypoint_Response * msg = (anscer_msgs__srv__EditWaypoint_Response *)allocator.allocate(sizeof(anscer_msgs__srv__EditWaypoint_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anscer_msgs__srv__EditWaypoint_Response));
  bool success = anscer_msgs__srv__EditWaypoint_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
anscer_msgs__srv__EditWaypoint_Response__destroy(anscer_msgs__srv__EditWaypoint_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    anscer_msgs__srv__EditWaypoint_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
anscer_msgs__srv__EditWaypoint_Response__Sequence__init(anscer_msgs__srv__EditWaypoint_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__EditWaypoint_Response * data = NULL;

  if (size) {
    data = (anscer_msgs__srv__EditWaypoint_Response *)allocator.zero_allocate(size, sizeof(anscer_msgs__srv__EditWaypoint_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anscer_msgs__srv__EditWaypoint_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anscer_msgs__srv__EditWaypoint_Response__fini(&data[i - 1]);
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
anscer_msgs__srv__EditWaypoint_Response__Sequence__fini(anscer_msgs__srv__EditWaypoint_Response__Sequence * array)
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
      anscer_msgs__srv__EditWaypoint_Response__fini(&array->data[i]);
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

anscer_msgs__srv__EditWaypoint_Response__Sequence *
anscer_msgs__srv__EditWaypoint_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  anscer_msgs__srv__EditWaypoint_Response__Sequence * array = (anscer_msgs__srv__EditWaypoint_Response__Sequence *)allocator.allocate(sizeof(anscer_msgs__srv__EditWaypoint_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = anscer_msgs__srv__EditWaypoint_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
anscer_msgs__srv__EditWaypoint_Response__Sequence__destroy(anscer_msgs__srv__EditWaypoint_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    anscer_msgs__srv__EditWaypoint_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
anscer_msgs__srv__EditWaypoint_Response__Sequence__are_equal(const anscer_msgs__srv__EditWaypoint_Response__Sequence * lhs, const anscer_msgs__srv__EditWaypoint_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!anscer_msgs__srv__EditWaypoint_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
anscer_msgs__srv__EditWaypoint_Response__Sequence__copy(
  const anscer_msgs__srv__EditWaypoint_Response__Sequence * input,
  anscer_msgs__srv__EditWaypoint_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(anscer_msgs__srv__EditWaypoint_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    anscer_msgs__srv__EditWaypoint_Response * data =
      (anscer_msgs__srv__EditWaypoint_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!anscer_msgs__srv__EditWaypoint_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          anscer_msgs__srv__EditWaypoint_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!anscer_msgs__srv__EditWaypoint_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
