// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from neo_msgs2:msg/KinematicsState.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "neo_msgs2/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "neo_msgs2/msg/detail/kinematics_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace neo_msgs2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
cdr_serialize(
  const neo_msgs2::msg::KinematicsState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  neo_msgs2::msg::KinematicsState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
get_serialized_size(
  const neo_msgs2::msg::KinematicsState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
max_serialized_size_KinematicsState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace neo_msgs2

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_msgs2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, neo_msgs2, msg, KinematicsState)();

#ifdef __cplusplus
}
#endif

#endif  // NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
