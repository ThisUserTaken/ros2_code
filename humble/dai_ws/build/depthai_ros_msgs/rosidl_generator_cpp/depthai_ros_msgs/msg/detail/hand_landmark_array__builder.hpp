// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from depthai_ros_msgs:msg/HandLandmarkArray.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK_ARRAY__BUILDER_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "depthai_ros_msgs/msg/detail/hand_landmark_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace depthai_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_HandLandmarkArray_landmarks
{
public:
  explicit Init_HandLandmarkArray_landmarks(::depthai_ros_msgs::msg::HandLandmarkArray & msg)
  : msg_(msg)
  {}
  ::depthai_ros_msgs::msg::HandLandmarkArray landmarks(::depthai_ros_msgs::msg::HandLandmarkArray::_landmarks_type arg)
  {
    msg_.landmarks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::depthai_ros_msgs::msg::HandLandmarkArray msg_;
};

class Init_HandLandmarkArray_header
{
public:
  Init_HandLandmarkArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandLandmarkArray_landmarks header(::depthai_ros_msgs::msg::HandLandmarkArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HandLandmarkArray_landmarks(msg_);
  }

private:
  ::depthai_ros_msgs::msg::HandLandmarkArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::depthai_ros_msgs::msg::HandLandmarkArray>()
{
  return depthai_ros_msgs::msg::builder::Init_HandLandmarkArray_header();
}

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__HAND_LANDMARK_ARRAY__BUILDER_HPP_
