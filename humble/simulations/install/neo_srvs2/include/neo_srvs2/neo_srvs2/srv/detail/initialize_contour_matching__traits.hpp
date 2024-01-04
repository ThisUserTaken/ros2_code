// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neo_srvs2:srv/InitializeContourMatching.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__INITIALIZE_CONTOUR_MATCHING__TRAITS_HPP_
#define NEO_SRVS2__SRV__DETAIL__INITIALIZE_CONTOUR_MATCHING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neo_srvs2/srv/detail/initialize_contour_matching__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'init_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace neo_srvs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const InitializeContourMatching_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: init_pose
  {
    out << "init_pose: ";
    to_flow_style_yaml(msg.init_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InitializeContourMatching_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: init_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_pose:\n";
    to_block_style_yaml(msg.init_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InitializeContourMatching_Request & msg, bool use_flow_style = false)
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
  const neo_srvs2::srv::InitializeContourMatching_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_srvs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_srvs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const neo_srvs2::srv::InitializeContourMatching_Request & msg)
{
  return neo_srvs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<neo_srvs2::srv::InitializeContourMatching_Request>()
{
  return "neo_srvs2::srv::InitializeContourMatching_Request";
}

template<>
inline const char * name<neo_srvs2::srv::InitializeContourMatching_Request>()
{
  return "neo_srvs2/srv/InitializeContourMatching_Request";
}

template<>
struct has_fixed_size<neo_srvs2::srv::InitializeContourMatching_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<neo_srvs2::srv::InitializeContourMatching_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<neo_srvs2::srv::InitializeContourMatching_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace neo_srvs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const InitializeContourMatching_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InitializeContourMatching_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InitializeContourMatching_Response & msg, bool use_flow_style = false)
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
  const neo_srvs2::srv::InitializeContourMatching_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_srvs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_srvs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const neo_srvs2::srv::InitializeContourMatching_Response & msg)
{
  return neo_srvs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<neo_srvs2::srv::InitializeContourMatching_Response>()
{
  return "neo_srvs2::srv::InitializeContourMatching_Response";
}

template<>
inline const char * name<neo_srvs2::srv::InitializeContourMatching_Response>()
{
  return "neo_srvs2/srv/InitializeContourMatching_Response";
}

template<>
struct has_fixed_size<neo_srvs2::srv::InitializeContourMatching_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<neo_srvs2::srv::InitializeContourMatching_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<neo_srvs2::srv::InitializeContourMatching_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<neo_srvs2::srv::InitializeContourMatching>()
{
  return "neo_srvs2::srv::InitializeContourMatching";
}

template<>
inline const char * name<neo_srvs2::srv::InitializeContourMatching>()
{
  return "neo_srvs2/srv/InitializeContourMatching";
}

template<>
struct has_fixed_size<neo_srvs2::srv::InitializeContourMatching>
  : std::integral_constant<
    bool,
    has_fixed_size<neo_srvs2::srv::InitializeContourMatching_Request>::value &&
    has_fixed_size<neo_srvs2::srv::InitializeContourMatching_Response>::value
  >
{
};

template<>
struct has_bounded_size<neo_srvs2::srv::InitializeContourMatching>
  : std::integral_constant<
    bool,
    has_bounded_size<neo_srvs2::srv::InitializeContourMatching_Request>::value &&
    has_bounded_size<neo_srvs2::srv::InitializeContourMatching_Response>::value
  >
{
};

template<>
struct is_service<neo_srvs2::srv::InitializeContourMatching>
  : std::true_type
{
};

template<>
struct is_service_request<neo_srvs2::srv::InitializeContourMatching_Request>
  : std::true_type
{
};

template<>
struct is_service_response<neo_srvs2::srv::InitializeContourMatching_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NEO_SRVS2__SRV__DETAIL__INITIALIZE_CONTOUR_MATCHING__TRAITS_HPP_
