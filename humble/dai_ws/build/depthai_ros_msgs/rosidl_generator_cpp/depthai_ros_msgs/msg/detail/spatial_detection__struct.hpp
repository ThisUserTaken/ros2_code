// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from depthai_ros_msgs:msg/SpatialDetection.idl
// generated code does not contain a copyright notice

#ifndef DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION__STRUCT_HPP_
#define DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'results'
#include "vision_msgs/msg/detail/object_hypothesis__struct.hpp"
// Member 'bbox'
#include "vision_msgs/msg/detail/bounding_box2_d__struct.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__depthai_ros_msgs__msg__SpatialDetection __attribute__((deprecated))
#else
# define DEPRECATED__depthai_ros_msgs__msg__SpatialDetection __declspec(deprecated)
#endif

namespace depthai_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpatialDetection_
{
  using Type = SpatialDetection_<ContainerAllocator>;

  explicit SpatialDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bbox(_init),
    position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_tracking = false;
      this->tracking_id = "";
    }
  }

  explicit SpatialDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bbox(_alloc, _init),
    position(_alloc, _init),
    tracking_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_tracking = false;
      this->tracking_id = "";
    }
  }

  // field types and members
  using _results_type =
    std::vector<vision_msgs::msg::ObjectHypothesis_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_msgs::msg::ObjectHypothesis_<ContainerAllocator>>>;
  _results_type results;
  using _bbox_type =
    vision_msgs::msg::BoundingBox2D_<ContainerAllocator>;
  _bbox_type bbox;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _is_tracking_type =
    bool;
  _is_tracking_type is_tracking;
  using _tracking_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tracking_id_type tracking_id;

  // setters for named parameter idiom
  Type & set__results(
    const std::vector<vision_msgs::msg::ObjectHypothesis_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_msgs::msg::ObjectHypothesis_<ContainerAllocator>>> & _arg)
  {
    this->results = _arg;
    return *this;
  }
  Type & set__bbox(
    const vision_msgs::msg::BoundingBox2D_<ContainerAllocator> & _arg)
  {
    this->bbox = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__is_tracking(
    const bool & _arg)
  {
    this->is_tracking = _arg;
    return *this;
  }
  Type & set__tracking_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tracking_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    depthai_ros_msgs::msg::SpatialDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const depthai_ros_msgs::msg::SpatialDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<depthai_ros_msgs::msg::SpatialDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<depthai_ros_msgs::msg::SpatialDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::msg::SpatialDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::msg::SpatialDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      depthai_ros_msgs::msg::SpatialDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<depthai_ros_msgs::msg::SpatialDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<depthai_ros_msgs::msg::SpatialDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<depthai_ros_msgs::msg::SpatialDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__depthai_ros_msgs__msg__SpatialDetection
    std::shared_ptr<depthai_ros_msgs::msg::SpatialDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__depthai_ros_msgs__msg__SpatialDetection
    std::shared_ptr<depthai_ros_msgs::msg::SpatialDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpatialDetection_ & other) const
  {
    if (this->results != other.results) {
      return false;
    }
    if (this->bbox != other.bbox) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->is_tracking != other.is_tracking) {
      return false;
    }
    if (this->tracking_id != other.tracking_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpatialDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpatialDetection_

// alias to use template instance with default allocator
using SpatialDetection =
  depthai_ros_msgs::msg::SpatialDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace depthai_ros_msgs

#endif  // DEPTHAI_ROS_MSGS__MSG__DETAIL__SPATIAL_DETECTION__STRUCT_HPP_
