// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from depthai_ros_msgs:msg/HandLandmarkArray.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK_ARRAY__TRAITS_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "depthai_ros_msgs/msg/detail/hand_landmark_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'landmarks'
#include "depthai_ros_msgs/msg/detail/hand_landmark__traits.hpp"

namespace depthai_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HandLandmarkArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: landmarks
  {
    if (msg.landmarks.size() == 0) {
      out << "landmarks: []";
    } else {
      out << "landmarks: [";
      size_t pending_items = msg.landmarks.size();
      for (auto item : msg.landmarks) {
        to_flow_style_yaml(item, out);
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
  const HandLandmarkArray & msg,
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

  // member: landmarks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.landmarks.size() == 0) {
      out << "landmarks: []\n";
    } else {
      out << "landmarks:\n";
      for (auto item : msg.landmarks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandLandmarkArray & msg, bool use_flow_style = false)
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
  const depthai_ros_msgs::msg::HandLandmarkArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  depthai_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use depthai_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const depthai_ros_msgs::msg::HandLandmarkArray & msg)
{
  return depthai_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<depthai_ros_msgs::msg::HandLandmarkArray>()
{
  return "depthai_ros_msgs::msg::HandLandmarkArray";
}

template<>
inline const char * name<depthai_ros_msgs::msg::HandLandmarkArray>()
{
  return "depthai_ros_msgs/msg/HandLandmarkArray";
}

template<>
struct has_fixed_size<depthai_ros_msgs::msg::HandLandmarkArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<depthai_ros_msgs::msg::HandLandmarkArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<depthai_ros_msgs::msg::HandLandmarkArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK_ARRAY__TRAITS_HPP_
