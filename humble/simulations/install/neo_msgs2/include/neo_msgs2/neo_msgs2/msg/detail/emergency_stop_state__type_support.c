// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from neo_msgs2:msg/EmergencyStopState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "neo_msgs2/msg/detail/emergency_stop_state__rosidl_typesupport_introspection_c.h"
#include "neo_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "neo_msgs2/msg/detail/emergency_stop_state__functions.h"
#include "neo_msgs2/msg/detail/emergency_stop_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void neo_msgs2__msg__EmergencyStopState__rosidl_typesupport_introspection_c__EmergencyStopState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  neo_msgs2__msg__EmergencyStopState__init(message_memory);
}

void neo_msgs2__msg__EmergencyStopState__rosidl_typesupport_introspection_c__EmergencyStopState_fini_function(void * message_memory)
{
  neo_msgs2__msg__EmergencyStopState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember neo_msgs2__msg__EmergencyStopState__rosidl_typesupport_introspection_c__EmergencyStopState_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2__msg__EmergencyStopState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_button_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2__msg__EmergencyStopState, emergency_button_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scanner_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2__msg__EmergencyStopState, scanner_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "software_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2__msg__EmergencyStopState, software_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2__msg__EmergencyStopState, emergency_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers neo_msgs2__msg__EmergencyStopState__rosidl_typesupport_introspection_c__EmergencyStopState_message_members = {
  "neo_msgs2__msg",  // message namespace
  "EmergencyStopState",  // message name
  5,  // number of fields
  sizeof(neo_msgs2__msg__EmergencyStopState),
  neo_msgs2__msg__EmergencyStopState__rosidl_typesupport_introspection_c__EmergencyStopState_message_member_array,  // message members
  neo_msgs2__msg__EmergencyStopState__rosidl_typesupport_introspection_c__EmergencyStopState_init_function,  // function to initialize message memory (memory has to be allocated)
  neo_msgs2__msg__EmergencyStopState__rosidl_typesupport_introspection_c__EmergencyStopState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t neo_msgs2__msg__EmergencyStopState__rosidl_typesupport_introspection_c__EmergencyStopState_message_type_support_handle = {
  0,
  &neo_msgs2__msg__EmergencyStopState__rosidl_typesupport_introspection_c__EmergencyStopState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neo_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_msgs2, msg, EmergencyStopState)() {
  neo_msgs2__msg__EmergencyStopState__rosidl_typesupport_introspection_c__EmergencyStopState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!neo_msgs2__msg__EmergencyStopState__rosidl_typesupport_introspection_c__EmergencyStopState_message_type_support_handle.typesupport_identifier) {
    neo_msgs2__msg__EmergencyStopState__rosidl_typesupport_introspection_c__EmergencyStopState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &neo_msgs2__msg__EmergencyStopState__rosidl_typesupport_introspection_c__EmergencyStopState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
