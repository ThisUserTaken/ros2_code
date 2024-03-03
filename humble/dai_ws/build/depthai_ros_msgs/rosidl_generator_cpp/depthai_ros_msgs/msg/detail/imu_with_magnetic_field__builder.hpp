// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from depthai_ros_msgs:msg/ImuWithMagneticField.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__IMU_WITH_MAGNETIC_FIELD__BUILDER_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__IMU_WITH_MAGNETIC_FIELD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "depthai_ros_msgs/msg/detail/imu_with_magnetic_field__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace depthai_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_ImuWithMagneticField_field
{
public:
  explicit Init_ImuWithMagneticField_field(::depthai_ros_msgs::msg::ImuWithMagneticField & msg)
  : msg_(msg)
  {}
  ::depthai_ros_msgs::msg::ImuWithMagneticField field(::depthai_ros_msgs::msg::ImuWithMagneticField::_field_type arg)
  {
    msg_.field = std::move(arg);
    return std::move(msg_);
  }

private:
  ::depthai_ros_msgs::msg::ImuWithMagneticField msg_;
};

class Init_ImuWithMagneticField_imu
{
public:
  explicit Init_ImuWithMagneticField_imu(::depthai_ros_msgs::msg::ImuWithMagneticField & msg)
  : msg_(msg)
  {}
  Init_ImuWithMagneticField_field imu(::depthai_ros_msgs::msg::ImuWithMagneticField::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_ImuWithMagneticField_field(msg_);
  }

private:
  ::depthai_ros_msgs::msg::ImuWithMagneticField msg_;
};

class Init_ImuWithMagneticField_header
{
public:
  Init_ImuWithMagneticField_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuWithMagneticField_imu header(::depthai_ros_msgs::msg::ImuWithMagneticField::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ImuWithMagneticField_imu(msg_);
  }

private:
  ::depthai_ros_msgs::msg::ImuWithMagneticField msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::depthai_ros_msgs::msg::ImuWithMagneticField>()
{
  return depthai_ros_msgs::msg::builder::Init_ImuWithMagneticField_header();
}

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__IMU_WITH_MAGNETIC_FIELD__BUILDER_HPP_
