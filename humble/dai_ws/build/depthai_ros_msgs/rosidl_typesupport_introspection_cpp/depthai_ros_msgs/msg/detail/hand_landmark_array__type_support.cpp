// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from depthai_ros_msgs:msg/HandLandmarkArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "depthai_ros_msgs/msg/detail/hand_landmark_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace depthai_ros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HandLandmarkArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) depthai_ros_msgs::msg::HandLandmarkArray(_init);
}

void HandLandmarkArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<depthai_ros_msgs::msg::HandLandmarkArray *>(message_memory);
  typed_message->~HandLandmarkArray();
}

size_t size_function__HandLandmarkArray__landmarks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<depthai_ros_msgs::msg::HandLandmark> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HandLandmarkArray__landmarks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<depthai_ros_msgs::msg::HandLandmark> *>(untyped_member);
  return &member[index];
}

void * get_function__HandLandmarkArray__landmarks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<depthai_ros_msgs::msg::HandLandmark> *>(untyped_member);
  return &member[index];
}

void fetch_function__HandLandmarkArray__landmarks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const depthai_ros_msgs::msg::HandLandmark *>(
    get_const_function__HandLandmarkArray__landmarks(untyped_member, index));
  auto & value = *reinterpret_cast<depthai_ros_msgs::msg::HandLandmark *>(untyped_value);
  value = item;
}

void assign_function__HandLandmarkArray__landmarks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<depthai_ros_msgs::msg::HandLandmark *>(
    get_function__HandLandmarkArray__landmarks(untyped_member, index));
  const auto & value = *reinterpret_cast<const depthai_ros_msgs::msg::HandLandmark *>(untyped_value);
  item = value;
}

void resize_function__HandLandmarkArray__landmarks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<depthai_ros_msgs::msg::HandLandmark> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HandLandmarkArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs::msg::HandLandmarkArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "landmarks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<depthai_ros_msgs::msg::HandLandmark>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(depthai_ros_msgs::msg::HandLandmarkArray, landmarks),  // bytes offset in struct
    nullptr,  // default value
    size_function__HandLandmarkArray__landmarks,  // size() function pointer
    get_const_function__HandLandmarkArray__landmarks,  // get_const(index) function pointer
    get_function__HandLandmarkArray__landmarks,  // get(index) function pointer
    fetch_function__HandLandmarkArray__landmarks,  // fetch(index, &value) function pointer
    assign_function__HandLandmarkArray__landmarks,  // assign(index, value) function pointer
    resize_function__HandLandmarkArray__landmarks  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HandLandmarkArray_message_members = {
  "depthai_ros_msgs::msg",  // message namespace
  "HandLandmarkArray",  // message name
  2,  // number of fields
  sizeof(depthai_ros_msgs::msg::HandLandmarkArray),
  HandLandmarkArray_message_member_array,  // message members
  HandLandmarkArray_init_function,  // function to initialize message memory (memory has to be allocated)
  HandLandmarkArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HandLandmarkArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HandLandmarkArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace depthai_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<depthai_ros_msgs::msg::HandLandmarkArray>()
{
  return &::depthai_ros_msgs::msg::rosidl_typesupport_introspection_cpp::HandLandmarkArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, depthai_ros_msgs, msg, HandLandmarkArray)() {
  return &::depthai_ros_msgs::msg::rosidl_typesupport_introspection_cpp::HandLandmarkArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
