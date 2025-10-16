// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from graph_creator_msgs:msg/GraphGeneratorConfig.idl
// generated code does not contain a copyright notice
#include "graph_creator_msgs/msg/detail/graph_generator_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "graph_creator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "graph_creator_msgs/msg/detail/graph_generator_config__struct.h"
#include "graph_creator_msgs/msg/detail/graph_generator_config__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose__functions.h"  // start_pose
#include "graph_creator_msgs/msg/detail/edge_creation_type__functions.h"  // edge_creation_type
#include "graph_creator_msgs/msg/detail/edge_direction_creation_type__functions.h"  // edge_direction_type
#include "rosidl_runtime_c/string.h"  // dxf_file_path
#include "rosidl_runtime_c/string_functions.h"  // dxf_file_path

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graph_creator_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graph_creator_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graph_creator_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();
size_t get_serialized_size_graph_creator_msgs__msg__EdgeCreationType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_graph_creator_msgs__msg__EdgeCreationType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, graph_creator_msgs, msg, EdgeCreationType)();
size_t get_serialized_size_graph_creator_msgs__msg__EdgeDirectionCreationType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_graph_creator_msgs__msg__EdgeDirectionCreationType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, graph_creator_msgs, msg, EdgeDirectionCreationType)();


using _GraphGeneratorConfig__ros_msg_type = graph_creator_msgs__msg__GraphGeneratorConfig;

static bool _GraphGeneratorConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GraphGeneratorConfig__ros_msg_type * ros_message = static_cast<const _GraphGeneratorConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: generation_type
  {
    cdr << ros_message->generation_type;
  }

  // Field name: edge_creation_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, graph_creator_msgs, msg, EdgeCreationType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->edge_creation_type, cdr))
    {
      return false;
    }
  }

  // Field name: edge_direction_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, graph_creator_msgs, msg, EdgeDirectionCreationType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->edge_direction_type, cdr))
    {
      return false;
    }
  }

  // Field name: ignore_vertex_orientation
  {
    cdr << (ros_message->ignore_vertex_orientation ? true : false);
  }

  // Field name: use_edge_count_threshold
  {
    cdr << (ros_message->use_edge_count_threshold ? true : false);
  }

  // Field name: edge_count_threshold
  {
    cdr << ros_message->edge_count_threshold;
  }

  // Field name: dxf_file_path
  {
    const rosidl_runtime_c__String * str = &ros_message->dxf_file_path;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: scale_x
  {
    cdr << ros_message->scale_x;
  }

  // Field name: scale_y
  {
    cdr << ros_message->scale_y;
  }

  // Field name: start_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->start_pose, cdr))
    {
      return false;
    }
  }

  // Field name: rows
  {
    cdr << ros_message->rows;
  }

  // Field name: columns
  {
    cdr << ros_message->columns;
  }

  // Field name: row_spacing
  {
    cdr << ros_message->row_spacing;
  }

  // Field name: column_spacing
  {
    cdr << ros_message->column_spacing;
  }

  return true;
}

static bool _GraphGeneratorConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GraphGeneratorConfig__ros_msg_type * ros_message = static_cast<_GraphGeneratorConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: generation_type
  {
    cdr >> ros_message->generation_type;
  }

  // Field name: edge_creation_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, graph_creator_msgs, msg, EdgeCreationType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->edge_creation_type))
    {
      return false;
    }
  }

  // Field name: edge_direction_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, graph_creator_msgs, msg, EdgeDirectionCreationType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->edge_direction_type))
    {
      return false;
    }
  }

  // Field name: ignore_vertex_orientation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ignore_vertex_orientation = tmp ? true : false;
  }

  // Field name: use_edge_count_threshold
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_edge_count_threshold = tmp ? true : false;
  }

  // Field name: edge_count_threshold
  {
    cdr >> ros_message->edge_count_threshold;
  }

  // Field name: dxf_file_path
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->dxf_file_path.data) {
      rosidl_runtime_c__String__init(&ros_message->dxf_file_path);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->dxf_file_path,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'dxf_file_path'\n");
      return false;
    }
  }

  // Field name: scale_x
  {
    cdr >> ros_message->scale_x;
  }

  // Field name: scale_y
  {
    cdr >> ros_message->scale_y;
  }

  // Field name: start_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->start_pose))
    {
      return false;
    }
  }

  // Field name: rows
  {
    cdr >> ros_message->rows;
  }

  // Field name: columns
  {
    cdr >> ros_message->columns;
  }

  // Field name: row_spacing
  {
    cdr >> ros_message->row_spacing;
  }

  // Field name: column_spacing
  {
    cdr >> ros_message->column_spacing;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graph_creator_msgs
size_t get_serialized_size_graph_creator_msgs__msg__GraphGeneratorConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GraphGeneratorConfig__ros_msg_type * ros_message = static_cast<const _GraphGeneratorConfig__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name generation_type
  {
    size_t item_size = sizeof(ros_message->generation_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name edge_creation_type

  current_alignment += get_serialized_size_graph_creator_msgs__msg__EdgeCreationType(
    &(ros_message->edge_creation_type), current_alignment);
  // field.name edge_direction_type

  current_alignment += get_serialized_size_graph_creator_msgs__msg__EdgeDirectionCreationType(
    &(ros_message->edge_direction_type), current_alignment);
  // field.name ignore_vertex_orientation
  {
    size_t item_size = sizeof(ros_message->ignore_vertex_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_edge_count_threshold
  {
    size_t item_size = sizeof(ros_message->use_edge_count_threshold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name edge_count_threshold
  {
    size_t item_size = sizeof(ros_message->edge_count_threshold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dxf_file_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->dxf_file_path.size + 1);
  // field.name scale_x
  {
    size_t item_size = sizeof(ros_message->scale_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scale_y
  {
    size_t item_size = sizeof(ros_message->scale_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->start_pose), current_alignment);
  // field.name rows
  {
    size_t item_size = sizeof(ros_message->rows);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name columns
  {
    size_t item_size = sizeof(ros_message->columns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name row_spacing
  {
    size_t item_size = sizeof(ros_message->row_spacing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name column_spacing
  {
    size_t item_size = sizeof(ros_message->column_spacing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GraphGeneratorConfig__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_graph_creator_msgs__msg__GraphGeneratorConfig(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graph_creator_msgs
size_t max_serialized_size_graph_creator_msgs__msg__GraphGeneratorConfig(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: generation_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: edge_creation_type
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_graph_creator_msgs__msg__EdgeCreationType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: edge_direction_type
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_graph_creator_msgs__msg__EdgeDirectionCreationType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ignore_vertex_orientation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: use_edge_count_threshold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: edge_count_threshold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dxf_file_path
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: scale_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scale_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: start_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rows
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: columns
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: row_spacing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: column_spacing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = graph_creator_msgs__msg__GraphGeneratorConfig;
    is_plain =
      (
      offsetof(DataType, column_spacing) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GraphGeneratorConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_graph_creator_msgs__msg__GraphGeneratorConfig(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GraphGeneratorConfig = {
  "graph_creator_msgs::msg",
  "GraphGeneratorConfig",
  _GraphGeneratorConfig__cdr_serialize,
  _GraphGeneratorConfig__cdr_deserialize,
  _GraphGeneratorConfig__get_serialized_size,
  _GraphGeneratorConfig__max_serialized_size
};

static rosidl_message_type_support_t _GraphGeneratorConfig__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GraphGeneratorConfig,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, graph_creator_msgs, msg, GraphGeneratorConfig)() {
  return &_GraphGeneratorConfig__type_support;
}

#if defined(__cplusplus)
}
#endif
