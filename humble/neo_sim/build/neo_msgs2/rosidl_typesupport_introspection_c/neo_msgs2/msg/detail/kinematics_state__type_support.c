// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from neo_msgs2:msg/KinematicsState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "neo_msgs2/msg/detail/kinematics_state__rosidl_typesupport_introspection_c.h"
#include "neo_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "neo_msgs2/msg/detail/kinematics_state__functions.h"
#include "neo_msgs2/msg/detail/kinematics_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void neo_msgs2__msg__KinematicsState__rosidl_typesupport_introspection_c__KinematicsState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  neo_msgs2__msg__KinematicsState__init(message_memory);
}

void neo_msgs2__msg__KinematicsState__rosidl_typesupport_introspection_c__KinematicsState_fini_function(void * message_memory)
{
  neo_msgs2__msg__KinematicsState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember neo_msgs2__msg__KinematicsState__rosidl_typesupport_introspection_c__KinematicsState_message_member_array[3] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2__msg__KinematicsState, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_vel_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2__msg__KinematicsState, is_vel_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_moving",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2__msg__KinematicsState, is_moving),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers neo_msgs2__msg__KinematicsState__rosidl_typesupport_introspection_c__KinematicsState_message_members = {
  "neo_msgs2__msg",  // message namespace
  "KinematicsState",  // message name
  3,  // number of fields
  sizeof(neo_msgs2__msg__KinematicsState),
  neo_msgs2__msg__KinematicsState__rosidl_typesupport_introspection_c__KinematicsState_message_member_array,  // message members
  neo_msgs2__msg__KinematicsState__rosidl_typesupport_introspection_c__KinematicsState_init_function,  // function to initialize message memory (memory has to be allocated)
  neo_msgs2__msg__KinematicsState__rosidl_typesupport_introspection_c__KinematicsState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t neo_msgs2__msg__KinematicsState__rosidl_typesupport_introspection_c__KinematicsState_message_type_support_handle = {
  0,
  &neo_msgs2__msg__KinematicsState__rosidl_typesupport_introspection_c__KinematicsState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neo_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_msgs2, msg, KinematicsState)() {
  if (!neo_msgs2__msg__KinematicsState__rosidl_typesupport_introspection_c__KinematicsState_message_type_support_handle.typesupport_identifier) {
    neo_msgs2__msg__KinematicsState__rosidl_typesupport_introspection_c__KinematicsState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &neo_msgs2__msg__KinematicsState__rosidl_typesupport_introspection_c__KinematicsState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
