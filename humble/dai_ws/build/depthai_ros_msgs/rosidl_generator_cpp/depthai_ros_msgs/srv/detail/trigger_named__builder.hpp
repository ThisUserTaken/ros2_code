// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from depthai_ros_msgs:srv/TriggerNamed.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__SRV__DETAIL__TRIGGER_NAMED__BUILDER_HPP_
#define DEPTHAI_ROS_MSGS__SRV__DETAIL__TRIGGER_NAMED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "depthai_ros_msgs/srv/detail/trigger_named__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace depthai_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_TriggerNamed_Request_name
{
public:
  Init_TriggerNamed_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::depthai_ros_msgs::srv::TriggerNamed_Request name(::depthai_ros_msgs::srv::TriggerNamed_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::depthai_ros_msgs::srv::TriggerNamed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::depthai_ros_msgs::srv::TriggerNamed_Request>()
{
  return depthai_ros_msgs::srv::builder::Init_TriggerNamed_Request_name();
}

}  // namespace depthai_ros_msgs


namespace depthai_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_TriggerNamed_Response_message
{
public:
  explicit Init_TriggerNamed_Response_message(::depthai_ros_msgs::srv::TriggerNamed_Response & msg)
  : msg_(msg)
  {}
  ::depthai_ros_msgs::srv::TriggerNamed_Response message(::depthai_ros_msgs::srv::TriggerNamed_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::depthai_ros_msgs::srv::TriggerNamed_Response msg_;
};

class Init_TriggerNamed_Response_success
{
public:
  Init_TriggerNamed_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriggerNamed_Response_message success(::depthai_ros_msgs::srv::TriggerNamed_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TriggerNamed_Response_message(msg_);
  }

private:
  ::depthai_ros_msgs::srv::TriggerNamed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::depthai_ros_msgs::srv::TriggerNamed_Response>()
{
  return depthai_ros_msgs::srv::builder::Init_TriggerNamed_Response_success();
}

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__SRV__DETAIL__TRIGGER_NAMED__BUILDER_HPP_
