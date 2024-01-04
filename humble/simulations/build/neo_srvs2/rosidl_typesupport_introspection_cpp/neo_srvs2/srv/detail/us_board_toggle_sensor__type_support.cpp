// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from neo_srvs2:srv/USBoardToggleSensor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "neo_srvs2/srv/detail/us_board_toggle_sensor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace neo_srvs2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void USBoardToggleSensor_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) neo_srvs2::srv::USBoardToggleSensor_Request(_init);
}

void USBoardToggleSensor_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<neo_srvs2::srv::USBoardToggleSensor_Request *>(message_memory);
  typed_message->~USBoardToggleSensor_Request();
}

size_t size_function__USBoardToggleSensor_Request__state(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__USBoardToggleSensor_Request__state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__USBoardToggleSensor_Request__state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__USBoardToggleSensor_Request__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__USBoardToggleSensor_Request__state(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__USBoardToggleSensor_Request__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__USBoardToggleSensor_Request__state(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember USBoardToggleSensor_Request_message_member_array[1] = {
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2::srv::USBoardToggleSensor_Request, state),  // bytes offset in struct
    nullptr,  // default value
    size_function__USBoardToggleSensor_Request__state,  // size() function pointer
    get_const_function__USBoardToggleSensor_Request__state,  // get_const(index) function pointer
    get_function__USBoardToggleSensor_Request__state,  // get(index) function pointer
    fetch_function__USBoardToggleSensor_Request__state,  // fetch(index, &value) function pointer
    assign_function__USBoardToggleSensor_Request__state,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers USBoardToggleSensor_Request_message_members = {
  "neo_srvs2::srv",  // message namespace
  "USBoardToggleSensor_Request",  // message name
  1,  // number of fields
  sizeof(neo_srvs2::srv::USBoardToggleSensor_Request),
  USBoardToggleSensor_Request_message_member_array,  // message members
  USBoardToggleSensor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  USBoardToggleSensor_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t USBoardToggleSensor_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &USBoardToggleSensor_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace neo_srvs2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<neo_srvs2::srv::USBoardToggleSensor_Request>()
{
  return &::neo_srvs2::srv::rosidl_typesupport_introspection_cpp::USBoardToggleSensor_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, neo_srvs2, srv, USBoardToggleSensor_Request)() {
  return &::neo_srvs2::srv::rosidl_typesupport_introspection_cpp::USBoardToggleSensor_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "neo_srvs2/srv/detail/us_board_toggle_sensor__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace neo_srvs2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void USBoardToggleSensor_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) neo_srvs2::srv::USBoardToggleSensor_Response(_init);
}

void USBoardToggleSensor_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<neo_srvs2::srv::USBoardToggleSensor_Response *>(message_memory);
  typed_message->~USBoardToggleSensor_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember USBoardToggleSensor_Response_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neo_srvs2::srv::USBoardToggleSensor_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers USBoardToggleSensor_Response_message_members = {
  "neo_srvs2::srv",  // message namespace
  "USBoardToggleSensor_Response",  // message name
  1,  // number of fields
  sizeof(neo_srvs2::srv::USBoardToggleSensor_Response),
  USBoardToggleSensor_Response_message_member_array,  // message members
  USBoardToggleSensor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  USBoardToggleSensor_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t USBoardToggleSensor_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &USBoardToggleSensor_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace neo_srvs2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<neo_srvs2::srv::USBoardToggleSensor_Response>()
{
  return &::neo_srvs2::srv::rosidl_typesupport_introspection_cpp::USBoardToggleSensor_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, neo_srvs2, srv, USBoardToggleSensor_Response)() {
  return &::neo_srvs2::srv::rosidl_typesupport_introspection_cpp::USBoardToggleSensor_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "neo_srvs2/srv/detail/us_board_toggle_sensor__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace neo_srvs2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers USBoardToggleSensor_service_members = {
  "neo_srvs2::srv",  // service namespace
  "USBoardToggleSensor",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<neo_srvs2::srv::USBoardToggleSensor>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t USBoardToggleSensor_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &USBoardToggleSensor_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace neo_srvs2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<neo_srvs2::srv::USBoardToggleSensor>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::neo_srvs2::srv::rosidl_typesupport_introspection_cpp::USBoardToggleSensor_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::neo_srvs2::srv::USBoardToggleSensor_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::neo_srvs2::srv::USBoardToggleSensor_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, neo_srvs2, srv, USBoardToggleSensor)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<neo_srvs2::srv::USBoardToggleSensor>();
}

#ifdef __cplusplus
}
#endif
