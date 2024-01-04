// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neo_msgs2:msg/IOBoard.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__IO_BOARD__TRAITS_HPP_
#define NEO_MSGS2__MSG__DETAIL__IO_BOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neo_msgs2/msg/detail/io_board__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace neo_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const IOBoard & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: digital_inputs
  {
    if (msg.digital_inputs.size() == 0) {
      out << "digital_inputs: []";
    } else {
      out << "digital_inputs: [";
      size_t pending_items = msg.digital_inputs.size();
      for (auto item : msg.digital_inputs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: digital_outputs
  {
    if (msg.digital_outputs.size() == 0) {
      out << "digital_outputs: []";
    } else {
      out << "digital_outputs: [";
      size_t pending_items = msg.digital_outputs.size();
      for (auto item : msg.digital_outputs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: analog_inputs
  {
    if (msg.analog_inputs.size() == 0) {
      out << "analog_inputs: []";
    } else {
      out << "analog_inputs: [";
      size_t pending_items = msg.analog_inputs.size();
      for (auto item : msg.analog_inputs) {
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
  const IOBoard & msg,
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

  // member: digital_inputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.digital_inputs.size() == 0) {
      out << "digital_inputs: []\n";
    } else {
      out << "digital_inputs:\n";
      for (auto item : msg.digital_inputs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: digital_outputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.digital_outputs.size() == 0) {
      out << "digital_outputs: []\n";
    } else {
      out << "digital_outputs:\n";
      for (auto item : msg.digital_outputs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: analog_inputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.analog_inputs.size() == 0) {
      out << "analog_inputs: []\n";
    } else {
      out << "analog_inputs:\n";
      for (auto item : msg.analog_inputs) {
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

inline std::string to_yaml(const IOBoard & msg, bool use_flow_style = false)
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
  const neo_msgs2::msg::IOBoard & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const neo_msgs2::msg::IOBoard & msg)
{
  return neo_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neo_msgs2::msg::IOBoard>()
{
  return "neo_msgs2::msg::IOBoard";
}

template<>
inline const char * name<neo_msgs2::msg::IOBoard>()
{
  return "neo_msgs2/msg/IOBoard";
}

template<>
struct has_fixed_size<neo_msgs2::msg::IOBoard>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<neo_msgs2::msg::IOBoard>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<neo_msgs2::msg::IOBoard>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEO_MSGS2__MSG__DETAIL__IO_BOARD__TRAITS_HPP_
