// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neo_msgs2:msg/RelayBoardV3.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V3__STRUCT_HPP_
#define NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V3__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__neo_msgs2__msg__RelayBoardV3 __attribute__((deprecated))
#else
# define DEPRECATED__neo_msgs2__msg__RelayBoardV3 __declspec(deprecated)
#endif

namespace neo_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RelayBoardV3_
{
  using Type = RelayBoardV3_<ContainerAllocator>;

  explicit RelayBoardV3_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
      this->firmware_version = "";
      this->uptime = 0.0;
      this->ambient_temperature = 0.0f;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->relay_states.begin(), this->relay_states.end(), false);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->digital_input_states.begin(), this->digital_input_states.end(), false);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->keypad_button_states.begin(), this->keypad_button_states.end(), false);
      this->key_switch_off_state = false;
      this->release_structure_state = false;
    }
  }

  explicit RelayBoardV3_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : firmware_version(_alloc),
    relay_states(_alloc),
    digital_input_states(_alloc),
    keypad_button_states(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
      this->firmware_version = "";
      this->uptime = 0.0;
      this->ambient_temperature = 0.0f;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->relay_states.begin(), this->relay_states.end(), false);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->digital_input_states.begin(), this->digital_input_states.end(), false);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->keypad_button_states.begin(), this->keypad_button_states.end(), false);
      this->key_switch_off_state = false;
      this->release_structure_state = false;
    }
  }

  // field types and members
  using _time_type =
    double;
  _time_type time;
  using _firmware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _firmware_version_type firmware_version;
  using _uptime_type =
    double;
  _uptime_type uptime;
  using _ambient_temperature_type =
    float;
  _ambient_temperature_type ambient_temperature;
  using _relay_states_type =
    std::array<bool, 4>;
  _relay_states_type relay_states;
  using _digital_input_states_type =
    std::array<bool, 4>;
  _digital_input_states_type digital_input_states;
  using _keypad_button_states_type =
    std::array<bool, 4>;
  _keypad_button_states_type keypad_button_states;
  using _key_switch_off_state_type =
    bool;
  _key_switch_off_state_type key_switch_off_state;
  using _release_structure_state_type =
    bool;
  _release_structure_state_type release_structure_state;

  // setters for named parameter idiom
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__firmware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->firmware_version = _arg;
    return *this;
  }
  Type & set__uptime(
    const double & _arg)
  {
    this->uptime = _arg;
    return *this;
  }
  Type & set__ambient_temperature(
    const float & _arg)
  {
    this->ambient_temperature = _arg;
    return *this;
  }
  Type & set__relay_states(
    const std::array<bool, 4> & _arg)
  {
    this->relay_states = _arg;
    return *this;
  }
  Type & set__digital_input_states(
    const std::array<bool, 4> & _arg)
  {
    this->digital_input_states = _arg;
    return *this;
  }
  Type & set__keypad_button_states(
    const std::array<bool, 4> & _arg)
  {
    this->keypad_button_states = _arg;
    return *this;
  }
  Type & set__key_switch_off_state(
    const bool & _arg)
  {
    this->key_switch_off_state = _arg;
    return *this;
  }
  Type & set__release_structure_state(
    const bool & _arg)
  {
    this->release_structure_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neo_msgs2::msg::RelayBoardV3_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_msgs2::msg::RelayBoardV3_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_msgs2::msg::RelayBoardV3_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_msgs2::msg::RelayBoardV3_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::RelayBoardV3_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::RelayBoardV3_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::RelayBoardV3_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::RelayBoardV3_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_msgs2::msg::RelayBoardV3_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_msgs2::msg::RelayBoardV3_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_msgs2__msg__RelayBoardV3
    std::shared_ptr<neo_msgs2::msg::RelayBoardV3_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_msgs2__msg__RelayBoardV3
    std::shared_ptr<neo_msgs2::msg::RelayBoardV3_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelayBoardV3_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->firmware_version != other.firmware_version) {
      return false;
    }
    if (this->uptime != other.uptime) {
      return false;
    }
    if (this->ambient_temperature != other.ambient_temperature) {
      return false;
    }
    if (this->relay_states != other.relay_states) {
      return false;
    }
    if (this->digital_input_states != other.digital_input_states) {
      return false;
    }
    if (this->keypad_button_states != other.keypad_button_states) {
      return false;
    }
    if (this->key_switch_off_state != other.key_switch_off_state) {
      return false;
    }
    if (this->release_structure_state != other.release_structure_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelayBoardV3_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelayBoardV3_

// alias to use template instance with default allocator
using RelayBoardV3 =
  neo_msgs2::msg::RelayBoardV3_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V3__STRUCT_HPP_
