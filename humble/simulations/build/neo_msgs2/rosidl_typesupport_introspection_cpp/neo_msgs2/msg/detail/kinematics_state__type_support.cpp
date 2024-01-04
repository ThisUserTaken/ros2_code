// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from neo_msgs2:msg/KinematicsState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "neo_msgs2/msg/detail/kinematics_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace neo_msgs2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void KinematicsState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) neo_msgs2::msg::KinematicsState(_init);
}

void KinematicsState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<neo_msgs2::msg::KinematicsState *>(message_memory);
  typed_message->~KinematicsState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KinematicsState_message_member_array[3] = {
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::KinematicsState, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_vel_cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::KinematicsState, is_vel_cmd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_moving",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::KinematicsState, is_moving),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KinematicsState_message_members = {
  "neo_msgs2::msg",  // message namespace
  "KinematicsState",  // message name
  3,  // number of fields
  sizeof(neo_msgs2::msg::KinematicsState),
  KinematicsState_message_member_array,  // message members
  KinematicsState_init_function,  // function to initialize message memory (memory has to be allocated)
  KinematicsState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KinematicsState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KinematicsState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace neo_msgs2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<neo_msgs2::msg::KinematicsState>()
{
  return &::neo_msgs2::msg::rosidl_typesupport_introspection_cpp::KinematicsState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, neo_msgs2, msg, KinematicsState)() {
  return &::neo_msgs2::msg::rosidl_typesupport_introspection_cpp::KinematicsState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
