// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neo_msgs2:msg/EmergencyStopState.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__EMERGENCY_STOP_STATE__TRAITS_HPP_
#define NEO_MSGS2__MSG__DETAIL__EMERGENCY_STOP_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neo_msgs2/msg/detail/emergency_stop_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace neo_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const EmergencyStopState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: emergency_button_stop
  {
    out << "emergency_button_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_button_stop, out);
    out << ", ";
  }

  // member: scanner_stop
  {
    out << "scanner_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.scanner_stop, out);
    out << ", ";
  }

  // member: software_stop
  {
    out << "software_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.software_stop, out);
    out << ", ";
  }

  // member: emergency_state
  {
    out << "emergency_state: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyStopState & msg,
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

  // member: emergency_button_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_button_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_button_stop, out);
    out << "\n";
  }

  // member: scanner_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scanner_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.scanner_stop, out);
    out << "\n";
  }

  // member: software_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.software_stop, out);
    out << "\n";
  }

  // member: emergency_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_state: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyStopState & msg, bool use_flow_style = false)
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
  const neo_msgs2::msg::EmergencyStopState & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const neo_msgs2::msg::EmergencyStopState & msg)
{
  return neo_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neo_msgs2::msg::EmergencyStopState>()
{
  return "neo_msgs2::msg::EmergencyStopState";
}

template<>
inline const char * name<neo_msgs2::msg::EmergencyStopState>()
{
  return "neo_msgs2/msg/EmergencyStopState";
}

template<>
struct has_fixed_size<neo_msgs2::msg::EmergencyStopState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<neo_msgs2::msg::EmergencyStopState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<neo_msgs2::msg::EmergencyStopState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEO_MSGS2__MSG__DETAIL__EMERGENCY_STOP_STATE__TRAITS_HPP_
