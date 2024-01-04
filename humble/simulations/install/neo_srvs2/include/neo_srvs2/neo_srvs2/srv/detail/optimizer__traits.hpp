// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neo_srvs2:srv/Optimizer.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__OPTIMIZER__TRAITS_HPP_
#define NEO_SRVS2__SRV__DETAIL__OPTIMIZER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neo_srvs2/srv/detail/optimizer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'current_pose'
// Member 'carrot_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'current_vel'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace neo_srvs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const Optimizer_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_pose
  {
    out << "current_pose: ";
    to_flow_style_yaml(msg.current_pose, out);
    out << ", ";
  }

  // member: current_vel
  {
    out << "current_vel: ";
    to_flow_style_yaml(msg.current_vel, out);
    out << ", ";
  }

  // member: carrot_pose
  {
    out << "carrot_pose: ";
    to_flow_style_yaml(msg.carrot_pose, out);
    out << ", ";
  }

  // member: goal_pose
  {
    out << "goal_pose: ";
    to_flow_style_yaml(msg.goal_pose, out);
    out << ", ";
  }

  // member: switch_opt
  {
    out << "switch_opt: ";
    rosidl_generator_traits::value_to_yaml(msg.switch_opt, out);
    out << ", ";
  }

  // member: control_interval
  {
    out << "control_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.control_interval, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Optimizer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_pose:\n";
    to_block_style_yaml(msg.current_pose, out, indentation + 2);
  }

  // member: current_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_vel:\n";
    to_block_style_yaml(msg.current_vel, out, indentation + 2);
  }

  // member: carrot_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carrot_pose:\n";
    to_block_style_yaml(msg.carrot_pose, out, indentation + 2);
  }

  // member: goal_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_pose:\n";
    to_block_style_yaml(msg.goal_pose, out, indentation + 2);
  }

  // member: switch_opt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "switch_opt: ";
    rosidl_generator_traits::value_to_yaml(msg.switch_opt, out);
    out << "\n";
  }

  // member: control_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_interval: ";
    rosidl_generator_traits::value_to_yaml(msg.control_interval, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Optimizer_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace neo_srvs2

namespace rosidl_generator_traits
{

[[deprecated("use neo_srvs2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const neo_srvs2::srv::Optimizer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_srvs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_srvs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const neo_srvs2::srv::Optimizer_Request & msg)
{
  return neo_srvs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<neo_srvs2::srv::Optimizer_Request>()
{
  return "neo_srvs2::srv::Optimizer_Request";
}

template<>
inline const char * name<neo_srvs2::srv::Optimizer_Request>()
{
  return "neo_srvs2/srv/Optimizer_Request";
}

template<>
struct has_fixed_size<neo_srvs2::srv::Optimizer_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::PoseStamped>::value && has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<neo_srvs2::srv::Optimizer_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::PoseStamped>::value && has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<neo_srvs2::srv::Optimizer_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'output_vel'
#include "geometry_msgs/msg/detail/twist_stamped__traits.hpp"

namespace neo_srvs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const Optimizer_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: output_vel
  {
    out << "output_vel: ";
    to_flow_style_yaml(msg.output_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Optimizer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: output_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_vel:\n";
    to_block_style_yaml(msg.output_vel, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Optimizer_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace neo_srvs2

namespace rosidl_generator_traits
{

[[deprecated("use neo_srvs2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const neo_srvs2::srv::Optimizer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_srvs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_srvs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const neo_srvs2::srv::Optimizer_Response & msg)
{
  return neo_srvs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<neo_srvs2::srv::Optimizer_Response>()
{
  return "neo_srvs2::srv::Optimizer_Response";
}

template<>
inline const char * name<neo_srvs2::srv::Optimizer_Response>()
{
  return "neo_srvs2/srv/Optimizer_Response";
}

template<>
struct has_fixed_size<neo_srvs2::srv::Optimizer_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::TwistStamped>::value> {};

template<>
struct has_bounded_size<neo_srvs2::srv::Optimizer_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::TwistStamped>::value> {};

template<>
struct is_message<neo_srvs2::srv::Optimizer_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<neo_srvs2::srv::Optimizer>()
{
  return "neo_srvs2::srv::Optimizer";
}

template<>
inline const char * name<neo_srvs2::srv::Optimizer>()
{
  return "neo_srvs2/srv/Optimizer";
}

template<>
struct has_fixed_size<neo_srvs2::srv::Optimizer>
  : std::integral_constant<
    bool,
    has_fixed_size<neo_srvs2::srv::Optimizer_Request>::value &&
    has_fixed_size<neo_srvs2::srv::Optimizer_Response>::value
  >
{
};

template<>
struct has_bounded_size<neo_srvs2::srv::Optimizer>
  : std::integral_constant<
    bool,
    has_bounded_size<neo_srvs2::srv::Optimizer_Request>::value &&
    has_bounded_size<neo_srvs2::srv::Optimizer_Response>::value
  >
{
};

template<>
struct is_service<neo_srvs2::srv::Optimizer>
  : std::true_type
{
};

template<>
struct is_service_request<neo_srvs2::srv::Optimizer_Request>
  : std::true_type
{
};

template<>
struct is_service_response<neo_srvs2::srv::Optimizer_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NEO_SRVS2__SRV__DETAIL__OPTIMIZER__TRAITS_HPP_
