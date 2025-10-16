// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from anscer_msgs:action/Mission.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "anscer_msgs/action/detail/mission__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace anscer_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Mission_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Mission_Goal_type_support_ids_t;

static const _Mission_Goal_type_support_ids_t _Mission_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Mission_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Mission_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Mission_Goal_type_support_symbol_names_t _Mission_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, action, Mission_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, action, Mission_Goal)),
  }
};

typedef struct _Mission_Goal_type_support_data_t
{
  void * data[2];
} _Mission_Goal_type_support_data_t;

static _Mission_Goal_type_support_data_t _Mission_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Mission_Goal_message_typesupport_map = {
  2,
  "anscer_msgs",
  &_Mission_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Mission_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Mission_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Mission_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Mission_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::action::Mission_Goal>()
{
  return &::anscer_msgs::action::rosidl_typesupport_cpp::Mission_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, action, Mission_Goal)() {
  return get_message_type_support_handle<anscer_msgs::action::Mission_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "anscer_msgs/action/detail/mission__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace anscer_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Mission_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Mission_Result_type_support_ids_t;

static const _Mission_Result_type_support_ids_t _Mission_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Mission_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Mission_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Mission_Result_type_support_symbol_names_t _Mission_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, action, Mission_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, action, Mission_Result)),
  }
};

typedef struct _Mission_Result_type_support_data_t
{
  void * data[2];
} _Mission_Result_type_support_data_t;

static _Mission_Result_type_support_data_t _Mission_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Mission_Result_message_typesupport_map = {
  2,
  "anscer_msgs",
  &_Mission_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Mission_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Mission_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Mission_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Mission_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::action::Mission_Result>()
{
  return &::anscer_msgs::action::rosidl_typesupport_cpp::Mission_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, action, Mission_Result)() {
  return get_message_type_support_handle<anscer_msgs::action::Mission_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "anscer_msgs/action/detail/mission__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace anscer_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Mission_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Mission_Feedback_type_support_ids_t;

static const _Mission_Feedback_type_support_ids_t _Mission_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Mission_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Mission_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Mission_Feedback_type_support_symbol_names_t _Mission_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, action, Mission_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, action, Mission_Feedback)),
  }
};

typedef struct _Mission_Feedback_type_support_data_t
{
  void * data[2];
} _Mission_Feedback_type_support_data_t;

static _Mission_Feedback_type_support_data_t _Mission_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Mission_Feedback_message_typesupport_map = {
  2,
  "anscer_msgs",
  &_Mission_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Mission_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Mission_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Mission_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Mission_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::action::Mission_Feedback>()
{
  return &::anscer_msgs::action::rosidl_typesupport_cpp::Mission_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, action, Mission_Feedback)() {
  return get_message_type_support_handle<anscer_msgs::action::Mission_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "anscer_msgs/action/detail/mission__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace anscer_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Mission_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Mission_SendGoal_Request_type_support_ids_t;

static const _Mission_SendGoal_Request_type_support_ids_t _Mission_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Mission_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Mission_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Mission_SendGoal_Request_type_support_symbol_names_t _Mission_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, action, Mission_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, action, Mission_SendGoal_Request)),
  }
};

typedef struct _Mission_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Mission_SendGoal_Request_type_support_data_t;

static _Mission_SendGoal_Request_type_support_data_t _Mission_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Mission_SendGoal_Request_message_typesupport_map = {
  2,
  "anscer_msgs",
  &_Mission_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Mission_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Mission_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Mission_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Mission_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::action::Mission_SendGoal_Request>()
{
  return &::anscer_msgs::action::rosidl_typesupport_cpp::Mission_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, action, Mission_SendGoal_Request)() {
  return get_message_type_support_handle<anscer_msgs::action::Mission_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "anscer_msgs/action/detail/mission__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace anscer_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Mission_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Mission_SendGoal_Response_type_support_ids_t;

static const _Mission_SendGoal_Response_type_support_ids_t _Mission_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Mission_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Mission_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Mission_SendGoal_Response_type_support_symbol_names_t _Mission_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, action, Mission_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, action, Mission_SendGoal_Response)),
  }
};

typedef struct _Mission_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Mission_SendGoal_Response_type_support_data_t;

static _Mission_SendGoal_Response_type_support_data_t _Mission_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Mission_SendGoal_Response_message_typesupport_map = {
  2,
  "anscer_msgs",
  &_Mission_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Mission_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Mission_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Mission_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Mission_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::action::Mission_SendGoal_Response>()
{
  return &::anscer_msgs::action::rosidl_typesupport_cpp::Mission_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, action, Mission_SendGoal_Response)() {
  return get_message_type_support_handle<anscer_msgs::action::Mission_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "anscer_msgs/action/detail/mission__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace anscer_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Mission_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Mission_SendGoal_type_support_ids_t;

static const _Mission_SendGoal_type_support_ids_t _Mission_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Mission_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Mission_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Mission_SendGoal_type_support_symbol_names_t _Mission_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, action, Mission_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, action, Mission_SendGoal)),
  }
};

