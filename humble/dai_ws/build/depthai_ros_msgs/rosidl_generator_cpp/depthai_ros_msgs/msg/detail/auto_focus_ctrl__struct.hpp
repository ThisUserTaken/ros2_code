// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from depthai_ros_msgs:msg/AutoFocusCtrl.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__STRUCT_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__depthai_ros_msgs__msg__AutoFocusCtrl __attribute__((deprecated))
#else
# define DEPRECATED__depthai_ros_msgs__msg__AutoFocusCtrl __declspec(deprecated)
#endif

namespace depthai_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AutoFocusCtrl_
{
  using Type = AutoFocusCtrl_<ContainerAllocator>;

  explicit AutoFocusCtrl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->auto_focus_mode = 0;
      this->trigger_auto_focus = false;
    }
  }

  explicit AutoFocusCtrl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->auto_focus_mode = 0;
      this->trigger_auto_focus = false;
    }
  }

  // field types and members
  using _auto_focus_mode_type =
    uint8_t;
  _auto_focus_mode_type auto_focus_mode;
  using _trigger_auto_focus_type =
    bool;
  _trigger_auto_focus_type trigger_auto_focus;

  // setters for named parameter idiom
  Type & set__auto_focus_mode(
    const uint8_t & _arg)
  {
    this->auto_focus_mode = _arg;
    return *this;
  }
  Type & set__trigger_auto_focus(
    const bool & _arg)
  {
    this->trigger_auto_focus = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t AF_MODE_AUTO =
    0u;
  static constexpr uint8_t AF_MODE_MACRO =
    1u;
  static constexpr uint8_t AF_MODE_CONTINUOUS_VIDEO =
    2u;
  static constexpr uint8_t AF_MODE_CONTINUOUS_PICTURE =
    3u;
  static constexpr uint8_t AF_MODE_EDOF =
    4u;

  // pointer types
  using RawPtr =
    depthai_ros_msgs::msg::AutoFocusCtrl_<ContainerAllocator> *;
  using ConstRawPtr =
    const depthai_ros_msgs::msg::AutoFocusCtrl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<depthai_ros_msgs::msg::AutoFocusCtrl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<depthai_ros_msgs::msg::AutoFocusCtrl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::msg::AutoFocusCtrl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::msg::AutoFocusCtrl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::msg::AutoFocusCtrl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::msg::AutoFocusCtrl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<depthai_ros_msgs::msg::AutoFocusCtrl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<depthai_ros_msgs::msg::AutoFocusCtrl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__depthai_ros_msgs__msg__AutoFocusCtrl
    std::shared_ptr<depthai_ros_msgs::msg::AutoFocusCtrl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__depthai_ros_msgs__msg__AutoFocusCtrl
    std::shared_ptr<depthai_ros_msgs::msg::AutoFocusCtrl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoFocusCtrl_ & other) const
  {
    if (this->auto_focus_mode != other.auto_focus_mode) {
      return false;
    }
    if (this->trigger_auto_focus != other.trigger_auto_focus) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoFocusCtrl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoFocusCtrl_

// alias to use template instance with default allocator
using AutoFocusCtrl =
  depthai_ros_msgs::msg::AutoFocusCtrl_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoFocusCtrl_<ContainerAllocator>::AF_MODE_AUTO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoFocusCtrl_<ContainerAllocator>::AF_MODE_MACRO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoFocusCtrl_<ContainerAllocator>::AF_MODE_CONTINUOUS_VIDEO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoFocusCtrl_<ContainerAllocator>::AF_MODE_CONTINUOUS_PICTURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoFocusCtrl_<ContainerAllocator>::AF_MODE_EDOF;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__STRUCT_HPP_
