// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from t3_action_msg:action/Move.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "t3_action_msg/action/detail/move__struct.h"
#include "t3_action_msg/action/detail/move__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace t3_action_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Move_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_Goal_type_support_ids_t;

static const _Move_Goal_type_support_ids_t _Move_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_Goal_type_support_symbol_names_t _Move_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, t3_action_msg, action, Move_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, t3_action_msg, action, Move_Goal)),
  }
};

typedef struct _Move_Goal_type_support_data_t
{
  void * data[2];
} _Move_Goal_type_support_data_t;

static _Move_Goal_type_support_data_t _Move_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_Goal_message_typesupport_map = {
  2,
  "t3_action_msg",
  &_Move_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Move_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Move_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Move_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace t3_action_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, t3_action_msg, action, Move_Goal)() {
  return &::t3_action_msg::action::rosidl_typesupport_c::Move_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace t3_action_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Move_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_Result_type_support_ids_t;

static const _Move_Result_type_support_ids_t _Move_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_Result_type_support_symbol_names_t _Move_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, t3_action_msg, action, Move_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, t3_action_msg, action, Move_Result)),
  }
};

typedef struct _Move_Result_type_support_data_t
{
  void * data[2];
} _Move_Result_type_support_data_t;

static _Move_Result_type_support_data_t _Move_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_Result_message_typesupport_map = {
  2,
  "t3_action_msg",
  &_Move_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Move_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Move_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Move_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace t3_action_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, t3_action_msg, action, Move_Result)() {
  return &::t3_action_msg::action::rosidl_typesupport_c::Move_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace t3_action_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Move_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_Feedback_type_support_ids_t;

static const _Move_Feedback_type_support_ids_t _Move_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_Feedback_type_support_symbol_names_t _Move_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, t3_action_msg, action, Move_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, t3_action_msg, action, Move_Feedback)),
  }
};

typedef struct _Move_Feedback_type_support_data_t
{
  void * data[2];
} _Move_Feedback_type_support_data_t;

static _Move_Feedback_type_support_data_t _Move_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_Feedback_message_typesupport_map = {
  2,
  "t3_action_msg",
  &_Move_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Move_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Move_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Move_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace t3_action_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, t3_action_msg, action, Move_Feedback)() {
  return &::t3_action_msg::action::rosidl_typesupport_c::Move_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace t3_action_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Move_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_SendGoal_Request_type_support_ids_t;

static const _Move_SendGoal_Request_type_support_ids_t _Move_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_SendGoal_Request_type_support_symbol_names_t _Move_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, t3_action_msg, action, Move_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, t3_action_msg, action, Move_SendGoal_Request)),
  }
};

typedef struct _Move_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Move_SendGoal_Request_type_support_data_t;

static _Move_SendGoal_Request_type_support_data_t _Move_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_SendGoal_Request_message_typesupport_map = {
  2,
  "t3_action_msg",
  &_Move_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Move_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Move_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Move_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace t3_action_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, t3_action_msg, action, Move_SendGoal_Request)() {
  return &::t3_action_msg::action::rosidl_typesupport_c::Move_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace t3_action_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Move_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_SendGoal_Response_type_support_ids_t;

static const _Move_SendGoal_Response_type_support_ids_t _Move_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_SendGoal_Response_type_support_symbol_names_t _Move_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, t3_action_msg, action, Move_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, t3_action_msg, action, Move_SendGoal_Response)),
  }
};

typedef struct _Move_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Move_SendGoal_Response_type_support_data_t;

static _Move_SendGoal_Response_type_support_data_t _Move_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_SendGoal_Response_message_typesupport_map = {
  2,
  "t3_action_msg",
  &_Move_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Move_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Move_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Move_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace t3_action_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, t3_action_msg, action, Move_SendGoal_Response)() {
  return &::t3_action_msg::action::rosidl_typesupport_c::Move_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace t3_action_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Move_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_SendGoal_type_support_ids_t;

static const _Move_SendGoal_type_support_ids_t _Move_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_SendGoal_type_support_symbol_names_t _Move_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, t3_action_msg, action, Move_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, t3_action_msg, action, Move_SendGoal)),
  }
};

typedef struct _Move_SendGoal_type_support_data_t
{
  void * data[2];
} _Move_SendGoal_type_support_data_t;

