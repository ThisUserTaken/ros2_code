// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neo_msgs2:msg/EmergencyStopState.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__EMERGENCY_STOP_STATE__STRUCT_HPP_
#define NEO_MSGS2__MSG__DETAIL__EMERGENCY_STOP_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__neo_msgs2__msg__EmergencyStopState __attribute__((deprecated))
#else
# define DEPRECATED__neo_msgs2__msg__EmergencyStopState __declspec(deprecated)
#endif

namespace neo_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EmergencyStopState_
{
  using Type = EmergencyStopState_<ContainerAllocator>;

  explicit EmergencyStopState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency_button_stop = false;
      this->scanner_stop = false;
      this->software_stop = false;
      this->emergency_state = 0;
    }
  }

  explicit EmergencyStopState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency_button_stop = false;
      this->scanner_stop = false;
      this->software_stop = false;
      this->emergency_state = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _emergency_button_stop_type =
    bool;
  _emergency_button_stop_type emergency_button_stop;
  using _scanner_stop_type =
    bool;
  _scanner_stop_type scanner_stop;
  using _software_stop_type =
    bool;
  _software_stop_type software_stop;
  using _emergency_state_type =
    int16_t;
  _emergency_state_type emergency_state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__emergency_button_stop(
    const bool & _arg)
  {
    this->emergency_button_stop = _arg;
    return *this;
  }
  Type & set__scanner_stop(
    const bool & _arg)
  {
    this->scanner_stop = _arg;
    return *this;
  }
  Type & set__software_stop(
    const bool & _arg)
  {
    this->software_stop = _arg;
    return *this;
  }
  Type & set__emergency_state(
    const int16_t & _arg)
  {
    this->emergency_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t EMFREE =
    0;
  static constexpr int16_t EMSTOP =
    1;
  static constexpr int16_t EMCONFIRMED =
    2;

  // pointer types
  using RawPtr =
    neo_msgs2::msg::EmergencyStopState_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_msgs2::msg::EmergencyStopState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_msgs2::msg::EmergencyStopState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_msgs2::msg::EmergencyStopState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::EmergencyStopState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::EmergencyStopState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::EmergencyStopState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::EmergencyStopState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_msgs2::msg::EmergencyStopState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_msgs2::msg::EmergencyStopState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_msgs2__msg__EmergencyStopState
    std::shared_ptr<neo_msgs2::msg::EmergencyStopState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_msgs2__msg__EmergencyStopState
    std::shared_ptr<neo_msgs2::msg::EmergencyStopState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyStopState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->emergency_button_stop != other.emergency_button_stop) {
      return false;
    }
    if (this->scanner_stop != other.scanner_stop) {
      return false;
    }
    if (this->software_stop != other.software_stop) {
      return false;
    }
    if (this->emergency_state != other.emergency_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyStopState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyStopState_

// alias to use template instance with default allocator
using EmergencyStopState =
  neo_msgs2::msg::EmergencyStopState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t EmergencyStopState_<ContainerAllocator>::EMFREE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t EmergencyStopState_<ContainerAllocator>::EMSTOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t EmergencyStopState_<ContainerAllocator>::EMCONFIRMED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__EMERGENCY_STOP_STATE__STRUCT_HPP_
