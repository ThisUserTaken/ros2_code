// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from neo_msgs2:msg/RelayBoardV2.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "neo_msgs2/msg/detail/relay_board_v2__struct.hpp"
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

void RelayBoardV2_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) neo_msgs2::msg::RelayBoardV2(_init);
}

void RelayBoardV2_fini_function(void * message_memory)
{
  auto typed_message = static_cast<neo_msgs2::msg::RelayBoardV2 *>(message_memory);
  typed_message->~RelayBoardV2();
}

size_t size_function__RelayBoardV2__relayboardv2_state(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__RelayBoardV2__relayboardv2_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__RelayBoardV2__relayboardv2_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__RelayBoardV2__relayboardv2_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__RelayBoardV2__relayboardv2_state(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__RelayBoardV2__relayboardv2_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__RelayBoardV2__relayboardv2_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__RelayBoardV2__relay_states(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__RelayBoardV2__relay_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__RelayBoardV2__relay_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__RelayBoardV2__relay_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__RelayBoardV2__relay_states(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__RelayBoardV2__relay_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__RelayBoardV2__relay_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__RelayBoardV2__keypad(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__RelayBoardV2__keypad(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__RelayBoardV2__keypad(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__RelayBoardV2__keypad(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__RelayBoardV2__keypad(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__RelayBoardV2__keypad(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__RelayBoardV2__keypad(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RelayBoardV2_message_member_array[10] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV2, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "relayboardv2_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV2, relayboardv2_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__RelayBoardV2__relayboardv2_state,  // size() function pointer
    get_const_function__RelayBoardV2__relayboardv2_state,  // get_const(index) function pointer
    get_function__RelayBoardV2__relayboardv2_state,  // get(index) function pointer
    fetch_function__RelayBoardV2__relayboardv2_state,  // fetch(index, &value) function pointer
    assign_function__RelayBoardV2__relayboardv2_state,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "communication_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV2, communication_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "charging_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV2, charging_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV2, temperature),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "battery_voltage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV2, battery_voltage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "charging_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV2, charging_current),  // bytes offset in struct
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
    offsetof(neo_msgs2::msg::RelayBoardV2, relay_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__RelayBoardV2__relay_states,  // size() function pointer
    get_const_function__RelayBoardV2__relay_states,  // get_const(index) function pointer
    get_function__RelayBoardV2__relay_states,  // get(index) function pointer
    fetch_function__RelayBoardV2__relay_states,  // fetch(index, &value) function pointer
    assign_function__RelayBoardV2__relay_states,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "keypad",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV2, keypad),  // bytes offset in struct
    nullptr,  // default value
    size_function__RelayBoardV2__keypad,  // size() function pointer
    get_const_function__RelayBoardV2__keypad,  // get_const(index) function pointer
    get_function__RelayBoardV2__keypad,  // get(index) function pointer
    fetch_function__RelayBoardV2__keypad,  // fetch(index, &value) function pointer
    assign_function__RelayBoardV2__keypad,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "shutdown",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::RelayBoardV2, shutdown),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RelayBoardV2_message_members = {
  "neo_msgs2::msg",  // message namespace
  "RelayBoardV2",  // message name
  10,  // number of fields
  sizeof(neo_msgs2::msg::RelayBoardV2),
  RelayBoardV2_message_member_array,  // message members
  RelayBoardV2_init_function,  // function to initialize message memory (memory has to be allocated)
  RelayBoardV2_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RelayBoardV2_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RelayBoardV2_message_members,
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
get_message_type_support_handle<neo_msgs2::msg::RelayBoardV2>()
{
  return &::neo_msgs2::msg::rosidl_typesupport_introspection_cpp::RelayBoardV2_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, neo_msgs2, msg, RelayBoardV2)() {
  return &::neo_msgs2::msg::rosidl_typesupport_introspection_cpp::RelayBoardV2_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
