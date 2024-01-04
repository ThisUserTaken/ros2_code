// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neo_msgs2:msg/Keypad.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__KEYPAD__TRAITS_HPP_
#define NEO_MSGS2__MSG__DETAIL__KEYPAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neo_msgs2/msg/detail/keypad__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace neo_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const Keypad & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: button
  {
    if (msg.button.size() == 0) {
      out << "button: []";
    } else {
      out << "button: [";
      size_t pending_items = msg.button.size();
      for (auto item : msg.button) {
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
  const Keypad & msg,
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

  // member: button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.button.size() == 0) {
      out << "button: []\n";
    } else {
      out << "button:\n";
      for (auto item : msg.button) {
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

inline std::string to_yaml(const Keypad & msg, bool use_flow_style = false)
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
  const neo_msgs2::msg::Keypad & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const neo_msgs2::msg::Keypad & msg)
{
  return neo_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neo_msgs2::msg::Keypad>()
{
  return "neo_msgs2::msg::Keypad";
}

template<>
inline const char * name<neo_msgs2::msg::Keypad>()
{
  return "neo_msgs2/msg/Keypad";
}

template<>
struct has_fixed_size<neo_msgs2::msg::Keypad>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<neo_msgs2::msg::Keypad>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<neo_msgs2::msg::Keypad>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEO_MSGS2__MSG__DETAIL__KEYPAD__TRAITS_HPP_
