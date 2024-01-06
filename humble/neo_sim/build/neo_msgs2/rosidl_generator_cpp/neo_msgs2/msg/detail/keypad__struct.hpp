// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neo_msgs2:msg/Keypad.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__KEYPAD__STRUCT_HPP_
#define NEO_MSGS2__MSG__DETAIL__KEYPAD__STRUCT_HPP_

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
# define DEPRECATED__neo_msgs2__msg__Keypad __attribute__((deprecated))
#else
# define DEPRECATED__neo_msgs2__msg__Keypad __declspec(deprecated)
#endif

namespace neo_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Keypad_
{
  using Type = Keypad_<ContainerAllocator>;

  explicit Keypad_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 5>::iterator, bool>(this->button.begin(), this->button.end(), false);
    }
  }

  explicit Keypad_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    button(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 5>::iterator, bool>(this->button.begin(), this->button.end(), false);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _button_type =
    std::array<bool, 5>;
  _button_type button;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__button(
    const std::array<bool, 5> & _arg)
  {
    this->button = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neo_msgs2::msg::Keypad_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_msgs2::msg::Keypad_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_msgs2::msg::Keypad_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_msgs2::msg::Keypad_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::Keypad_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::Keypad_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::Keypad_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::Keypad_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_msgs2::msg::Keypad_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_msgs2::msg::Keypad_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_msgs2__msg__Keypad
    std::shared_ptr<neo_msgs2::msg::Keypad_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_msgs2__msg__Keypad
    std::shared_ptr<neo_msgs2::msg::Keypad_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Keypad_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->button != other.button) {
      return false;
    }
    return true;
  }
  bool operator!=(const Keypad_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Keypad_

// alias to use template instance with default allocator
using Keypad =
  neo_msgs2::msg::Keypad_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__KEYPAD__STRUCT_HPP_
