// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from depthai_ros_msgs:msg/HandLandmark.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__BUILDER_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "depthai_ros_msgs/msg/detail/hand_landmark__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace depthai_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_HandLandmark_is_spatial
{
public:
  explicit Init_HandLandmark_is_spatial(::depthai_ros_msgs::msg::HandLandmark & msg)
  : msg_(msg)
  {}
  ::depthai_ros_msgs::msg::HandLandmark is_spatial(::depthai_ros_msgs::msg::HandLandmark::_is_spatial_type arg)
  {
    msg_.is_spatial = std::move(arg);
    return std::move(msg_);
  }

private:
  ::depthai_ros_msgs::msg::HandLandmark msg_;
};

class Init_HandLandmark_position
{
public:
  explicit Init_HandLandmark_position(::depthai_ros_msgs::msg::HandLandmark & msg)
  : msg_(msg)
  {}
  Init_HandLandmark_is_spatial position(::depthai_ros_msgs::msg::HandLandmark::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_HandLandmark_is_spatial(msg_);
  }

private:
  ::depthai_ros_msgs::msg::HandLandmark msg_;
};

class Init_HandLandmark_landmark
{
public:
  explicit Init_HandLandmark_landmark(::depthai_ros_msgs::msg::HandLandmark & msg)
  : msg_(msg)
  {}
  Init_HandLandmark_position landmark(::depthai_ros_msgs::msg::HandLandmark::_landmark_type arg)
  {
    msg_.landmark = std::move(arg);
    return Init_HandLandmark_position(msg_);
  }

private:
  ::depthai_ros_msgs::msg::HandLandmark msg_;
};

class Init_HandLandmark_lm_score
{
public:
  explicit Init_HandLandmark_lm_score(::depthai_ros_msgs::msg::HandLandmark & msg)
  : msg_(msg)
  {}
  Init_HandLandmark_landmark lm_score(::depthai_ros_msgs::msg::HandLandmark::_lm_score_type arg)
  {
    msg_.lm_score = std::move(arg);
    return Init_HandLandmark_landmark(msg_);
  }

private:
  ::depthai_ros_msgs::msg::HandLandmark msg_;
};

class Init_HandLandmark_label
{
public:
  Init_HandLandmark_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandLandmark_lm_score label(::depthai_ros_msgs::msg::HandLandmark::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_HandLandmark_lm_score(msg_);
  }

private:
  ::depthai_ros_msgs::msg::HandLandmark msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::depthai_ros_msgs::msg::HandLandmark>()
{
  return depthai_ros_msgs::msg::builder::Init_HandLandmark_label();
}

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK__BUILDER_HPP_
