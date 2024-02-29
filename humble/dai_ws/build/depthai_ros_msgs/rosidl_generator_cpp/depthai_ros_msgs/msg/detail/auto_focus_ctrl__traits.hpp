// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from depthai_ros_msgs:msg/AutoFocusCtrl.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__TRAITS_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "depthai_ros_msgs/msg/detail/auto_focus_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace depthai_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AutoFocusCtrl & msg,
  std::ostream & out)
{
  out << "{";
  // member: auto_focus_mode
  {
    out << "auto_focus_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_focus_mode, out);
    out << ", ";
  }

  // member: trigger_auto_focus
  {
    out << "trigger_auto_focus: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_auto_focus, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AutoFocusCtrl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: auto_focus_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_focus_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_focus_mode, out);
    out << "\n";
  }

  // member: trigger_auto_focus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger_auto_focus: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_auto_focus, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AutoFocusCtrl & msg, bool use_flow_style = false)
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

}  // namespace depthai_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use depthai_ros_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const depthai_ros_msgs::msg::AutoFocusCtrl & msg,
  std::ostream & out, size_t indentation = 0)
{
  depthai_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use depthai_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const depthai_ros_msgs::msg::AutoFocusCtrl & msg)
{
  return depthai_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<depthai_ros_msgs::msg::AutoFocusCtrl>()
{
  return "depthai_ros_msgs::msg::AutoFocusCtrl";
}

template<>
inline const char * name<depthai_ros_msgs::msg::AutoFocusCtrl>()
{
  return "depthai_ros_msgs/msg/AutoFocusCtrl";
}

template<>
struct has_fixed_size<depthai_ros_msgs::msg::AutoFocusCtrl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<depthai_ros_msgs::msg::AutoFocusCtrl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<depthai_ros_msgs::msg::AutoFocusCtrl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__TRAITS_HPP_
