// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neo_msgs2:msg/RelayBoardV2.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V2__STRUCT_HPP_
#define NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V2__STRUCT_HPP_

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
# define DEPRECATED__neo_msgs2__msg__RelayBoardV2 __attribute__((deprecated))
#else
# define DEPRECATED__neo_msgs2__msg__RelayBoardV2 __declspec(deprecated)
#endif

namespace neo_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RelayBoardV2_
{
  using Type = RelayBoardV2_<ContainerAllocator>;

  explicit RelayBoardV2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 16>::iterator, bool>(this->relayboardv2_state.begin(), this->relayboardv2_state.end(), false);
      this->communication_state = 0;
      this->charging_state = 0;
      this->temperature = 0;
      this->battery_voltage = 0.0f;
      this->charging_current = 0.0f;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->relay_states.begin(), this->relay_states.end(), false);
      std::fill<typename std::array<bool, 8>::iterator, bool>(this->keypad.begin(), this->keypad.end(), false);
      this->shutdown = false;
    }
  }

  explicit RelayBoardV2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    relayboardv2_state(_alloc),
    relay_states(_alloc),
    keypad(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 16>::iterator, bool>(this->relayboardv2_state.begin(), this->relayboardv2_state.end(), false);
      this->communication_state = 0;
      this->charging_state = 0;
      this->temperature = 0;
      this->battery_voltage = 0.0f;
      this->charging_current = 0.0f;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->relay_states.begin(), this->relay_states.end(), false);
      std::fill<typename std::array<bool, 8>::iterator, bool>(this->keypad.begin(), this->keypad.end(), false);
      this->shutdown = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _relayboardv2_state_type =
    std::array<bool, 16>;
  _relayboardv2_state_type relayboardv2_state;
  using _communication_state_type =
    int16_t;
  _communication_state_type communication_state;
  using _charging_state_type =
    int16_t;
  _charging_state_type charging_state;
  using _temperature_type =
    int16_t;
  _temperature_type temperature;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _charging_current_type =
    float;
  _charging_current_type charging_current;
  using _relay_states_type =
    std::array<bool, 4>;
  _relay_states_type relay_states;
  using _keypad_type =
    std::array<bool, 8>;
  _keypad_type keypad;
  using _shutdown_type =
    bool;
  _shutdown_type shutdown;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__relayboardv2_state(
    const std::array<bool, 16> & _arg)
  {
    this->relayboardv2_state = _arg;
    return *this;
  }
  Type & set__communication_state(
    const int16_t & _arg)
  {
    this->communication_state = _arg;
    return *this;
  }
  Type & set__charging_state(
    const int16_t & _arg)
  {
    this->charging_state = _arg;
    return *this;
  }
  Type & set__temperature(
    const int16_t & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__charging_current(
    const float & _arg)
  {
    this->charging_current = _arg;
    return *this;
  }
  Type & set__relay_states(
    const std::array<bool, 4> & _arg)
  {
    this->relay_states = _arg;
    return *this;
  }
  Type & set__keypad(
    const std::array<bool, 8> & _arg)
  {
    this->keypad = _arg;
    return *this;
  }
  Type & set__shutdown(
    const bool & _arg)
  {
    this->shutdown = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int16_t CS_NOT_ESTABLISHED =
    0;
  static constexpr int16_t CS_CONFIGURATION_FAILED =
    1;
  static constexpr int16_t CS_OK =
    2;
  static constexpr int16_t CS_LOST =
    3;
  static constexpr int16_t CS_ERROR =
    4;
  static constexpr int16_t CHS_NOTCHARGING =
    0;
  static constexpr int16_t CHS_START_CHARGING =
    1;
  static constexpr int16_t CHS_CHARGING =
    2;
  static constexpr int16_t CHS_NO_CHARGER =
    3;
  static constexpr int16_t CHS_BRAKES_OPEN =
    4;
  static constexpr int16_t CHS_EMSTOP =
    5;
  static constexpr int16_t CHS_ABORT =
    6;
  static constexpr int16_t CHS_FINISHED =
    7;

  // pointer types
  using RawPtr =
    neo_msgs2::msg::RelayBoardV2_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_msgs2::msg::RelayBoardV2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_msgs2::msg::RelayBoardV2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_msgs2::msg::RelayBoardV2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::RelayBoardV2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::RelayBoardV2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::RelayBoardV2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::RelayBoardV2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_msgs2::msg::RelayBoardV2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_msgs2::msg::RelayBoardV2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_msgs2__msg__RelayBoardV2
    std::shared_ptr<neo_msgs2::msg::RelayBoardV2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_msgs2__msg__RelayBoardV2
    std::shared_ptr<neo_msgs2::msg::RelayBoardV2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelayBoardV2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->relayboardv2_state != other.relayboardv2_state) {
      return false;
    }
    if (this->communication_state != other.communication_state) {
      return false;
    }
    if (this->charging_state != other.charging_state) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->charging_current != other.charging_current) {
      return false;
    }
    if (this->relay_states != other.relay_states) {
      return false;
    }
    if (this->keypad != other.keypad) {
      return false;
    }
    if (this->shutdown != other.shutdown) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelayBoardV2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelayBoardV2_

// alias to use template instance with default allocator
using RelayBoardV2 =
  neo_msgs2::msg::RelayBoardV2_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t RelayBoardV2_<ContainerAllocator>::CS_NOT_ESTABLISHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t RelayBoardV2_<ContainerAllocator>::CS_CONFIGURATION_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t RelayBoardV2_<ContainerAllocator>::CS_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t RelayBoardV2_<ContainerAllocator>::CS_LOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t RelayBoardV2_<ContainerAllocator>::CS_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t RelayBoardV2_<ContainerAllocator>::CHS_NOTCHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t RelayBoardV2_<ContainerAllocator>::CHS_START_CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t RelayBoardV2_<ContainerAllocator>::CHS_CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t RelayBoardV2_<ContainerAllocator>::CHS_NO_CHARGER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t RelayBoardV2_<ContainerAllocator>::CHS_BRAKES_OPEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t RelayBoardV2_<ContainerAllocator>::CHS_EMSTOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t RelayBoardV2_<ContainerAllocator>::CHS_ABORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t RelayBoardV2_<ContainerAllocator>::CHS_FINISHED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__RELAY_BOARD_V2__STRUCT_HPP_
