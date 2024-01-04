// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neo_msgs2:msg/LCDOutput.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__STRUCT_HPP_
#define NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__STRUCT_HPP_

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
# define DEPRECATED__neo_msgs2__msg__LCDOutput __attribute__((deprecated))
#else
# define DEPRECATED__neo_msgs2__msg__LCDOutput __declspec(deprecated)
#endif

namespace neo_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LCDOutput_
{
  using Type = LCDOutput_<ContainerAllocator>;

  explicit LCDOutput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_line = "";
    }
  }

  explicit LCDOutput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    msg_line(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_line = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _msg_line_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_line_type msg_line;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__msg_line(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msg_line = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neo_msgs2::msg::LCDOutput_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_msgs2::msg::LCDOutput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_msgs2::msg::LCDOutput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_msgs2::msg::LCDOutput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::LCDOutput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::LCDOutput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::LCDOutput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::LCDOutput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_msgs2::msg::LCDOutput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_msgs2::msg::LCDOutput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_msgs2__msg__LCDOutput
    std::shared_ptr<neo_msgs2::msg::LCDOutput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_msgs2__msg__LCDOutput
    std::shared_ptr<neo_msgs2::msg::LCDOutput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LCDOutput_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->msg_line != other.msg_line) {
      return false;
    }
    return true;
  }
  bool operator!=(const LCDOutput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LCDOutput_

// alias to use template instance with default allocator
using LCDOutput =
  neo_msgs2::msg::LCDOutput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__LCD_OUTPUT__STRUCT_HPP_
