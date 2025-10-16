// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from qr_mission_scheduler:action/MissionScheduler.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "qr_mission_scheduler/action/detail/mission_scheduler__rosidl_typesupport_introspection_c.h"
#include "qr_mission_scheduler/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "qr_mission_scheduler/action/detail/mission_scheduler__functions.h"
#include "qr_mission_scheduler/action/detail/mission_scheduler__struct.h"


// Include directives for member types
// Member `goal_type`
#include "qr_mission_scheduler/msg/goal_msg.h"
// Member `goal_type`
#include "qr_mission_scheduler/msg/detail/goal_msg__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qr_mission_scheduler__action__MissionScheduler_Goal__rosidl_typesupport_introspection_c__MissionScheduler_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qr_mission_scheduler__action__MissionScheduler_Goal__init(message_memory);
}

void qr_mission_scheduler__action__MissionScheduler_Goal__rosidl_typesupport_introspection_c__MissionScheduler_Goal_fini_function(void * message_memory)
{
  qr_mission_scheduler__action__MissionScheduler_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember qr_mission_scheduler__action__MissionScheduler_Goal__rosidl_typesupport_introspection_c__MissionScheduler_Goal_message_member_array[1] = {
  {
    "goal_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__action__MissionScheduler_Goal, goal_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qr_mission_scheduler__action__MissionScheduler_Goal__rosidl_typesupport_introspection_c__MissionScheduler_Goal_message_members = {
  "qr_mission_scheduler__action",  // message namespace
  "MissionScheduler_Goal",  // message name
  1,  // number of fields
  sizeof(qr_mission_scheduler__action__MissionScheduler_Goal),
  qr_mission_scheduler__action__MissionScheduler_Goal__rosidl_typesupport_introspection_c__MissionScheduler_Goal_message_member_array,  // message members
  qr_mission_scheduler__action__MissionScheduler_Goal__rosidl_typesupport_introspection_c__MissionScheduler_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  qr_mission_scheduler__action__MissionScheduler_Goal__rosidl_typesupport_introspection_c__MissionScheduler_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qr_mission_scheduler__action__MissionScheduler_Goal__rosidl_typesupport_introspection_c__MissionScheduler_Goal_message_type_support_handle = {
  0,
  &qr_mission_scheduler__action__MissionScheduler_Goal__rosidl_typesupport_introspection_c__MissionScheduler_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_mission_scheduler
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_Goal)() {
  qr_mission_scheduler__action__MissionScheduler_Goal__rosidl_typesupport_introspection_c__MissionScheduler_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, msg, GoalMsg)();
  if (!qr_mission_scheduler__action__MissionScheduler_Goal__rosidl_typesupport_introspection_c__MissionScheduler_Goal_message_type_support_handle.typesupport_identifier) {
    qr_mission_scheduler__action__MissionScheduler_Goal__rosidl_typesupport_introspection_c__MissionScheduler_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qr_mission_scheduler__action__MissionScheduler_Goal__rosidl_typesupport_introspection_c__MissionScheduler_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "qr_mission_scheduler/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__functions.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__struct.h"


// Include directives for member types
// Member `success`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qr_mission_scheduler__action__MissionScheduler_Result__rosidl_typesupport_introspection_c__MissionScheduler_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qr_mission_scheduler__action__MissionScheduler_Result__init(message_memory);
}

void qr_mission_scheduler__action__MissionScheduler_Result__rosidl_typesupport_introspection_c__MissionScheduler_Result_fini_function(void * message_memory)
{
  qr_mission_scheduler__action__MissionScheduler_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember qr_mission_scheduler__action__MissionScheduler_Result__rosidl_typesupport_introspection_c__MissionScheduler_Result_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__action__MissionScheduler_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qr_mission_scheduler__action__MissionScheduler_Result__rosidl_typesupport_introspection_c__MissionScheduler_Result_message_members = {
  "qr_mission_scheduler__action",  // message namespace
  "MissionScheduler_Result",  // message name
  1,  // number of fields
  sizeof(qr_mission_scheduler__action__MissionScheduler_Result),
  qr_mission_scheduler__action__MissionScheduler_Result__rosidl_typesupport_introspection_c__MissionScheduler_Result_message_member_array,  // message members
  qr_mission_scheduler__action__MissionScheduler_Result__rosidl_typesupport_introspection_c__MissionScheduler_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  qr_mission_scheduler__action__MissionScheduler_Result__rosidl_typesupport_introspection_c__MissionScheduler_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qr_mission_scheduler__action__MissionScheduler_Result__rosidl_typesupport_introspection_c__MissionScheduler_Result_message_type_support_handle = {
  0,
  &qr_mission_scheduler__action__MissionScheduler_Result__rosidl_typesupport_introspection_c__MissionScheduler_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_mission_scheduler
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_Result)() {
  if (!qr_mission_scheduler__action__MissionScheduler_Result__rosidl_typesupport_introspection_c__MissionScheduler_Result_message_type_support_handle.typesupport_identifier) {
    qr_mission_scheduler__action__MissionScheduler_Result__rosidl_typesupport_introspection_c__MissionScheduler_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qr_mission_scheduler__action__MissionScheduler_Result__rosidl_typesupport_introspection_c__MissionScheduler_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "qr_mission_scheduler/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__functions.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__struct.h"


// Include directives for member types
// Member `pose`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__MissionScheduler_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qr_mission_scheduler__action__MissionScheduler_Feedback__init(message_memory);
}

void qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__MissionScheduler_Feedback_fini_function(void * message_memory)
{
  qr_mission_scheduler__action__MissionScheduler_Feedback__fini(message_memory);
}

size_t qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__size_function__MissionScheduler_Feedback__pose(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__get_const_function__MissionScheduler_Feedback__pose(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__get_function__MissionScheduler_Feedback__pose(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__fetch_function__MissionScheduler_Feedback__pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__get_const_function__MissionScheduler_Feedback__pose(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__assign_function__MissionScheduler_Feedback__pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__get_function__MissionScheduler_Feedback__pose(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__resize_function__MissionScheduler_Feedback__pose(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__MissionScheduler_Feedback_message_member_array[1] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__action__MissionScheduler_Feedback, pose),  // bytes offset in struct
    NULL,  // default value
    qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__size_function__MissionScheduler_Feedback__pose,  // size() function pointer
    qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__get_const_function__MissionScheduler_Feedback__pose,  // get_const(index) function pointer
    qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__get_function__MissionScheduler_Feedback__pose,  // get(index) function pointer
    qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__fetch_function__MissionScheduler_Feedback__pose,  // fetch(index, &value) function pointer
    qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__assign_function__MissionScheduler_Feedback__pose,  // assign(index, value) function pointer
    qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__resize_function__MissionScheduler_Feedback__pose  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__MissionScheduler_Feedback_message_members = {
  "qr_mission_scheduler__action",  // message namespace
  "MissionScheduler_Feedback",  // message name
  1,  // number of fields
  sizeof(qr_mission_scheduler__action__MissionScheduler_Feedback),
  qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__MissionScheduler_Feedback_message_member_array,  // message members
  qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__MissionScheduler_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__MissionScheduler_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__MissionScheduler_Feedback_message_type_support_handle = {
  0,
  &qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__MissionScheduler_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_mission_scheduler
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_Feedback)() {
  if (!qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__MissionScheduler_Feedback_message_type_support_handle.typesupport_identifier) {
    qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__MissionScheduler_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qr_mission_scheduler__action__MissionScheduler_Feedback__rosidl_typesupport_introspection_c__MissionScheduler_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "qr_mission_scheduler/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__functions.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "qr_mission_scheduler/action/mission_scheduler.h"
// Member `goal`
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__init(message_memory);
}

void qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_fini_function(void * message_memory)
{
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_message_members = {
  "qr_mission_scheduler__action",  // message namespace
  "MissionScheduler_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Request),
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_message_member_array,  // message members
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_message_type_support_handle = {
  0,
  &qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_mission_scheduler
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_SendGoal_Request)() {
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_Goal)();
  if (!qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qr_mission_scheduler__action__MissionScheduler_SendGoal_Request__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "qr_mission_scheduler/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__functions.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__init(message_memory);
}

void qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_fini_function(void * message_memory)
{
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_message_members = {
  "qr_mission_scheduler__action",  // message namespace
  "MissionScheduler_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(qr_mission_scheduler__action__MissionScheduler_SendGoal_Response),
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_message_member_array,  // message members
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_message_type_support_handle = {
  0,
  &qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_mission_scheduler
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_SendGoal_Response)() {
  qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qr_mission_scheduler__action__MissionScheduler_SendGoal_Response__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "qr_mission_scheduler/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_service_members = {
  "qr_mission_scheduler__action",  // service namespace
  "MissionScheduler_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_service_type_support_handle = {
  0,
  &qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_mission_scheduler
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_SendGoal)() {
  if (!qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_service_type_support_handle.typesupport_identifier) {
    qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_SendGoal_Response)()->data;
  }

  return &qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "qr_mission_scheduler/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__functions.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qr_mission_scheduler__action__MissionScheduler_GetResult_Request__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qr_mission_scheduler__action__MissionScheduler_GetResult_Request__init(message_memory);
}

void qr_mission_scheduler__action__MissionScheduler_GetResult_Request__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_fini_function(void * message_memory)
{
  qr_mission_scheduler__action__MissionScheduler_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember qr_mission_scheduler__action__MissionScheduler_GetResult_Request__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__action__MissionScheduler_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qr_mission_scheduler__action__MissionScheduler_GetResult_Request__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_message_members = {
  "qr_mission_scheduler__action",  // message namespace
  "MissionScheduler_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(qr_mission_scheduler__action__MissionScheduler_GetResult_Request),
  qr_mission_scheduler__action__MissionScheduler_GetResult_Request__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_message_member_array,  // message members
  qr_mission_scheduler__action__MissionScheduler_GetResult_Request__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  qr_mission_scheduler__action__MissionScheduler_GetResult_Request__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qr_mission_scheduler__action__MissionScheduler_GetResult_Request__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_message_type_support_handle = {
  0,
  &qr_mission_scheduler__action__MissionScheduler_GetResult_Request__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_mission_scheduler
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_GetResult_Request)() {
  qr_mission_scheduler__action__MissionScheduler_GetResult_Request__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!qr_mission_scheduler__action__MissionScheduler_GetResult_Request__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    qr_mission_scheduler__action__MissionScheduler_GetResult_Request__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qr_mission_scheduler__action__MissionScheduler_GetResult_Request__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "qr_mission_scheduler/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__functions.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "qr_mission_scheduler/action/mission_scheduler.h"
// Member `result`
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qr_mission_scheduler__action__MissionScheduler_GetResult_Response__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qr_mission_scheduler__action__MissionScheduler_GetResult_Response__init(message_memory);
}

void qr_mission_scheduler__action__MissionScheduler_GetResult_Response__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_fini_function(void * message_memory)
{
  qr_mission_scheduler__action__MissionScheduler_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember qr_mission_scheduler__action__MissionScheduler_GetResult_Response__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__action__MissionScheduler_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__action__MissionScheduler_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qr_mission_scheduler__action__MissionScheduler_GetResult_Response__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_message_members = {
  "qr_mission_scheduler__action",  // message namespace
  "MissionScheduler_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(qr_mission_scheduler__action__MissionScheduler_GetResult_Response),
  qr_mission_scheduler__action__MissionScheduler_GetResult_Response__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_message_member_array,  // message members
  qr_mission_scheduler__action__MissionScheduler_GetResult_Response__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  qr_mission_scheduler__action__MissionScheduler_GetResult_Response__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qr_mission_scheduler__action__MissionScheduler_GetResult_Response__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_message_type_support_handle = {
  0,
  &qr_mission_scheduler__action__MissionScheduler_GetResult_Response__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_mission_scheduler
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_GetResult_Response)() {
  qr_mission_scheduler__action__MissionScheduler_GetResult_Response__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_Result)();
  if (!qr_mission_scheduler__action__MissionScheduler_GetResult_Response__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    qr_mission_scheduler__action__MissionScheduler_GetResult_Response__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qr_mission_scheduler__action__MissionScheduler_GetResult_Response__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "qr_mission_scheduler/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_service_members = {
  "qr_mission_scheduler__action",  // service namespace
  "MissionScheduler_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_service_type_support_handle = {
  0,
  &qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_mission_scheduler
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_GetResult)() {
  if (!qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_service_type_support_handle.typesupport_identifier) {
    qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_GetResult_Response)()->data;
  }

  return &qr_mission_scheduler__action__detail__mission_scheduler__rosidl_typesupport_introspection_c__MissionScheduler_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "qr_mission_scheduler/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__functions.h"
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "qr_mission_scheduler/action/mission_scheduler.h"
// Member `feedback`
// already included above
// #include "qr_mission_scheduler/action/detail/mission_scheduler__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__init(message_memory);
}

void qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_fini_function(void * message_memory)
{
  qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_message_members = {
  "qr_mission_scheduler__action",  // message namespace
  "MissionScheduler_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(qr_mission_scheduler__action__MissionScheduler_FeedbackMessage),
  qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_message_member_array,  // message members
  qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_message_type_support_handle = {
  0,
  &qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qr_mission_scheduler
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_FeedbackMessage)() {
  qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qr_mission_scheduler, action, MissionScheduler_Feedback)();
  if (!qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qr_mission_scheduler__action__MissionScheduler_FeedbackMessage__rosidl_typesupport_introspection_c__MissionScheduler_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
