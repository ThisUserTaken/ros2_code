// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from neo_msgs2:msg/KinematicsState.idl
// generated code does not contain a copyright notice
#include "neo_msgs2/msg/detail/kinematics_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "neo_msgs2/msg/detail/kinematics_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace neo_msgs2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
cdr_serialize(
  const neo_msgs2::msg::KinematicsState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: time
  cdr << ros_message.time;
  // Member: is_vel_cmd
  cdr << (ros_message.is_vel_cmd ? true : false);
  // Member: is_moving
  cdr << (ros_message.is_moving ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  neo_msgs2::msg::KinematicsState & ros_message)
{
  // Member: time
  cdr >> ros_message.time;

  // Member: is_vel_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_vel_cmd = tmp ? true : false;
  }

  // Member: is_moving
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_moving = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
get_serialized_size(
  const neo_msgs2::msg::KinematicsState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: time
  {
    size_t item_size = sizeof(ros_message.time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_vel_cmd
  {
    size_t item_size = sizeof(ros_message.is_vel_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_moving
  {
    size_t item_size = sizeof(ros_message.is_moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
max_serialized_size_KinematicsState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_vel_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_moving
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = neo_msgs2::msg::KinematicsState;
    is_plain =
      (
      offsetof(DataType, is_moving) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _KinematicsState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const neo_msgs2::msg::KinematicsState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _KinematicsState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<neo_msgs2::msg::KinematicsState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _KinematicsState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const neo_msgs2::msg::KinematicsState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _KinematicsState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_KinematicsState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _KinematicsState__callbacks = {
  "neo_msgs2::msg",
  "KinematicsState",
  _KinematicsState__cdr_serialize,
  _KinematicsState__cdr_deserialize,
  _KinematicsState__get_serialized_size,
  _KinematicsState__max_serialized_size
};

static rosidl_message_type_support_t _KinematicsState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_KinematicsState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace neo_msgs2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_neo_msgs2
const rosidl_message_type_support_t *
get_message_type_support_handle<neo_msgs2::msg::KinematicsState>()
{
  return &neo_msgs2::msg::typesupport_fastrtps_cpp::_KinematicsState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, neo_msgs2, msg, KinematicsState)() {
  return &neo_msgs2::msg::typesupport_fastrtps_cpp::_KinematicsState__handle;
}

#ifdef __cplusplus
}
#endif
