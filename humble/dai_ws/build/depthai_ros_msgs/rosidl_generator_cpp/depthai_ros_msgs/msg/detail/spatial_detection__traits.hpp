// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from depthai_ros_msgs:msg/SpatialDetection.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION__TRAITS_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "depthai_ros_msgs/msg/detail/spatial_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'results'
#include "vision_msgs/msg/detail/object_hypothesis__traits.hpp"
// Member 'bbox'
#include "vision_msgs/msg/detail/bounding_box2_d__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace depthai_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpatialDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: results
  {
    if (msg.results.size() == 0) {
      out << "results: []";
    } else {
      out << "results: [";
      size_t pending_items = msg.results.size();
      for (auto item : msg.results) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bbox
  {
    out << "bbox: ";
    to_flow_style_yaml(msg.bbox, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: is_tracking
  {
    out << "is_tracking: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tracking, out);
    out << ", ";
  }

  // member: tracking_id
  {
    out << "tracking_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpatialDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.results.size() == 0) {
      out << "results: []\n";
    } else {
      out << "results:\n";
      for (auto item : msg.results) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox:\n";
    to_block_style_yaml(msg.bbox, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: is_tracking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_tracking: ";
    rosidl_generator_traits::value_to_yaml(msg.is_tracking, out);
    out << "\n";
  }

  // member: tracking_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpatialDetection & msg, bool use_flow_style = false)
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
  const depthai_ros_msgs::msg::SpatialDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  depthai_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use depthai_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const depthai_ros_msgs::msg::SpatialDetection & msg)
{
  return depthai_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<depthai_ros_msgs::msg::SpatialDetection>()
{
  return "depthai_ros_msgs::msg::SpatialDetection";
}

template<>
inline const char * name<depthai_ros_msgs::msg::SpatialDetection>()
{
  return "depthai_ros_msgs/msg/SpatialDetection";
}

template<>
struct has_fixed_size<depthai_ros_msgs::msg::SpatialDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<depthai_ros_msgs::msg::SpatialDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<depthai_ros_msgs::msg::SpatialDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION__TRAITS_HPP_
