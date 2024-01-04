// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from neo_msgs2:msg/USBoard.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "neo_msgs2/msg/detail/us_board__struct.hpp"
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

void USBoard_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) neo_msgs2::msg::USBoard(_init);
}

void USBoard_fini_function(void * message_memory)
{
  auto typed_message = static_cast<neo_msgs2::msg::USBoard *>(message_memory);
  typed_message->~USBoard();
}

size_t size_function__USBoard__sensor(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__USBoard__sensor(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__USBoard__sensor(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__USBoard__sensor(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__USBoard__sensor(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__USBoard__sensor(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__USBoard__sensor(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__USBoard__analog(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__USBoard__analog(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__USBoard__analog(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__USBoard__analog(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__USBoard__analog(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__USBoard__analog(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__USBoard__analog(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember USBoard_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::USBoard, header),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(neo_msgs2::msg::USBoard, sensor),  // bytes offset in struct
    nullptr,  // default value
    size_function__USBoard__sensor,  // size() function pointer
    get_const_function__USBoard__sensor,  // get_const(index) function pointer
    get_function__USBoard__sensor,  // get(index) function pointer
    fetch_function__USBoard__sensor,  // fetch(index, &value) function pointer
    assign_function__USBoard__sensor,  // assign(index, value) function pointer
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
    offsetof(neo_msgs2::msg::USBoard, analog),  // bytes offset in struct
    nullptr,  // default value
    size_function__USBoard__analog,  // size() function pointer
    get_const_function__USBoard__analog,  // get_const(index) function pointer
    get_function__USBoard__analog,  // get(index) function pointer
    fetch_function__USBoard__analog,  // fetch(index, &value) function pointer
    assign_function__USBoard__analog,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers USBoard_message_members = {
  "neo_msgs2::msg",  // message namespace
  "USBoard",  // message name
  3,  // number of fields
  sizeof(neo_msgs2::msg::USBoard),
  USBoard_message_member_array,  // message members
  USBoard_init_function,  // function to initialize message memory (memory has to be allocated)
  USBoard_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t USBoard_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &USBoard_message_members,
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
get_message_type_support_handle<neo_msgs2::msg::USBoard>()
{
  return &::neo_msgs2::msg::rosidl_typesupport_introspection_cpp::USBoard_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, neo_msgs2, msg, USBoard)() {
  return &::neo_msgs2::msg::rosidl_typesupport_introspection_cpp::USBoard_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