static _Move_SendGoal_type_support_data_t _Move_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_SendGoal_service_typesupport_map = {
  2,
  "t3_action_msg",
  &_Move_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Move_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Move_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Move_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace t3_action_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, t3_action_msg, action, Move_SendGoal)() {
  return &::t3_action_msg::action::rosidl_typesupport_c::Move_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace t3_action_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Move_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_GetResult_Request_type_support_ids_t;

static const _Move_GetResult_Request_type_support_ids_t _Move_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_GetResult_Request_type_support_symbol_names_t _Move_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, t3_action_msg, action, Move_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, t3_action_msg, action, Move_GetResult_Request)),
  }
};

typedef struct _Move_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Move_GetResult_Request_type_support_data_t;

static _Move_GetResult_Request_type_support_data_t _Move_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_GetResult_Request_message_typesupport_map = {
  2,
  "t3_action_msg",
  &_Move_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Move_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Move_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Move_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace t3_action_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, t3_action_msg, action, Move_GetResult_Request)() {
  return &::t3_action_msg::action::rosidl_typesupport_c::Move_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace t3_action_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Move_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_GetResult_Response_type_support_ids_t;

static const _Move_GetResult_Response_type_support_ids_t _Move_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_GetResult_Response_type_support_symbol_names_t _Move_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, t3_action_msg, action, Move_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, t3_action_msg, action, Move_GetResult_Response)),
  }
};

typedef struct _Move_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Move_GetResult_Response_type_support_data_t;

static _Move_GetResult_Response_type_support_data_t _Move_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_GetResult_Response_message_typesupport_map = {
  2,
  "t3_action_msg",
  &_Move_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Move_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Move_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Move_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace t3_action_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, t3_action_msg, action, Move_GetResult_Response)() {
  return &::t3_action_msg::action::rosidl_typesupport_c::Move_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace t3_action_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Move_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_GetResult_type_support_ids_t;

static const _Move_GetResult_type_support_ids_t _Move_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_GetResult_type_support_symbol_names_t _Move_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, t3_action_msg, action, Move_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, t3_action_msg, action, Move_GetResult)),
  }
};

typedef struct _Move_GetResult_type_support_data_t
{
  void * data[2];
} _Move_GetResult_type_support_data_t;

static _Move_GetResult_type_support_data_t _Move_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_GetResult_service_typesupport_map = {
  2,
  "t3_action_msg",
  &_Move_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Move_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Move_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Move_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace t3_action_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, t3_action_msg, action, Move_GetResult)() {
  return &::t3_action_msg::action::rosidl_typesupport_c::Move_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__struct.h"
// already included above
// #include "t3_action_msg/action/detail/move__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace t3_action_msg
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Move_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Move_FeedbackMessage_type_support_ids_t;

static const _Move_FeedbackMessage_type_support_ids_t _Move_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Move_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Move_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Move_FeedbackMessage_type_support_symbol_names_t _Move_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, t3_action_msg, action, Move_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, t3_action_msg, action, Move_FeedbackMessage)),
  }
};

typedef struct _Move_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Move_FeedbackMessage_type_support_data_t;

static _Move_FeedbackMessage_type_support_data_t _Move_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Move_FeedbackMessage_message_typesupport_map = {
  2,
  "t3_action_msg",
  &_Move_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Move_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Move_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Move_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Move_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace t3_action_msg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, t3_action_msg, action, Move_FeedbackMessage)() {
  return &::t3_action_msg::action::rosidl_typesupport_c::Move_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "t3_action_msg/action/move.h"
// already included above
// #include "t3_action_msg/action/detail/move__type_support.h"

static rosidl_action_type_support_t _t3_action_msg__action__Move__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, t3_action_msg, action, Move)()
{
  // Thread-safe by always writing the same values to the static struct
  _t3_action_msg__action__Move__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, t3_action_msg, action, Move_SendGoal)();
  _t3_action_msg__action__Move__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, t3_action_msg, action, Move_GetResult)();
  _t3_action_msg__action__Move__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _t3_action_msg__action__Move__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, t3_action_msg, action, Move_FeedbackMessage)();
  _t3_action_msg__action__Move__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_t3_action_msg__action__Move__typesupport_c;
}

#ifdef __cplusplus
}
#endif
