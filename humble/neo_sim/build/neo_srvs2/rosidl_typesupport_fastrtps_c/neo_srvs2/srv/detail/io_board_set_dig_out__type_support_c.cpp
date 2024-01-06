// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from neo_srvs2:srv/IOBoardSetDigOut.idl
// generated code does not contain a copyright notice
#include "neo_srvs2/srv/detail/io_board_set_dig_out__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "neo_srvs2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "neo_srvs2/srv/detail/io_board_set_dig_out__struct.h"
#include "neo_srvs2/srv/detail/io_board_set_dig_out__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _IOBoardSetDigOut_Request__ros_msg_type = neo_srvs2__srv__IOBoardSetDigOut_Request;

static bool _IOBoardSetDigOut_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IOBoardSetDigOut_Request__ros_msg_type * ros_message = static_cast<const _IOBoardSetDigOut_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: state
  {
    cdr << (ros_message->state ? true : false);
  }

  return true;
}

static bool _IOBoardSetDigOut_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IOBoardSetDigOut_Request__ros_msg_type * ros_message = static_cast<_IOBoardSetDigOut_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->state = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_neo_srvs2
size_t get_serialized_size_neo_srvs2__srv__IOBoardSetDigOut_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IOBoardSetDigOut_Request__ros_msg_type * ros_message = static_cast<const _IOBoardSetDigOut_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IOBoardSetDigOut_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_neo_srvs2__srv__IOBoardSetDigOut_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_neo_srvs2
size_t max_serialized_size_neo_srvs2__srv__IOBoardSetDigOut_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = neo_srvs2__srv__IOBoardSetDigOut_Request;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _IOBoardSetDigOut_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_neo_srvs2__srv__IOBoardSetDigOut_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IOBoardSetDigOut_Request = {
  "neo_srvs2::srv",
  "IOBoardSetDigOut_Request",
  _IOBoardSetDigOut_Request__cdr_serialize,
  _IOBoardSetDigOut_Request__cdr_deserialize,
  _IOBoardSetDigOut_Request__get_serialized_size,
  _IOBoardSetDigOut_Request__max_serialized_size
};

static rosidl_message_type_support_t _IOBoardSetDigOut_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IOBoardSetDigOut_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, neo_srvs2, srv, IOBoardSetDigOut_Request)() {
  return &_IOBoardSetDigOut_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "neo_srvs2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "neo_srvs2/srv/detail/io_board_set_dig_out__struct.h"
// already included above
// #include "neo_srvs2/srv/detail/io_board_set_dig_out__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _IOBoardSetDigOut_Response__ros_msg_type = neo_srvs2__srv__IOBoardSetDigOut_Response;

static bool _IOBoardSetDigOut_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IOBoardSetDigOut_Response__ros_msg_type * ros_message = static_cast<const _IOBoardSetDigOut_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _IOBoardSetDigOut_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IOBoardSetDigOut_Response__ros_msg_type * ros_message = static_cast<_IOBoardSetDigOut_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_neo_srvs2
size_t get_serialized_size_neo_srvs2__srv__IOBoardSetDigOut_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IOBoardSetDigOut_Response__ros_msg_type * ros_message = static_cast<const _IOBoardSetDigOut_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IOBoardSetDigOut_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_neo_srvs2__srv__IOBoardSetDigOut_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_neo_srvs2
size_t max_serialized_size_neo_srvs2__srv__IOBoardSetDigOut_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = neo_srvs2__srv__IOBoardSetDigOut_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _IOBoardSetDigOut_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_neo_srvs2__srv__IOBoardSetDigOut_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IOBoardSetDigOut_Response = {
  "neo_srvs2::srv",
  "IOBoardSetDigOut_Response",
  _IOBoardSetDigOut_Response__cdr_serialize,
  _IOBoardSetDigOut_Response__cdr_deserialize,
  _IOBoardSetDigOut_Response__get_serialized_size,
  _IOBoardSetDigOut_Response__max_serialized_size
};

static rosidl_message_type_support_t _IOBoardSetDigOut_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IOBoardSetDigOut_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, neo_srvs2, srv, IOBoardSetDigOut_Response)() {
  return &_IOBoardSetDigOut_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "neo_srvs2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "neo_srvs2/srv/io_board_set_dig_out.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t IOBoardSetDigOut__callbacks = {
  "neo_srvs2::srv",
  "IOBoardSetDigOut",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, neo_srvs2, srv, IOBoardSetDigOut_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, neo_srvs2, srv, IOBoardSetDigOut_Response)(),
};

static rosidl_service_type_support_t IOBoardSetDigOut__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &IOBoardSetDigOut__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, neo_srvs2, srv, IOBoardSetDigOut)() {
  return &IOBoardSetDigOut__handle;
}

#if defined(__cplusplus)
}
#endif