typedef struct _Mission_SendGoal_type_support_data_t
{
  void * data[2];
} _Mission_SendGoal_type_support_data_t;

static _Mission_SendGoal_type_support_data_t _Mission_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Mission_SendGoal_service_typesupport_map = {
  2,
  "anscer_msgs",
  &_Mission_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Mission_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Mission_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Mission_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Mission_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<anscer_msgs::action::Mission_SendGoal>()
{
  return &::anscer_msgs::action::rosidl_typesupport_cpp::Mission_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, action, Mission_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<anscer_msgs::action::Mission_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "anscer_msgs/action/detail/mission__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace anscer_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Mission_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Mission_GetResult_Request_type_support_ids_t;

static const _Mission_GetResult_Request_type_support_ids_t _Mission_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Mission_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Mission_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Mission_GetResult_Request_type_support_symbol_names_t _Mission_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, action, Mission_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, action, Mission_GetResult_Request)),
  }
};

typedef struct _Mission_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Mission_GetResult_Request_type_support_data_t;

static _Mission_GetResult_Request_type_support_data_t _Mission_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Mission_GetResult_Request_message_typesupport_map = {
  2,
  "anscer_msgs",
  &_Mission_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Mission_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Mission_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Mission_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Mission_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::action::Mission_GetResult_Request>()
{
  return &::anscer_msgs::action::rosidl_typesupport_cpp::Mission_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, action, Mission_GetResult_Request)() {
  return get_message_type_support_handle<anscer_msgs::action::Mission_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "anscer_msgs/action/detail/mission__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace anscer_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Mission_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Mission_GetResult_Response_type_support_ids_t;

static const _Mission_GetResult_Response_type_support_ids_t _Mission_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Mission_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Mission_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Mission_GetResult_Response_type_support_symbol_names_t _Mission_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, action, Mission_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, action, Mission_GetResult_Response)),
  }
};

typedef struct _Mission_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Mission_GetResult_Response_type_support_data_t;

static _Mission_GetResult_Response_type_support_data_t _Mission_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Mission_GetResult_Response_message_typesupport_map = {
  2,
  "anscer_msgs",
  &_Mission_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Mission_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Mission_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Mission_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Mission_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::action::Mission_GetResult_Response>()
{
  return &::anscer_msgs::action::rosidl_typesupport_cpp::Mission_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, action, Mission_GetResult_Response)() {
  return get_message_type_support_handle<anscer_msgs::action::Mission_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "anscer_msgs/action/detail/mission__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace anscer_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Mission_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Mission_GetResult_type_support_ids_t;

static const _Mission_GetResult_type_support_ids_t _Mission_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Mission_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Mission_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Mission_GetResult_type_support_symbol_names_t _Mission_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, action, Mission_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, action, Mission_GetResult)),
  }
};

typedef struct _Mission_GetResult_type_support_data_t
{
  void * data[2];
} _Mission_GetResult_type_support_data_t;

static _Mission_GetResult_type_support_data_t _Mission_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Mission_GetResult_service_typesupport_map = {
  2,
  "anscer_msgs",
  &_Mission_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Mission_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Mission_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Mission_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Mission_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<anscer_msgs::action::Mission_GetResult>()
{
  return &::anscer_msgs::action::rosidl_typesupport_cpp::Mission_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, action, Mission_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<anscer_msgs::action::Mission_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "anscer_msgs/action/detail/mission__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace anscer_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Mission_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Mission_FeedbackMessage_type_support_ids_t;

static const _Mission_FeedbackMessage_type_support_ids_t _Mission_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Mission_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Mission_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Mission_FeedbackMessage_type_support_symbol_names_t _Mission_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, anscer_msgs, action, Mission_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, anscer_msgs, action, Mission_FeedbackMessage)),
  }
};

typedef struct _Mission_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Mission_FeedbackMessage_type_support_data_t;

static _Mission_FeedbackMessage_type_support_data_t _Mission_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Mission_FeedbackMessage_message_typesupport_map = {
  2,
  "anscer_msgs",
  &_Mission_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Mission_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Mission_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Mission_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Mission_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<anscer_msgs::action::Mission_FeedbackMessage>()
{
  return &::anscer_msgs::action::rosidl_typesupport_cpp::Mission_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, action, Mission_FeedbackMessage)() {
  return get_message_type_support_handle<anscer_msgs::action::Mission_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "anscer_msgs/action/detail/mission__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace anscer_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Mission_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace anscer_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<anscer_msgs::action::Mission>()
{
  using ::anscer_msgs::action::rosidl_typesupport_cpp::Mission_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Mission_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::anscer_msgs::action::Mission::Impl::SendGoalService>();
  Mission_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::anscer_msgs::action::Mission::Impl::GetResultService>();
  Mission_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::anscer_msgs::action::Mission::Impl::CancelGoalService>();
  Mission_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::anscer_msgs::action::Mission::Impl::FeedbackMessage>();
  Mission_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::anscer_msgs::action::Mission::Impl::GoalStatusMessage>();
  return &Mission_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, anscer_msgs, action, Mission)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<anscer_msgs::action::Mission>();
}

#ifdef __cplusplus
}
#endif
