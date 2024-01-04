// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neo_msgs2:msg/KinematicsState.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__TRAITS_HPP_
#define NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neo_msgs2/msg/detail/kinematics_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace neo_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const KinematicsState & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: is_vel_cmd
  {
    out << "is_vel_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.is_vel_cmd, out);
    out << ", ";
  }

  // member: is_moving
  {
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KinematicsState & msg,
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

  // member: is_vel_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_vel_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.is_vel_cmd, out);
    out << "\n";
  }

  // member: is_moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.is_moving, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KinematicsState & msg, bool use_flow_style = false)
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
  const neo_msgs2::msg::KinematicsState & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const neo_msgs2::msg::KinematicsState & msg)
{
  return neo_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neo_msgs2::msg::KinematicsState>()
{
  return "neo_msgs2::msg::KinematicsState";
}

template<>
inline const char * name<neo_msgs2::msg::KinematicsState>()
{
  return "neo_msgs2/msg/KinematicsState";
}

template<>
struct has_fixed_size<neo_msgs2::msg::KinematicsState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<neo_msgs2::msg::KinematicsState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<neo_msgs2::msg::KinematicsState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__TRAITS_HPP_
