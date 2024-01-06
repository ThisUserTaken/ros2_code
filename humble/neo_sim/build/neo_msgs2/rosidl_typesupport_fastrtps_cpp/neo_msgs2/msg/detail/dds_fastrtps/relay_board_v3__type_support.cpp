// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from neo_msgs2:msg/RelayBoardV3.idl
// generated code does not contain a copyright notice
#include "neo_msgs2/msg/detail/relay_board_v3__rosidl_typesupport_fastrtps_cpp.hpp"
#include "neo_msgs2/msg/detail/relay_board_v3__struct.hpp"

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
  const neo_msgs2::msg::RelayBoardV3 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: time
  cdr << ros_message.time;
  // Member: firmware_version
  cdr << ros_message.firmware_version;
  // Member: uptime
  cdr << ros_message.uptime;
  // Member: ambient_temperature
  cdr << ros_message.ambient_temperature;
  // Member: relay_states
  {
    cdr << ros_message.relay_states;
  }
  // Member: digital_input_states
  {
    cdr << ros_message.digital_input_states;
  }
  // Member: keypad_button_states
  {
    cdr << ros_message.keypad_button_states;
  }
  // Member: key_switch_off_state
  cdr << (ros_message.key_switch_off_state ? true : false);
  // Member: release_structure_state
  cdr << (ros_message.release_structure_state ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  neo_msgs2::msg::RelayBoardV3 & ros_message)
{
  // Member: time
  cdr >> ros_message.time;

  // Member: firmware_version
  cdr >> ros_message.firmware_version;

  // Member: uptime
  cdr >> ros_message.uptime;

  // Member: ambient_temperature
  cdr >> ros_message.ambient_temperature;

  // Member: relay_states
  {
    cdr >> ros_message.relay_states;
  }

  // Member: digital_input_states
  {
    cdr >> ros_message.digital_input_states;
  }

  // Member: keypad_button_states
  {
    cdr >> ros_message.keypad_button_states;
  }

  // Member: key_switch_off_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_switch_off_state = tmp ? true : false;
  }

  // Member: release_structure_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.release_structure_state = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
get_serialized_size(
  const neo_msgs2::msg::RelayBoardV3 & ros_message,
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
  // Member: firmware_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.firmware_version.size() + 1);
  // Member: uptime
  {
    size_t item_size = sizeof(ros_message.uptime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ambient_temperature
  {
    size_t item_size = sizeof(ros_message.ambient_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: relay_states
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.relay_states[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: digital_input_states
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.digital_input_states[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: keypad_button_states
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.keypad_button_states[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_switch_off_state
  {
    size_t item_size = sizeof(ros_message.key_switch_off_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: release_structure_state
  {
    size_t item_size = sizeof(ros_message.release_structure_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
max_serialized_size_RelayBoardV3(
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

  // Member: firmware_version
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

  // Member: uptime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ambient_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: relay_states
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: digital_input_states
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: keypad_button_states
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_switch_off_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: release_structure_state
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
    using DataType = neo_msgs2::msg::RelayBoardV3;
    is_plain =
      (
      offsetof(DataType, release_structure_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RelayBoardV3__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const neo_msgs2::msg::RelayBoardV3 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RelayBoardV3__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<neo_msgs2::msg::RelayBoardV3 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RelayBoardV3__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const neo_msgs2::msg::RelayBoardV3 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RelayBoardV3__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RelayBoardV3(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RelayBoardV3__callbacks = {
  "neo_msgs2::msg",
  "RelayBoardV3",
  _RelayBoardV3__cdr_serialize,
  _RelayBoardV3__cdr_deserialize,
  _RelayBoardV3__get_serialized_size,
  _RelayBoardV3__max_serialized_size
};

static rosidl_message_type_support_t _RelayBoardV3__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RelayBoardV3__callbacks,
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
get_message_type_support_handle<neo_msgs2::msg::RelayBoardV3>()
{
  return &neo_msgs2::msg::typesupport_fastrtps_cpp::_RelayBoardV3__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, neo_msgs2, msg, RelayBoardV3)() {
  return &neo_msgs2::msg::typesupport_fastrtps_cpp::_RelayBoardV3__handle;
}

#ifdef __cplusplus
}
#endif
