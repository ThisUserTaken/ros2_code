// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from neo_msgs2:msg/SafetyState.idl
// generated code does not contain a copyright notice
#include "neo_msgs2/msg/detail/safety_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "neo_msgs2/msg/detail/safety_state__struct.hpp"

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
  const neo_msgs2::msg::SafetyState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: time
  cdr << ros_message.time;
  // Member: current_safety_field
  cdr << ros_message.current_safety_field;
  // Member: triggered_cutoff_paths
  {
    cdr << ros_message.triggered_cutoff_paths;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  neo_msgs2::msg::SafetyState & ros_message)
{
  // Member: time
  cdr >> ros_message.time;

  // Member: current_safety_field
  cdr >> ros_message.current_safety_field;

  // Member: triggered_cutoff_paths
  {
    cdr >> ros_message.triggered_cutoff_paths;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
get_serialized_size(
  const neo_msgs2::msg::SafetyState & ros_message,
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
  // Member: current_safety_field
  {
    size_t item_size = sizeof(ros_message.current_safety_field);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: triggered_cutoff_paths
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.triggered_cutoff_paths[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
max_serialized_size_SafetyState(
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

  // Member: current_safety_field
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: triggered_cutoff_paths
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = neo_msgs2::msg::SafetyState;
    is_plain =
      (
      offsetof(DataType, triggered_cutoff_paths) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SafetyState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const neo_msgs2::msg::SafetyState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SafetyState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<neo_msgs2::msg::SafetyState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SafetyState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const neo_msgs2::msg::SafetyState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SafetyState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SafetyState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SafetyState__callbacks = {
  "neo_msgs2::msg",
  "SafetyState",
  _SafetyState__cdr_serialize,
  _SafetyState__cdr_deserialize,
  _SafetyState__get_serialized_size,
  _SafetyState__max_serialized_size
};

static rosidl_message_type_support_t _SafetyState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SafetyState__callbacks,
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
get_message_type_support_handle<neo_msgs2::msg::SafetyState>()
{
  return &neo_msgs2::msg::typesupport_fastrtps_cpp::_SafetyState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, neo_msgs2, msg, SafetyState)() {
  return &neo_msgs2::msg::typesupport_fastrtps_cpp::_SafetyState__handle;
}

#ifdef __cplusplus
}
#endif
