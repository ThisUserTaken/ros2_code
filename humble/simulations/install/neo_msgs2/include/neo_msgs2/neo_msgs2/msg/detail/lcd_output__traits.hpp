// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neo_msgs2:msg/LCDOutput.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__TRAITS_HPP_
#define NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neo_msgs2/msg/detail/lcd_output__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace neo_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const LCDOutput & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: msg_line
  {
    out << "msg_line: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_line, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LCDOutput & msg,
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

  // member: msg_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_line: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_line, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LCDOutput & msg, bool use_flow_style = false)
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
  const neo_msgs2::msg::LCDOutput & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const neo_msgs2::msg::LCDOutput & msg)
{
  return neo_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neo_msgs2::msg::LCDOutput>()
{
  return "neo_msgs2::msg::LCDOutput";
}

template<>
inline const char * name<neo_msgs2::msg::LCDOutput>()
{
  return "neo_msgs2/msg/LCDOutput";
}

template<>
struct has_fixed_size<neo_msgs2::msg::LCDOutput>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<neo_msgs2::msg::LCDOutput>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<neo_msgs2::msg::LCDOutput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__TRAITS_HPP_
