// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_srvs2:srv/Optimizer.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__OPTIMIZER__BUILDER_HPP_
#define NEO_SRVS2__SRV__DETAIL__OPTIMIZER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_srvs2/srv/detail/optimizer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_Optimizer_Request_control_interval
{
public:
  explicit Init_Optimizer_Request_control_interval(::neo_srvs2::srv::Optimizer_Request & msg)
  : msg_(msg)
  {}
  ::neo_srvs2::srv::Optimizer_Request control_interval(::neo_srvs2::srv::Optimizer_Request::_control_interval_type arg)
  {
    msg_.control_interval = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::Optimizer_Request msg_;
};

class Init_Optimizer_Request_switch_opt
{
public:
  explicit Init_Optimizer_Request_switch_opt(::neo_srvs2::srv::Optimizer_Request & msg)
  : msg_(msg)
  {}
  Init_Optimizer_Request_control_interval switch_opt(::neo_srvs2::srv::Optimizer_Request::_switch_opt_type arg)
  {
    msg_.switch_opt = std::move(arg);
    return Init_Optimizer_Request_control_interval(msg_);
  }

private:
  ::neo_srvs2::srv::Optimizer_Request msg_;
};

class Init_Optimizer_Request_goal_pose
{
public:
  explicit Init_Optimizer_Request_goal_pose(::neo_srvs2::srv::Optimizer_Request & msg)
  : msg_(msg)
  {}
  Init_Optimizer_Request_switch_opt goal_pose(::neo_srvs2::srv::Optimizer_Request::_goal_pose_type arg)
  {
    msg_.goal_pose = std::move(arg);
    return Init_Optimizer_Request_switch_opt(msg_);
  }

private:
  ::neo_srvs2::srv::Optimizer_Request msg_;
};

class Init_Optimizer_Request_carrot_pose
{
public:
  explicit Init_Optimizer_Request_carrot_pose(::neo_srvs2::srv::Optimizer_Request & msg)
  : msg_(msg)
  {}
  Init_Optimizer_Request_goal_pose carrot_pose(::neo_srvs2::srv::Optimizer_Request::_carrot_pose_type arg)
  {
    msg_.carrot_pose = std::move(arg);
    return Init_Optimizer_Request_goal_pose(msg_);
  }

private:
  ::neo_srvs2::srv::Optimizer_Request msg_;
};

class Init_Optimizer_Request_current_vel
{
public:
  explicit Init_Optimizer_Request_current_vel(::neo_srvs2::srv::Optimizer_Request & msg)
  : msg_(msg)
  {}
  Init_Optimizer_Request_carrot_pose current_vel(::neo_srvs2::srv::Optimizer_Request::_current_vel_type arg)
  {
    msg_.current_vel = std::move(arg);
    return Init_Optimizer_Request_carrot_pose(msg_);
  }

private:
  ::neo_srvs2::srv::Optimizer_Request msg_;
};

class Init_Optimizer_Request_current_pose
{
public:
  Init_Optimizer_Request_current_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Optimizer_Request_current_vel current_pose(::neo_srvs2::srv::Optimizer_Request::_current_pose_type arg)
  {
    msg_.current_pose = std::move(arg);
    return Init_Optimizer_Request_current_vel(msg_);
  }

private:
  ::neo_srvs2::srv::Optimizer_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::Optimizer_Request>()
{
  return neo_srvs2::srv::builder::Init_Optimizer_Request_current_pose();
}

}  // namespace neo_srvs2


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_Optimizer_Response_output_vel
{
public:
  Init_Optimizer_Response_output_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::Optimizer_Response output_vel(::neo_srvs2::srv::Optimizer_Response::_output_vel_type arg)
  {
    msg_.output_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::Optimizer_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::Optimizer_Response>()
{
  return neo_srvs2::srv::builder::Init_Optimizer_Response_output_vel();
}

}  // namespace neo_srvs2

#endif  // NEO_SRVS2__SRV__DETAIL__OPTIMIZER__BUILDER_HPP_
