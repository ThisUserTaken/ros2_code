// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neo_msgs2:msg/RelayBoardV3.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V3__TRAITS_HPP_
#define NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V3__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neo_msgs2/msg/detail/relay_board_v3__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace neo_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const RelayBoardV3 & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: firmware_version
  {
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << ", ";
  }

  // member: uptime
  {
    out << "uptime: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime, out);
    out << ", ";
  }

  // member: ambient_temperature
  {
    out << "ambient_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.ambient_temperature, out);
    out << ", ";
  }

  // member: relay_states
  {
    if (msg.relay_states.size() == 0) {
      out << "relay_states: []";
    } else {
      out << "relay_states: [";
      size_t pending_items = msg.relay_states.size();
      for (auto item : msg.relay_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: digital_input_states
  {
    if (msg.digital_input_states.size() == 0) {
      out << "digital_input_states: []";
    } else {
      out << "digital_input_states: [";
      size_t pending_items = msg.digital_input_states.size();
      for (auto item : msg.digital_input_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: keypad_button_states
  {
    if (msg.keypad_button_states.size() == 0) {
      out << "keypad_button_states: []";
    } else {
      out << "keypad_button_states: [";
      size_t pending_items = msg.keypad_button_states.size();
      for (auto item : msg.keypad_button_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: key_switch_off_state
  {
    out << "key_switch_off_state: ";
    rosidl_generator_traits::value_to_yaml(msg.key_switch_off_state, out);
    out << ", ";
  }

  // member: release_structure_state
  {
    out << "release_structure_state: ";
    rosidl_generator_traits::value_to_yaml(msg.release_structure_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RelayBoardV3 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }

  // member: uptime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uptime: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime, out);
    out << "\n";
  }

  // member: ambient_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ambient_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.ambient_temperature, out);
    out << "\n";
  }

  // member: relay_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.relay_states.size() == 0) {
      out << "relay_states: []\n";
    } else {
      out << "relay_states:\n";
      for (auto item : msg.relay_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: digital_input_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.digital_input_states.size() == 0) {
      out << "digital_input_states: []\n";
    } else {
      out << "digital_input_states:\n";
      for (auto item : msg.digital_input_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: keypad_button_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.keypad_button_states.size() == 0) {
      out << "keypad_button_states: []\n";
    } else {
      out << "keypad_button_states:\n";
      for (auto item : msg.keypad_button_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: key_switch_off_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_switch_off_state: ";
    rosidl_generator_traits::value_to_yaml(msg.key_switch_off_state, out);
    out << "\n";
  }

  // member: release_structure_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "release_structure_state: ";
    rosidl_generator_traits::value_to_yaml(msg.release_structure_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RelayBoardV3 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace neo_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use neo_msgs2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const neo_msgs2::msg::RelayBoardV3 & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const neo_msgs2::msg::RelayBoardV3 & msg)
{
  return neo_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neo_msgs2::msg::RelayBoardV3>()
{
  return "neo_msgs2::msg::RelayBoardV3";
}

template<>
inline const char * name<neo_msgs2::msg::RelayBoardV3>()
{
  return "neo_msgs2/msg/RelayBoardV3";
}

template<>
struct has_fixed_size<neo_msgs2::msg::RelayBoardV3>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<neo_msgs2::msg::RelayBoardV3>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<neo_msgs2::msg::RelayBoardV3>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V3__TRAITS_HPP_
