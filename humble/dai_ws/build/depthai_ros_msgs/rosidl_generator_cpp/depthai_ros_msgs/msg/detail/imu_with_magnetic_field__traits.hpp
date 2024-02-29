// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from depthai_ros_msgs:msg/ImuWithMagneticField.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__IMU_WITH_MAGNETIC_FIELD__TRAITS_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__IMU_WITH_MAGNETIC_FIELD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "depthai_ros_msgs/msg/detail/imu_with_magnetic_field__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__traits.hpp"
// Member 'field'
#include "sensor_msgs/msg/detail/magnetic_field__traits.hpp"

namespace depthai_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImuWithMagneticField & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: imu
  {
    out << "imu: ";
    to_flow_style_yaml(msg.imu, out);
    out << ", ";
  }

  // member: field
  {
    out << "field: ";
    to_flow_style_yaml(msg.field, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuWithMagneticField & msg,
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

  // member: imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu:\n";
    to_block_style_yaml(msg.imu, out, indentation + 2);
  }

  // member: field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "field:\n";
    to_block_style_yaml(msg.field, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuWithMagneticField & msg, bool use_flow_style = false)
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
  const depthai_ros_msgs::msg::ImuWithMagneticField & msg,
  std::ostream & out, size_t indentation = 0)
{
  depthai_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use depthai_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const depthai_ros_msgs::msg::ImuWithMagneticField & msg)
{
  return depthai_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<depthai_ros_msgs::msg::ImuWithMagneticField>()
{
  return "depthai_ros_msgs::msg::ImuWithMagneticField";
}

template<>
inline const char * name<depthai_ros_msgs::msg::ImuWithMagneticField>()
{
  return "depthai_ros_msgs/msg/ImuWithMagneticField";
}

template<>
struct has_fixed_size<depthai_ros_msgs::msg::ImuWithMagneticField>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Imu>::value && has_fixed_size<sensor_msgs::msg::MagneticField>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<depthai_ros_msgs::msg::ImuWithMagneticField>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Imu>::value && has_bounded_size<sensor_msgs::msg::MagneticField>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<depthai_ros_msgs::msg::ImuWithMagneticField>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__IMU_WITH_MAGNETIC_FIELD__TRAITS_HPP_
