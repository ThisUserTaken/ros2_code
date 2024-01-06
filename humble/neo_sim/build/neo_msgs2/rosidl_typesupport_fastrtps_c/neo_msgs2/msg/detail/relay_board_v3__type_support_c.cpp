// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from neo_msgs2:msg/RelayBoardV3.idl
// generated code does not contain a copyright notice
#include "neo_msgs2/msg/detail/relay_board_v3__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "neo_msgs2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "neo_msgs2/msg/detail/relay_board_v3__struct.h"
#include "neo_msgs2/msg/detail/relay_board_v3__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // firmware_version
#include "rosidl_runtime_c/string_functions.h"  // firmware_version

// forward declare type support functions


using _RelayBoardV3__ros_msg_type = neo_msgs2__msg__RelayBoardV3;

static bool _RelayBoardV3__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RelayBoardV3__ros_msg_type * ros_message = static_cast<const _RelayBoardV3__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    cdr << ros_message->time;
  }

  // Field name: firmware_version
  {
    const rosidl_runtime_c__String * str = &ros_message->firmware_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: uptime
  {
    cdr << ros_message->uptime;
  }

  // Field name: ambient_temperature
  {
    cdr << ros_message->ambient_temperature;
  }

  // Field name: relay_states
  {
    size_t size = 4;
    auto array_ptr = ros_message->relay_states;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: digital_input_states
  {
    size_t size = 4;
    auto array_ptr = ros_message->digital_input_states;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: keypad_button_states
  {
    size_t size = 4;
    auto array_ptr = ros_message->keypad_button_states;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: key_switch_off_state
  {
    cdr << (ros_message->key_switch_off_state ? true : false);
  }

  // Field name: release_structure_state
  {
    cdr << (ros_message->release_structure_state ? true : false);
  }

  return true;
}

static bool _RelayBoardV3__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RelayBoardV3__ros_msg_type * ros_message = static_cast<_RelayBoardV3__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    cdr >> ros_message->time;
  }

  // Field name: firmware_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->firmware_version.data) {
      rosidl_runtime_c__String__init(&ros_message->firmware_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->firmware_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'firmware_version'\n");
      return false;
    }
  }

  // Field name: uptime
  {
    cdr >> ros_message->uptime;
  }

  // Field name: ambient_temperature
  {
    cdr >> ros_message->ambient_temperature;
  }

  // Field name: relay_states
  {
    size_t size = 4;
    auto array_ptr = ros_message->relay_states;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: digital_input_states
  {
    size_t size = 4;
    auto array_ptr = ros_message->digital_input_states;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: keypad_button_states
  {
    size_t size = 4;
    auto array_ptr = ros_message->keypad_button_states;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: key_switch_off_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_switch_off_state = tmp ? true : false;
  }

  // Field name: release_structure_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->release_structure_state = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_neo_msgs2
size_t get_serialized_size_neo_msgs2__msg__RelayBoardV3(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RelayBoardV3__ros_msg_type * ros_message = static_cast<const _RelayBoardV3__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name firmware_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->firmware_version.size + 1);
  // field.name uptime
  {
    size_t item_size = sizeof(ros_message->uptime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ambient_temperature
  {
    size_t item_size = sizeof(ros_message->ambient_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relay_states
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->relay_states;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name digital_input_states
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->digital_input_states;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name keypad_button_states
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->keypad_button_states;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_switch_off_state
  {
    size_t item_size = sizeof(ros_message->key_switch_off_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name release_structure_state
  {
    size_t item_size = sizeof(ros_message->release_structure_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RelayBoardV3__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_neo_msgs2__msg__RelayBoardV3(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_neo_msgs2
size_t max_serialized_size_neo_msgs2__msg__RelayBoardV3(
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

  // member: time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: firmware_version
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: uptime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ambient_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: relay_states
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: digital_input_states
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: keypad_button_states
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_switch_off_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: release_structure_state
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
    using DataType = neo_msgs2__msg__RelayBoardV3;
    is_plain =
      (
      offsetof(DataType, release_structure_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RelayBoardV3__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_neo_msgs2__msg__RelayBoardV3(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RelayBoardV3 = {
  "neo_msgs2::msg",
  "RelayBoardV3",
  _RelayBoardV3__cdr_serialize,
  _RelayBoardV3__cdr_deserialize,
  _RelayBoardV3__get_serialized_size,
  _RelayBoardV3__max_serialized_size
};

static rosidl_message_type_support_t _RelayBoardV3__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RelayBoardV3,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, neo_msgs2, msg, RelayBoardV3)() {
  return &_RelayBoardV3__type_support;
}

#if defined(__cplusplus)
}
#endif
