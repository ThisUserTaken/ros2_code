// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from depthai_ros_msgs:msg/AutoFocusCtrl.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__BUILDER_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "depthai_ros_msgs/msg/detail/auto_focus_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace depthai_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_AutoFocusCtrl_trigger_auto_focus
{
public:
  explicit Init_AutoFocusCtrl_trigger_auto_focus(::depthai_ros_msgs::msg::AutoFocusCtrl & msg)
  : msg_(msg)
  {}
  ::depthai_ros_msgs::msg::AutoFocusCtrl trigger_auto_focus(::depthai_ros_msgs::msg::AutoFocusCtrl::_trigger_auto_focus_type arg)
  {
    msg_.trigger_auto_focus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::depthai_ros_msgs::msg::AutoFocusCtrl msg_;
};

class Init_AutoFocusCtrl_auto_focus_mode
{
public:
  Init_AutoFocusCtrl_auto_focus_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoFocusCtrl_trigger_auto_focus auto_focus_mode(::depthai_ros_msgs::msg::AutoFocusCtrl::_auto_focus_mode_type arg)
  {
    msg_.auto_focus_mode = std::move(arg);
    return Init_AutoFocusCtrl_trigger_auto_focus(msg_);
  }

private:
  ::depthai_ros_msgs::msg::AutoFocusCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::depthai_ros_msgs::msg::AutoFocusCtrl>()
{
  return depthai_ros_msgs::msg::builder::Init_AutoFocusCtrl_auto_focus_mode();
}

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__AUTO_FOCUS_CTRL__BUILDER_HPP_
