// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neo_msgs2:msg/SafetyState.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__SAFETY_STATE__STRUCT_HPP_
#define NEO_MSGS2__MSG__DETAIL__SAFETY_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__neo_msgs2__msg__SafetyState __attribute__((deprecated))
#else
# define DEPRECATED__neo_msgs2__msg__SafetyState __declspec(deprecated)
#endif

namespace neo_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyState_
{
  using Type = SafetyState_<ContainerAllocator>;

  explicit SafetyState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
      this->current_safety_field = 0;
      std::fill<typename std::array<bool, 7>::iterator, bool>(this->triggered_cutoff_paths.begin(), this->triggered_cutoff_paths.end(), false);
    }
  }

  explicit SafetyState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : triggered_cutoff_paths(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
      this->current_safety_field = 0;
      std::fill<typename std::array<bool, 7>::iterator, bool>(this->triggered_cutoff_paths.begin(), this->triggered_cutoff_paths.end(), false);
    }
  }

  // field types and members
  using _time_type =
    double;
  _time_type time;
  using _current_safety_field_type =
    uint8_t;
  _current_safety_field_type current_safety_field;
  using _triggered_cutoff_paths_type =
    std::array<bool, 7>;
  _triggered_cutoff_paths_type triggered_cutoff_paths;

  // setters for named parameter idiom
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__current_safety_field(
    const uint8_t & _arg)
  {
    this->current_safety_field = _arg;
    return *this;
  }
  Type & set__triggered_cutoff_paths(
    const std::array<bool, 7> & _arg)
  {
    this->triggered_cutoff_paths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neo_msgs2::msg::SafetyState_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_msgs2::msg::SafetyState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_msgs2::msg::SafetyState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_msgs2::msg::SafetyState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::SafetyState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::SafetyState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::SafetyState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::SafetyState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_msgs2::msg::SafetyState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_msgs2::msg::SafetyState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_msgs2__msg__SafetyState
    std::shared_ptr<neo_msgs2::msg::SafetyState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_msgs2__msg__SafetyState
    std::shared_ptr<neo_msgs2::msg::SafetyState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyState_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->current_safety_field != other.current_safety_field) {
      return false;
    }
    if (this->triggered_cutoff_paths != other.triggered_cutoff_paths) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyState_

// alias to use template instance with default allocator
using SafetyState =
  neo_msgs2::msg::SafetyState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__SAFETY_STATE__STRUCT_HPP_
