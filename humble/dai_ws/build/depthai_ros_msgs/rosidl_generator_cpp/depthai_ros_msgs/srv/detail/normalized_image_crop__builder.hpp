// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from depthai_ros_msgs:srv/NormalizedImageCrop.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__BUILDER_HPP_
#define DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "depthai_ros_msgs/srv/detail/normalized_image_crop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace depthai_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_NormalizedImageCrop_Request_bottom_right
{
public:
  explicit Init_NormalizedImageCrop_Request_bottom_right(::depthai_ros_msgs::srv::NormalizedImageCrop_Request & msg)
  : msg_(msg)
  {}
  ::depthai_ros_msgs::srv::NormalizedImageCrop_Request bottom_right(::depthai_ros_msgs::srv::NormalizedImageCrop_Request::_bottom_right_type arg)
  {
    msg_.bottom_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::depthai_ros_msgs::srv::NormalizedImageCrop_Request msg_;
};

class Init_NormalizedImageCrop_Request_top_left
{
public:
  Init_NormalizedImageCrop_Request_top_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NormalizedImageCrop_Request_bottom_right top_left(::depthai_ros_msgs::srv::NormalizedImageCrop_Request::_top_left_type arg)
  {
    msg_.top_left = std::move(arg);
    return Init_NormalizedImageCrop_Request_bottom_right(msg_);
  }

private:
  ::depthai_ros_msgs::srv::NormalizedImageCrop_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::depthai_ros_msgs::srv::NormalizedImageCrop_Request>()
{
  return depthai_ros_msgs::srv::builder::Init_NormalizedImageCrop_Request_top_left();
}

}  // namespace depthai_ros_msgs


namespace depthai_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_NormalizedImageCrop_Response_status
{
public:
  Init_NormalizedImageCrop_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::depthai_ros_msgs::srv::NormalizedImageCrop_Response status(::depthai_ros_msgs::srv::NormalizedImageCrop_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::depthai_ros_msgs::srv::NormalizedImageCrop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::depthai_ros_msgs::srv::NormalizedImageCrop_Response>()
{
  return depthai_ros_msgs::srv::builder::Init_NormalizedImageCrop_Response_status();
}

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__SRV__DETAIL__NORMALIZED_IMAGE_CROP__BUILDER_HPP_
