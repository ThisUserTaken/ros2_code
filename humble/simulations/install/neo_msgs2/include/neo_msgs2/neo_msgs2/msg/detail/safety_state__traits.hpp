// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neo_msgs2:msg/SafetyState.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__SAFETY_STATE__TRAITS_HPP_
#define NEO_MSGS2__MSG__DETAIL__SAFETY_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neo_msgs2/msg/detail/safety_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace neo_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const SafetyState & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: current_safety_field
  {
    out << "current_safety_field: ";
    rosidl_generator_traits::value_to_yaml(msg.current_safety_field, out);
    out << ", ";
  }

  // member: triggered_cutoff_paths
  {
    if (msg.triggered_cutoff_paths.size() == 0) {
      out << "triggered_cutoff_paths: []";
    } else {
      out << "triggered_cutoff_paths: [";
      size_t pending_items = msg.triggered_cutoff_paths.size();
      for (auto item : msg.triggered_cutoff_paths) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SafetyState & msg,
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

  // member: current_safety_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_safety_field: ";
    rosidl_generator_traits::value_to_yaml(msg.current_safety_field, out);
    out << "\n";
  }

  // member: triggered_cutoff_paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.triggered_cutoff_paths.size() == 0) {
      out << "triggered_cutoff_paths: []\n";
    } else {
      out << "triggered_cutoff_paths:\n";
      for (auto item : msg.triggered_cutoff_paths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SafetyState & msg, bool use_flow_style = false)
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
  const neo_msgs2::msg::SafetyState & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const neo_msgs2::msg::SafetyState & msg)
{
  return neo_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neo_msgs2::msg::SafetyState>()
{
  return "neo_msgs2::msg::SafetyState";
}

template<>
inline const char * name<neo_msgs2::msg::SafetyState>()
{
  return "neo_msgs2/msg/SafetyState";
}

template<>
struct has_fixed_size<neo_msgs2::msg::SafetyState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<neo_msgs2::msg::SafetyState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<neo_msgs2::msg::SafetyState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEO_MSGS2__MSG__DETAIL__SAFETY_STATE__TRAITS_HPP_
