// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from neo_msgs2:msg/USBoardV2.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "neo_msgs2/msg/detail/us_board_v2__struct.hpp"
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

void USBoardV2_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) neo_msgs2::msg::USBoardV2(_init);
}

void USBoardV2_fini_function(void * message_memory)
{
  auto typed_message = static_cast<neo_msgs2::msg::USBoardV2 *>(message_memory);
  typed_message->~USBoardV2();
}

size_t size_function__USBoardV2__sensor(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__USBoardV2__sensor(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__USBoardV2__sensor(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__USBoardV2__sensor(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__USBoardV2__sensor(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__USBoardV2__sensor(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__USBoardV2__sensor(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__USBoardV2__analog(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__USBoardV2__analog(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__USBoardV2__analog(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__USBoardV2__analog(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__USBoardV2__analog(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__USBoardV2__analog(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__USBoardV2__analog(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__USBoardV2__active(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__USBoardV2__active(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__USBoardV2__active(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__USBoardV2__active(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__USBoardV2__active(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__USBoardV2__active(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__USBoardV2__active(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember USBoardV2_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::USBoardV2, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::USBoardV2, sensor),  // bytes offset in struct
    nullptr,  // default value
    size_function__USBoardV2__sensor,  // size() function pointer
    get_const_function__USBoardV2__sensor,  // get_const(index) function pointer
    get_function__USBoardV2__sensor,  // get(index) function pointer
    fetch_function__USBoardV2__sensor,  // fetch(index, &value) function pointer
    assign_function__USBoardV2__sensor,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "analog",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::USBoardV2, analog),  // bytes offset in struct
    nullptr,  // default value
    size_function__USBoardV2__analog,  // size() function pointer
    get_const_function__USBoardV2__analog,  // get_const(index) function pointer
    get_function__USBoardV2__analog,  // get(index) function pointer
    fetch_function__USBoardV2__analog,  // fetch(index, &value) function pointer
    assign_function__USBoardV2__analog,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "active",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::USBoardV2, active),  // bytes offset in struct
    nullptr,  // default value
    size_function__USBoardV2__active,  // size() function pointer
    get_const_function__USBoardV2__active,  // get_const(index) function pointer
    get_function__USBoardV2__active,  // get(index) function pointer
    fetch_function__USBoardV2__active,  // fetch(index, &value) function pointer
    assign_function__USBoardV2__active,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers USBoardV2_message_members = {
  "neo_msgs2::msg",  // message namespace
  "USBoardV2",  // message name
  4,  // number of fields
  sizeof(neo_msgs2::msg::USBoardV2),
  USBoardV2_message_member_array,  // message members
  USBoardV2_init_function,  // function to initialize message memory (memory has to be allocated)
  USBoardV2_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t USBoardV2_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &USBoardV2_message_members,
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
get_message_type_support_handle<neo_msgs2::msg::USBoardV2>()
{
  return &::neo_msgs2::msg::rosidl_typesupport_introspection_cpp::USBoardV2_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, neo_msgs2, msg, USBoardV2)() {
  return &::neo_msgs2::msg::rosidl_typesupport_introspection_cpp::USBoardV2_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
