// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neo_msgs2:msg/IOBoard.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__IO_BOARD__STRUCT_HPP_
#define NEO_MSGS2__MSG__DETAIL__IO_BOARD__STRUCT_HPP_

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
# define DEPRECATED__neo_msgs2__msg__IOBoard __attribute__((deprecated))
#else
# define DEPRECATED__neo_msgs2__msg__IOBoard __declspec(deprecated)
#endif

namespace neo_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IOBoard_
{
  using Type = IOBoard_<ContainerAllocator>;

  explicit IOBoard_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 16>::iterator, bool>(this->digital_inputs.begin(), this->digital_inputs.end(), false);
      std::fill<typename std::array<bool, 16>::iterator, bool>(this->digital_outputs.begin(), this->digital_outputs.end(), false);
      std::fill<typename std::array<int16_t, 8>::iterator, int16_t>(this->analog_inputs.begin(), this->analog_inputs.end(), 0);
    }
  }

  explicit IOBoard_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    digital_inputs(_alloc),
    digital_outputs(_alloc),
    analog_inputs(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 16>::iterator, bool>(this->digital_inputs.begin(), this->digital_inputs.end(), false);
      std::fill<typename std::array<bool, 16>::iterator, bool>(this->digital_outputs.begin(), this->digital_outputs.end(), false);
      std::fill<typename std::array<int16_t, 8>::iterator, int16_t>(this->analog_inputs.begin(), this->analog_inputs.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _digital_inputs_type =
    std::array<bool, 16>;
  _digital_inputs_type digital_inputs;
  using _digital_outputs_type =
    std::array<bool, 16>;
  _digital_outputs_type digital_outputs;
  using _analog_inputs_type =
    std::array<int16_t, 8>;
  _analog_inputs_type analog_inputs;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__digital_inputs(
    const std::array<bool, 16> & _arg)
  {
    this->digital_inputs = _arg;
    return *this;
  }
  Type & set__digital_outputs(
    const std::array<bool, 16> & _arg)
  {
    this->digital_outputs = _arg;
    return *this;
  }
  Type & set__analog_inputs(
    const std::array<int16_t, 8> & _arg)
  {
    this->analog_inputs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neo_msgs2::msg::IOBoard_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_msgs2::msg::IOBoard_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_msgs2::msg::IOBoard_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_msgs2::msg::IOBoard_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::IOBoard_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::IOBoard_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::IOBoard_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::IOBoard_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_msgs2::msg::IOBoard_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_msgs2::msg::IOBoard_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_msgs2__msg__IOBoard
    std::shared_ptr<neo_msgs2::msg::IOBoard_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_msgs2__msg__IOBoard
    std::shared_ptr<neo_msgs2::msg::IOBoard_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IOBoard_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->digital_inputs != other.digital_inputs) {
      return false;
    }
    if (this->digital_outputs != other.digital_outputs) {
      return false;
    }
    if (this->analog_inputs != other.analog_inputs) {
      return false;
    }
    return true;
  }
  bool operator!=(const IOBoard_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IOBoard_

// alias to use template instance with default allocator
using IOBoard =
  neo_msgs2::msg::IOBoard_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__IO_BOARD__STRUCT_HPP_
