// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neo_msgs2:msg/KinematicsState.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__STRUCT_HPP_
#define NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__neo_msgs2__msg__KinematicsState __attribute__((deprecated))
#else
# define DEPRECATED__neo_msgs2__msg__KinematicsState __declspec(deprecated)
#endif

namespace neo_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KinematicsState_
{
  using Type = KinematicsState_<ContainerAllocator>;

  explicit KinematicsState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
      this->is_vel_cmd = false;
      this->is_moving = false;
    }
  }

  explicit KinematicsState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0.0;
      this->is_vel_cmd = false;
      this->is_moving = false;
    }
  }

  // field types and members
  using _time_type =
    double;
  _time_type time;
  using _is_vel_cmd_type =
    bool;
  _is_vel_cmd_type is_vel_cmd;
  using _is_moving_type =
    bool;
  _is_moving_type is_moving;

  // setters for named parameter idiom
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__is_vel_cmd(
    const bool & _arg)
  {
    this->is_vel_cmd = _arg;
    return *this;
  }
  Type & set__is_moving(
    const bool & _arg)
  {
    this->is_moving = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neo_msgs2::msg::KinematicsState_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_msgs2::msg::KinematicsState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_msgs2::msg::KinematicsState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_msgs2::msg::KinematicsState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::KinematicsState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::KinematicsState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::KinematicsState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::KinematicsState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_msgs2::msg::KinematicsState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_msgs2::msg::KinematicsState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_msgs2__msg__KinematicsState
    std::shared_ptr<neo_msgs2::msg::KinematicsState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_msgs2__msg__KinematicsState
    std::shared_ptr<neo_msgs2::msg::KinematicsState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KinematicsState_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->is_vel_cmd != other.is_vel_cmd) {
      return false;
    }
    if (this->is_moving != other.is_moving) {
      return false;
    }
    return true;
  }
  bool operator!=(const KinematicsState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KinematicsState_

// alias to use template instance with default allocator
using KinematicsState =
  neo_msgs2::msg::KinematicsState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__STRUCT_HPP_
