// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neo_srvs2:srv/Optimizer.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__OPTIMIZER__STRUCT_HPP_
#define NEO_SRVS2__SRV__DETAIL__OPTIMIZER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'current_pose'
// Member 'carrot_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'current_vel'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__neo_srvs2__srv__Optimizer_Request __attribute__((deprecated))
#else
# define DEPRECATED__neo_srvs2__srv__Optimizer_Request __declspec(deprecated)
#endif

namespace neo_srvs2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Optimizer_Request_
{
  using Type = Optimizer_Request_<ContainerAllocator>;

  explicit Optimizer_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_init),
    current_vel(_init),
    carrot_pose(_init),
    goal_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->switch_opt = false;
      this->control_interval = 0.0f;
    }
  }

  explicit Optimizer_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_pose(_alloc, _init),
    current_vel(_alloc, _init),
    carrot_pose(_alloc, _init),
    goal_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->switch_opt = false;
      this->control_interval = 0.0f;
    }
  }

  // field types and members
  using _current_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _current_pose_type current_pose;
  using _current_vel_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _current_vel_type current_vel;
  using _carrot_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _carrot_pose_type carrot_pose;
  using _goal_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _goal_pose_type goal_pose;
  using _switch_opt_type =
    bool;
  _switch_opt_type switch_opt;
  using _control_interval_type =
    float;
  _control_interval_type control_interval;

  // setters for named parameter idiom
  Type & set__current_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->current_pose = _arg;
    return *this;
  }
  Type & set__current_vel(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->current_vel = _arg;
    return *this;
  }
  Type & set__carrot_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->carrot_pose = _arg;
    return *this;
  }
  Type & set__goal_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->goal_pose = _arg;
    return *this;
  }
  Type & set__switch_opt(
    const bool & _arg)
  {
    this->switch_opt = _arg;
    return *this;
  }
  Type & set__control_interval(
    const float & _arg)
  {
    this->control_interval = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neo_srvs2::srv::Optimizer_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_srvs2::srv::Optimizer_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_srvs2::srv::Optimizer_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_srvs2::srv::Optimizer_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_srvs2::srv::Optimizer_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_srvs2::srv::Optimizer_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_srvs2::srv::Optimizer_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_srvs2::srv::Optimizer_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_srvs2::srv::Optimizer_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_srvs2::srv::Optimizer_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_srvs2__srv__Optimizer_Request
    std::shared_ptr<neo_srvs2::srv::Optimizer_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_srvs2__srv__Optimizer_Request
    std::shared_ptr<neo_srvs2::srv::Optimizer_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Optimizer_Request_ & other) const
  {
    if (this->current_pose != other.current_pose) {
      return false;
    }
    if (this->current_vel != other.current_vel) {
      return false;
    }
    if (this->carrot_pose != other.carrot_pose) {
      return false;
    }
    if (this->goal_pose != other.goal_pose) {
      return false;
    }
    if (this->switch_opt != other.switch_opt) {
      return false;
    }
    if (this->control_interval != other.control_interval) {
      return false;
    }
    return true;
  }
  bool operator!=(const Optimizer_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Optimizer_Request_

// alias to use template instance with default allocator
using Optimizer_Request =
  neo_srvs2::srv::Optimizer_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace neo_srvs2


// Include directives for member types
// Member 'output_vel'
#include "geometry_msgs/msg/detail/twist_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__neo_srvs2__srv__Optimizer_Response __attribute__((deprecated))
#else
# define DEPRECATED__neo_srvs2__srv__Optimizer_Response __declspec(deprecated)
#endif

namespace neo_srvs2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Optimizer_Response_
{
  using Type = Optimizer_Response_<ContainerAllocator>;

  explicit Optimizer_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output_vel(_init)
  {
    (void)_init;
  }

  explicit Optimizer_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output_vel(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _output_vel_type =
    geometry_msgs::msg::TwistStamped_<ContainerAllocator>;
  _output_vel_type output_vel;

  // setters for named parameter idiom
  Type & set__output_vel(
    const geometry_msgs::msg::TwistStamped_<ContainerAllocator> & _arg)
  {
    this->output_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neo_srvs2::srv::Optimizer_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_srvs2::srv::Optimizer_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_srvs2::srv::Optimizer_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_srvs2::srv::Optimizer_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_srvs2::srv::Optimizer_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_srvs2::srv::Optimizer_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_srvs2::srv::Optimizer_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_srvs2::srv::Optimizer_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_srvs2::srv::Optimizer_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_srvs2::srv::Optimizer_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_srvs2__srv__Optimizer_Response
    std::shared_ptr<neo_srvs2::srv::Optimizer_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_srvs2__srv__Optimizer_Response
    std::shared_ptr<neo_srvs2::srv::Optimizer_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Optimizer_Response_ & other) const
  {
    if (this->output_vel != other.output_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const Optimizer_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Optimizer_Response_

// alias to use template instance with default allocator
using Optimizer_Response =
  neo_srvs2::srv::Optimizer_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace neo_srvs2

namespace neo_srvs2
{

namespace srv
{

struct Optimizer
{
  using Request = neo_srvs2::srv::Optimizer_Request;
  using Response = neo_srvs2::srv::Optimizer_Response;
};

}  // namespace srv

}  // namespace neo_srvs2

#endif  // NEO_SRVS2__SRV__DETAIL__OPTIMIZER__STRUCT_HPP_
