// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_msgs2:msg/KinematicsState.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__BUILDER_HPP_
#define NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_msgs2/msg/detail/kinematics_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_msgs2
{

namespace msg
{

namespace builder
{

class Init_KinematicsState_is_moving
{
public:
  explicit Init_KinematicsState_is_moving(::neo_msgs2::msg::KinematicsState & msg)
  : msg_(msg)
  {}
  ::neo_msgs2::msg::KinematicsState is_moving(::neo_msgs2::msg::KinematicsState::_is_moving_type arg)
  {
    msg_.is_moving = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_msgs2::msg::KinematicsState msg_;
};

class Init_KinematicsState_is_vel_cmd
{
public:
  explicit Init_KinematicsState_is_vel_cmd(::neo_msgs2::msg::KinematicsState & msg)
  : msg_(msg)
  {}
  Init_KinematicsState_is_moving is_vel_cmd(::neo_msgs2::msg::KinematicsState::_is_vel_cmd_type arg)
  {
    msg_.is_vel_cmd = std::move(arg);
    return Init_KinematicsState_is_moving(msg_);
  }

private:
  ::neo_msgs2::msg::KinematicsState msg_;
};

class Init_KinematicsState_time
{
public:
  Init_KinematicsState_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KinematicsState_is_vel_cmd time(::neo_msgs2::msg::KinematicsState::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_KinematicsState_is_vel_cmd(msg_);
  }

private:
  ::neo_msgs2::msg::KinematicsState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_msgs2::msg::KinematicsState>()
{
  return neo_msgs2::msg::builder::Init_KinematicsState_time();
}

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__KINEMATICS_STATE__BUILDER_HPP_
