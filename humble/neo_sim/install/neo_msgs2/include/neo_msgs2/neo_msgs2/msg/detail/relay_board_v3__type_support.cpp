// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from neo_msgs2:msg/RelayBoardV3.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "neo_msgs2/msg/detail/relay_board_v3__struct.hpp"
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

void RelayBoardV3_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) neo_msgs2::msg::RelayBoardV3(_init);
}

void RelayBoardV3_fini_function(void * message_memory)
{
  auto typed_message = static_cast<neo_msgs2::msg::RelayBoardV3 *>(message_memory);
  typed_message->~RelayBoardV3();
}

size_t size_function__RelayBoardV3__relay_states(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__RelayBoardV3__relay_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__RelayBoardV3__relay_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__RelayBoardV3__relay_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__RelayBoardV3__relay_states(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__RelayBoardV3__relay_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__RelayBoardV3__relay_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__RelayBoardV3__digital_input_states(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__RelayBoardV3__digital_input_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__RelayBoardV3__digital_input_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__RelayBoardV3__digital_input_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__RelayBoardV3__digital_input_states(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__RelayBoardV3__digital_input_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__RelayBoardV3__digital_input_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__RelayBoardV3__keypad_button_states(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__RelayBoardV3__keypad_button_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__RelayBoardV3__keypad_button_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__RelayBoardV3__keypad_button_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__RelayBoardV3__keypad_button_states(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__RelayBoardV3__keypad_button_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__RelayBoardV3__keypad_button_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RelayBoardV3_message_member_array[9] = {
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV3, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "firmware_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV3, firmware_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uptime",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV3, uptime),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ambient_temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV3, ambient_temperature),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "relay_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV3, relay_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__RelayBoardV3__relay_states,  // size() function pointer
    get_const_function__RelayBoardV3__relay_states,  // get_const(index) function pointer
    get_function__RelayBoardV3__relay_states,  // get(index) function pointer
    fetch_function__RelayBoardV3__relay_states,  // fetch(index, &value) function pointer
    assign_function__RelayBoardV3__relay_states,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "digital_input_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV3, digital_input_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__RelayBoardV3__digital_input_states,  // size() function pointer
    get_const_function__RelayBoardV3__digital_input_states,  // get_const(index) function pointer
    get_function__RelayBoardV3__digital_input_states,  // get(index) function pointer
    fetch_function__RelayBoardV3__digital_input_states,  // fetch(index, &value) function pointer
    assign_function__RelayBoardV3__digital_input_states,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "keypad_button_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV3, keypad_button_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__RelayBoardV3__keypad_button_states,  // size() function pointer
    get_const_function__RelayBoardV3__keypad_button_states,  // get_const(index) function pointer
    get_function__RelayBoardV3__keypad_button_states,  // get(index) function pointer
    fetch_function__RelayBoardV3__keypad_button_states,  // fetch(index, &value) function pointer
    assign_function__RelayBoardV3__keypad_button_states,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "key_switch_off_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV3, key_switch_off_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "release_structure_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV3, release_structure_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RelayBoardV3_message_members = {
  "neo_msgs2::msg",  // message namespace
  "RelayBoardV3",  // message name
  9,  // number of fields
  sizeof(neo_msgs2::msg::RelayBoardV3),
  RelayBoardV3_message_member_array,  // message members
  RelayBoardV3_init_function,  // function to initialize message memory (memory has to be allocated)
  RelayBoardV3_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RelayBoardV3_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RelayBoardV3_message_members,
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
get_message_type_support_handle<neo_msgs2::msg::RelayBoardV3>()
{
  return &::neo_msgs2::msg::rosidl_typesupport_introspection_cpp::RelayBoardV3_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, neo_msgs2, msg, RelayBoardV3)() {
  return &::neo_msgs2::msg::rosidl_typesupport_introspection_cpp::RelayBoardV3_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
