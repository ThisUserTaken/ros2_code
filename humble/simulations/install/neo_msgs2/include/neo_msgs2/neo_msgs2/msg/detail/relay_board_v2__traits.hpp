// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neo_msgs2:msg/RelayBoardV2.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V2__TRAITS_HPP_
#define NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neo_msgs2/msg/detail/relay_board_v2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace neo_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const RelayBoardV2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: relayboardv2_state
  {
    if (msg.relayboardv2_state.size() == 0) {
      out << "relayboardv2_state: []";
    } else {
      out << "relayboardv2_state: [";
      size_t pending_items = msg.relayboardv2_state.size();
      for (auto item : msg.relayboardv2_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: communication_state
  {
    out << "communication_state: ";
    rosidl_generator_traits::value_to_yaml(msg.communication_state, out);
    out << ", ";
  }

  // member: charging_state
  {
    out << "charging_state: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_state, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: charging_current
  {
    out << "charging_current: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_current, out);
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

  // member: keypad
  {
    if (msg.keypad.size() == 0) {
      out << "keypad: []";
    } else {
      out << "keypad: [";
      size_t pending_items = msg.keypad.size();
      for (auto item : msg.keypad) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: shutdown
  {
    out << "shutdown: ";
    rosidl_generator_traits::value_to_yaml(msg.shutdown, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RelayBoardV2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: relayboardv2_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.relayboardv2_state.size() == 0) {
      out << "relayboardv2_state: []\n";
    } else {
      out << "relayboardv2_state:\n";
      for (auto item : msg.relayboardv2_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: communication_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "communication_state: ";
    rosidl_generator_traits::value_to_yaml(msg.communication_state, out);
    out << "\n";
  }

  // member: charging_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_state: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_state, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: charging_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_current: ";
    rosidl_generator_traits::value_to_yaml(msg.charging_current, out);
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

  // member: keypad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.keypad.size() == 0) {
      out << "keypad: []\n";
    } else {
      out << "keypad:\n";
      for (auto item : msg.keypad) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: shutdown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shutdown: ";
    rosidl_generator_traits::value_to_yaml(msg.shutdown, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RelayBoardV2 & msg, bool use_flow_style = false)
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
  const neo_msgs2::msg::RelayBoardV2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const neo_msgs2::msg::RelayBoardV2 & msg)
{
  return neo_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neo_msgs2::msg::RelayBoardV2>()
{
  return "neo_msgs2::msg::RelayBoardV2";
}

template<>
inline const char * name<neo_msgs2::msg::RelayBoardV2>()
{
  return "neo_msgs2/msg/RelayBoardV2";
}

template<>
struct has_fixed_size<neo_msgs2::msg::RelayBoardV2>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<neo_msgs2::msg::RelayBoardV2>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<neo_msgs2::msg::RelayBoardV2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V2__TRAITS_HPP_
