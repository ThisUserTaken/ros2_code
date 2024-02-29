// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from depthai_ros_msgs:msg/HandLandmark.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__TRAITS_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "depthai_ros_msgs/msg/detail/hand_landmark__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'landmark'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace depthai_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HandLandmark & msg,
  std::ostream & out)
{
  out << "{";
  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: lm_score
  {
    out << "lm_score: ";
    rosidl_generator_traits::value_to_yaml(msg.lm_score, out);
    out << ", ";
  }

  // member: landmark
  {
    if (msg.landmark.size() == 0) {
      out << "landmark: []";
    } else {
      out << "landmark: [";
      size_t pending_items = msg.landmark.size();
      for (auto item : msg.landmark) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: is_spatial
  {
    out << "is_spatial: ";
    rosidl_generator_traits::value_to_yaml(msg.is_spatial, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HandLandmark & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: lm_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lm_score: ";
    rosidl_generator_traits::value_to_yaml(msg.lm_score, out);
    out << "\n";
  }

  // member: landmark
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.landmark.size() == 0) {
      out << "landmark: []\n";
    } else {
      out << "landmark:\n";
      for (auto item : msg.landmark) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: is_spatial
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_spatial: ";
    rosidl_generator_traits::value_to_yaml(msg.is_spatial, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandLandmark & msg, bool use_flow_style = false)
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
  const depthai_ros_msgs::msg::HandLandmark & msg,
  std::ostream & out, size_t indentation = 0)
{
  depthai_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use depthai_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const depthai_ros_msgs::msg::HandLandmark & msg)
{
  return depthai_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<depthai_ros_msgs::msg::HandLandmark>()
{
  return "depthai_ros_msgs::msg::HandLandmark";
}

template<>
inline const char * name<depthai_ros_msgs::msg::HandLandmark>()
{
  return "depthai_ros_msgs/msg/HandLandmark";
}

template<>
struct has_fixed_size<depthai_ros_msgs::msg::HandLandmark>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<depthai_ros_msgs::msg::HandLandmark>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<depthai_ros_msgs::msg::HandLandmark>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__TRAITS_HPP_
