// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from neo_srvs2:srv/USBoardToggleSensor.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__US_BOARD_TOGGLE_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define NEO_SRVS2__SRV__DETAIL__US_BOARD_TOGGLE_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "neo_srvs2/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "neo_srvs2/srv/detail/us_board_toggle_sensor__struct.hpp"

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

namespace neo_srvs2
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_srvs2
cdr_serialize(
  const neo_srvs2::srv::USBoardToggleSensor_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_srvs2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  neo_srvs2::srv::USBoardToggleSensor_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_srvs2
get_serialized_size(
  const neo_srvs2::srv::USBoardToggleSensor_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_srvs2
max_serialized_size_USBoardToggleSensor_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace neo_srvs2

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_srvs2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, neo_srvs2, srv, USBoardToggleSensor_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "neo_srvs2/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "neo_srvs2/srv/detail/us_board_toggle_sensor__struct.hpp"

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

// already included above
// #include "fastcdr/Cdr.h"

namespace neo_srvs2
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_srvs2
cdr_serialize(
  const neo_srvs2::srv::USBoardToggleSensor_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_srvs2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  neo_srvs2::srv::USBoardToggleSensor_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_srvs2
get_serialized_size(
  const neo_srvs2::srv::USBoardToggleSensor_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_srvs2
max_serialized_size_USBoardToggleSensor_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace neo_srvs2

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_srvs2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, neo_srvs2, srv, USBoardToggleSensor_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "neo_srvs2/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neo_srvs2
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, neo_srvs2, srv, USBoardToggleSensor)();

#ifdef __cplusplus
}
#endif

#endif  // NEO_SRVS2__SRV__DETAIL__US_BOARD_TOGGLE_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
