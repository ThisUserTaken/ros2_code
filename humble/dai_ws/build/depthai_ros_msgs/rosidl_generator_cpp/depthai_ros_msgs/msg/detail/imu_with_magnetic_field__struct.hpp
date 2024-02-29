// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from depthai_ros_msgs:msg/ImuWithMagneticField.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__IMU_WITH_MAGNETIC_FIELD__STRUCT_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__IMU_WITH_MAGNETIC_FIELD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.hpp"
// Member 'field'
#include "sensor_msgs/msg/detail/magnetic_field__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__depthai_ros_msgs__msg__ImuWithMagneticField __attribute__((deprecated))
#else
# define DEPRECATED__depthai_ros_msgs__msg__ImuWithMagneticField __declspec(deprecated)
#endif

namespace depthai_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImuWithMagneticField_
{
  using Type = ImuWithMagneticField_<ContainerAllocator>;

  explicit ImuWithMagneticField_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    imu(_init),
    field(_init)
  {
    (void)_init;
  }

  explicit ImuWithMagneticField_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    imu(_alloc, _init),
    field(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _imu_type =
    sensor_msgs::msg::Imu_<ContainerAllocator>;
  _imu_type imu;
  using _field_type =
    sensor_msgs::msg::MagneticField_<ContainerAllocator>;
  _field_type field;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__imu(
    const sensor_msgs::msg::Imu_<ContainerAllocator> & _arg)
  {
    this->imu = _arg;
    return *this;
  }
  Type & set__field(
    const sensor_msgs::msg::MagneticField_<ContainerAllocator> & _arg)
  {
    this->field = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    depthai_ros_msgs::msg::ImuWithMagneticField_<ContainerAllocator> *;
  using ConstRawPtr =
    const depthai_ros_msgs::msg::ImuWithMagneticField_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<depthai_ros_msgs::msg::ImuWithMagneticField_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<depthai_ros_msgs::msg::ImuWithMagneticField_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::msg::ImuWithMagneticField_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::msg::ImuWithMagneticField_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::msg::ImuWithMagneticField_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::msg::ImuWithMagneticField_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<depthai_ros_msgs::msg::ImuWithMagneticField_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<depthai_ros_msgs::msg::ImuWithMagneticField_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__depthai_ros_msgs__msg__ImuWithMagneticField
    std::shared_ptr<depthai_ros_msgs::msg::ImuWithMagneticField_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__depthai_ros_msgs__msg__ImuWithMagneticField
    std::shared_ptr<depthai_ros_msgs::msg::ImuWithMagneticField_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuWithMagneticField_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->imu != other.imu) {
      return false;
    }
    if (this->field != other.field) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuWithMagneticField_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuWithMagneticField_

// alias to use template instance with default allocator
using ImuWithMagneticField =
  depthai_ros_msgs::msg::ImuWithMagneticField_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__IMU_WITH_MAGNETIC_FIELD__STRUCT_HPP_
