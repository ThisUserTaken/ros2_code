// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from depthai_ros_msgs:msg/SpatialDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION_ARRAY__BUILDER_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "depthai_ros_msgs/msg/detail/spatial_detection_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace depthai_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_SpatialDetectionArray_detections
{
public:
  explicit Init_SpatialDetectionArray_detections(::depthai_ros_msgs::msg::SpatialDetectionArray & msg)
  : msg_(msg)
  {}
  ::depthai_ros_msgs::msg::SpatialDetectionArray detections(::depthai_ros_msgs::msg::SpatialDetectionArray::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::depthai_ros_msgs::msg::SpatialDetectionArray msg_;
};

class Init_SpatialDetectionArray_header
{
public:
  Init_SpatialDetectionArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpatialDetectionArray_detections header(::depthai_ros_msgs::msg::SpatialDetectionArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SpatialDetectionArray_detections(msg_);
  }

private:
  ::depthai_ros_msgs::msg::SpatialDetectionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::depthai_ros_msgs::msg::SpatialDetectionArray>()
{
  return depthai_ros_msgs::msg::builder::Init_SpatialDetectionArray_header();
}

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION_ARRAY__BUILDER_HPP_
