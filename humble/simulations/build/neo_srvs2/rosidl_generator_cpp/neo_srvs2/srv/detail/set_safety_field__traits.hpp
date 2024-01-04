// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neo_srvs2:srv/SetSafetyField.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__SET_SAFETY_FIELD__TRAITS_HPP_
#define NEO_SRVS2__SRV__DETAIL__SET_SAFETY_FIELD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neo_srvs2/srv/detail/set_safety_field__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace neo_srvs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSafetyField_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: field_id
  {
    out << "field_id: ";
    rosidl_generator_traits::value_to_yaml(msg.field_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSafetyField_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: field_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "field_id: ";
    rosidl_generator_traits::value_to_yaml(msg.field_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSafetyField_Request & msg, bool use_flow_style = false)
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
  const neo_srvs2::srv::SetSafetyField_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_srvs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_srvs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const neo_srvs2::srv::SetSafetyField_Request & msg)
{
  return neo_srvs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<neo_srvs2::srv::SetSafetyField_Request>()
{
  return "neo_srvs2::srv::SetSafetyField_Request";
}

template<>
inline const char * name<neo_srvs2::srv::SetSafetyField_Request>()
{
  return "neo_srvs2/srv/SetSafetyField_Request";
}

template<>
struct has_fixed_size<neo_srvs2::srv::SetSafetyField_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<neo_srvs2::srv::SetSafetyField_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<neo_srvs2::srv::SetSafetyField_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace neo_srvs2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSafetyField_Response & msg,
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
  const SetSafetyField_Response & msg,
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

inline std::string to_yaml(const SetSafetyField_Response & msg, bool use_flow_style = false)
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
  const neo_srvs2::srv::SetSafetyField_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  neo_srvs2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neo_srvs2::srv::to_yaml() instead")]]
inline std::string to_yaml(const neo_srvs2::srv::SetSafetyField_Response & msg)
{
  return neo_srvs2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<neo_srvs2::srv::SetSafetyField_Response>()
{
  return "neo_srvs2::srv::SetSafetyField_Response";
}

template<>
inline const char * name<neo_srvs2::srv::SetSafetyField_Response>()
{
  return "neo_srvs2/srv/SetSafetyField_Response";
}

template<>
struct has_fixed_size<neo_srvs2::srv::SetSafetyField_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<neo_srvs2::srv::SetSafetyField_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<neo_srvs2::srv::SetSafetyField_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<neo_srvs2::srv::SetSafetyField>()
{
  return "neo_srvs2::srv::SetSafetyField";
}

template<>
inline const char * name<neo_srvs2::srv::SetSafetyField>()
{
  return "neo_srvs2/srv/SetSafetyField";
}

template<>
struct has_fixed_size<neo_srvs2::srv::SetSafetyField>
  : std::integral_constant<
    bool,
    has_fixed_size<neo_srvs2::srv::SetSafetyField_Request>::value &&
    has_fixed_size<neo_srvs2::srv::SetSafetyField_Response>::value
  >
{
};

template<>
struct has_bounded_size<neo_srvs2::srv::SetSafetyField>
  : std::integral_constant<
    bool,
    has_bounded_size<neo_srvs2::srv::SetSafetyField_Request>::value &&
    has_bounded_size<neo_srvs2::srv::SetSafetyField_Response>::value
  >
{
};

template<>
struct is_service<neo_srvs2::srv::SetSafetyField>
  : std::true_type
{
};

template<>
struct is_service_request<neo_srvs2::srv::SetSafetyField_Request>
  : std::true_type
{
};

template<>
struct is_service_response<neo_srvs2::srv::SetSafetyField_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NEO_SRVS2__SRV__DETAIL__SET_SAFETY_FIELD__TRAITS_HPP_
