// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neo_msgs2:msg/USBoard.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__US_BOARD__TRAITS_HPP_
#define NEO_MSGS2__MSG__DETAIL__US_BOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neo_msgs2/msg/detail/us_board__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace neo_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const USBoard & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensor
  {
    if (msg.sensor.size() == 0) {
      out << "sensor: []";
    } else {
      out << "sensor: [";
      size_t pending_items = msg.sensor.size();
      for (auto item : msg.sensor) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: analog
  {
    if (msg.analog.size() == 0) {
      out << "analog: []";
    } else {
      out << "analog: [";
      size_t pending_items = msg.analog.size();
      for (auto item : msg.analog) {
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
  const USBoard & msg,
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

  // member: sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor.size() == 0) {
      out << "sensor: []\n";
    } else {
      out << "sensor:\n";
      for (auto item : msg.sensor) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: analog
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.analog.size() == 0) {
      out << "analog: []\n";
    } else {
      out << "analog:\n";
      for (auto item : msg.analog) {
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

inline std::string to_yaml(const USBoard & msg, bool use_flow_style = false)
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
  const neo_msgs2::msg::USBoard & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const neo_msgs2::msg::USBoard & msg)
{
  return neo_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neo_msgs2::msg::USBoard>()
{
  return "neo_msgs2::msg::USBoard";
}

template<>
inline const char * name<neo_msgs2::msg::USBoard>()
{
  return "neo_msgs2/msg/USBoard";
}

template<>
struct has_fixed_size<neo_msgs2::msg::USBoard>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<neo_msgs2::msg::USBoard>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<neo_msgs2::msg::USBoard>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEO_MSGS2__MSG__DETAIL__US_BOARD__TRAITS_HPP_
