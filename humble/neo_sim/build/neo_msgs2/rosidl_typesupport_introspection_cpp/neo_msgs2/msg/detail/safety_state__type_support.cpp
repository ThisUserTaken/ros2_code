// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from neo_msgs2:msg/SafetyState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "neo_msgs2/msg/detail/safety_state__struct.hpp"
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

void SafetyState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) neo_msgs2::msg::SafetyState(_init);
}

void SafetyState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<neo_msgs2::msg::SafetyState *>(message_memory);
  typed_message->~SafetyState();
}

size_t size_function__SafetyState__triggered_cutoff_paths(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__SafetyState__triggered_cutoff_paths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__SafetyState__triggered_cutoff_paths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__SafetyState__triggered_cutoff_paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__SafetyState__triggered_cutoff_paths(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__SafetyState__triggered_cutoff_paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__SafetyState__triggered_cutoff_paths(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SafetyState_message_member_array[3] = {
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::SafetyState, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_safety_field",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::SafetyState, current_safety_field),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "triggered_cutoff_paths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::SafetyState, triggered_cutoff_paths),  // bytes offset in struct
    nullptr,  // default value
    size_function__SafetyState__triggered_cutoff_paths,  // size() function pointer
    get_const_function__SafetyState__triggered_cutoff_paths,  // get_const(index) function pointer
    get_function__SafetyState__triggered_cutoff_paths,  // get(index) function pointer
    fetch_function__SafetyState__triggered_cutoff_paths,  // fetch(index, &value) function pointer
    assign_function__SafetyState__triggered_cutoff_paths,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SafetyState_message_members = {
  "neo_msgs2::msg",  // message namespace
  "SafetyState",  // message name
  3,  // number of fields
  sizeof(neo_msgs2::msg::SafetyState),
  SafetyState_message_member_array,  // message members
  SafetyState_init_function,  // function to initialize message memory (memory has to be allocated)
  SafetyState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SafetyState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SafetyState_message_members,
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
get_message_type_support_handle<neo_msgs2::msg::SafetyState>()
{
  return &::neo_msgs2::msg::rosidl_typesupport_introspection_cpp::SafetyState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, neo_msgs2, msg, SafetyState)() {
  return &::neo_msgs2::msg::rosidl_typesupport_introspection_cpp::SafetyState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
