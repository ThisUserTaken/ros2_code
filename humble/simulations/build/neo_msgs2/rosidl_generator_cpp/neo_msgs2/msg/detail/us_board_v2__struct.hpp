// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neo_msgs2:msg/USBoardV2.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__US_BOARD_V2__STRUCT_HPP_
#define NEO_MSGS2__MSG__DETAIL__US_BOARD_V2__STRUCT_HPP_

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
# define DEPRECATED__neo_msgs2__msg__USBoardV2 __attribute__((deprecated))
#else
# define DEPRECATED__neo_msgs2__msg__USBoardV2 __declspec(deprecated)
#endif

namespace neo_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct USBoardV2_
{
  using Type = USBoardV2_<ContainerAllocator>;

  explicit USBoardV2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 16>::iterator, float>(this->sensor.begin(), this->sensor.end(), 0.0f);
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->analog.begin(), this->analog.end(), 0);
      std::fill<typename std::array<bool, 16>::iterator, bool>(this->active.begin(), this->active.end(), false);
    }
  }

  explicit USBoardV2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    sensor(_alloc),
    analog(_alloc),
    active(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 16>::iterator, float>(this->sensor.begin(), this->sensor.end(), 0.0f);
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->analog.begin(), this->analog.end(), 0);
      std::fill<typename std::array<bool, 16>::iterator, bool>(this->active.begin(), this->active.end(), false);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_type =
    std::array<float, 16>;
  _sensor_type sensor;
  using _analog_type =
    std::array<int16_t, 4>;
  _analog_type analog;
  using _active_type =
    std::array<bool, 16>;
  _active_type active;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor(
    const std::array<float, 16> & _arg)
  {
    this->sensor = _arg;
    return *this;
  }
  Type & set__analog(
    const std::array<int16_t, 4> & _arg)
  {
    this->analog = _arg;
    return *this;
  }
  Type & set__active(
    const std::array<bool, 16> & _arg)
  {
    this->active = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neo_msgs2::msg::USBoardV2_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_msgs2::msg::USBoardV2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_msgs2::msg::USBoardV2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_msgs2::msg::USBoardV2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::USBoardV2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::USBoardV2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::USBoardV2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::USBoardV2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_msgs2::msg::USBoardV2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_msgs2::msg::USBoardV2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_msgs2__msg__USBoardV2
    std::shared_ptr<neo_msgs2::msg::USBoardV2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_msgs2__msg__USBoardV2
    std::shared_ptr<neo_msgs2::msg::USBoardV2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const USBoardV2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor != other.sensor) {
      return false;
    }
    if (this->analog != other.analog) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    return true;
  }
  bool operator!=(const USBoardV2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct USBoardV2_

// alias to use template instance with default allocator
using USBoardV2 =
  neo_msgs2::msg::USBoardV2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__US_BOARD_V2__STRUCT_HPP_
