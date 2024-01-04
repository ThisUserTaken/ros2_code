// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from neo_msgs2:msg/IOBoard.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "neo_msgs2/msg/detail/io_board__rosidl_typesupport_introspection_c.h"
#include "neo_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "neo_msgs2/msg/detail/io_board__functions.h"
#include "neo_msgs2/msg/detail/io_board__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__IOBoard_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  neo_msgs2__msg__IOBoard__init(message_memory);
}

void neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__IOBoard_fini_function(void * message_memory)
{
  neo_msgs2__msg__IOBoard__fini(message_memory);
}

size_t neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__size_function__IOBoard__digital_inputs(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_const_function__IOBoard__digital_inputs(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_function__IOBoard__digital_inputs(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__fetch_function__IOBoard__digital_inputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_const_function__IOBoard__digital_inputs(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__assign_function__IOBoard__digital_inputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_function__IOBoard__digital_inputs(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__size_function__IOBoard__digital_outputs(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_const_function__IOBoard__digital_outputs(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_function__IOBoard__digital_outputs(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__fetch_function__IOBoard__digital_outputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_const_function__IOBoard__digital_outputs(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__assign_function__IOBoard__digital_outputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_function__IOBoard__digital_outputs(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__size_function__IOBoard__analog_inputs(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_const_function__IOBoard__analog_inputs(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_function__IOBoard__analog_inputs(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__fetch_function__IOBoard__analog_inputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_const_function__IOBoard__analog_inputs(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__assign_function__IOBoard__analog_inputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_function__IOBoard__analog_inputs(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__IOBoard_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2__msg__IOBoard, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "digital_inputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2__msg__IOBoard, digital_inputs),  // bytes offset in struct
    NULL,  // default value
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__size_function__IOBoard__digital_inputs,  // size() function pointer
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_const_function__IOBoard__digital_inputs,  // get_const(index) function pointer
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_function__IOBoard__digital_inputs,  // get(index) function pointer
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__fetch_function__IOBoard__digital_inputs,  // fetch(index, &value) function pointer
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__assign_function__IOBoard__digital_inputs,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "digital_outputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2__msg__IOBoard, digital_outputs),  // bytes offset in struct
    NULL,  // default value
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__size_function__IOBoard__digital_outputs,  // size() function pointer
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_const_function__IOBoard__digital_outputs,  // get_const(index) function pointer
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_function__IOBoard__digital_outputs,  // get(index) function pointer
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__fetch_function__IOBoard__digital_outputs,  // fetch(index, &value) function pointer
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__assign_function__IOBoard__digital_outputs,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "analog_inputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2__msg__IOBoard, analog_inputs),  // bytes offset in struct
    NULL,  // default value
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__size_function__IOBoard__analog_inputs,  // size() function pointer
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_const_function__IOBoard__analog_inputs,  // get_const(index) function pointer
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__get_function__IOBoard__analog_inputs,  // get(index) function pointer
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__fetch_function__IOBoard__analog_inputs,  // fetch(index, &value) function pointer
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__assign_function__IOBoard__analog_inputs,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__IOBoard_message_members = {
  "neo_msgs2__msg",  // message namespace
  "IOBoard",  // message name
  4,  // number of fields
  sizeof(neo_msgs2__msg__IOBoard),
  neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__IOBoard_message_member_array,  // message members
  neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__IOBoard_init_function,  // function to initialize message memory (memory has to be allocated)
  neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__IOBoard_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__IOBoard_message_type_support_handle = {
  0,
  &neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__IOBoard_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neo_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neo_msgs2, msg, IOBoard)() {
  neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__IOBoard_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__IOBoard_message_type_support_handle.typesupport_identifier) {
    neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__IOBoard_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &neo_msgs2__msg__IOBoard__rosidl_typesupport_introspection_c__IOBoard_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
