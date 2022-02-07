// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from control_msgs:msg/JointTrajectoryControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__STRUCT_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.hpp"
// Member 'multi_dof_desired'
// Member 'multi_dof_actual'
// Member 'multi_dof_error'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__control_msgs__msg__JointTrajectoryControllerState __attribute__((deprecated))
#else
# define DEPRECATED__control_msgs__msg__JointTrajectoryControllerState __declspec(deprecated)
#endif

namespace control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointTrajectoryControllerState_
{
  using Type = JointTrajectoryControllerState_<ContainerAllocator>;

  explicit JointTrajectoryControllerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    desired(_init),
    actual(_init),
    error(_init),
    multi_dof_desired(_init),
    multi_dof_actual(_init),
    multi_dof_error(_init)
  {
    (void)_init;
  }

  explicit JointTrajectoryControllerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    desired(_alloc, _init),
    actual(_alloc, _init),
    error(_alloc, _init),
    multi_dof_desired(_alloc, _init),
    multi_dof_actual(_alloc, _init),
    multi_dof_error(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_names_type joint_names;
  using _desired_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _desired_type desired;
  using _actual_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _actual_type actual;
  using _error_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _error_type error;
  using _multi_dof_joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _multi_dof_joint_names_type multi_dof_joint_names;
  using _multi_dof_desired_type =
    trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator>;
  _multi_dof_desired_type multi_dof_desired;
  using _multi_dof_actual_type =
    trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator>;
  _multi_dof_actual_type multi_dof_actual;
  using _multi_dof_error_type =
    trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator>;
  _multi_dof_error_type multi_dof_error;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_names = _arg;
    return *this;
  }
  Type & set__desired(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->desired = _arg;
    return *this;
  }
  Type & set__actual(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->actual = _arg;
    return *this;
  }
  Type & set__error(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__multi_dof_joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->multi_dof_joint_names = _arg;
    return *this;
  }
  Type & set__multi_dof_desired(
    const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->multi_dof_desired = _arg;
    return *this;
  }
  Type & set__multi_dof_actual(
    const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->multi_dof_actual = _arg;
    return *this;
  }
  Type & set__multi_dof_error(
    const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->multi_dof_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    control_msgs::msg::JointTrajectoryControllerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const control_msgs::msg::JointTrajectoryControllerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<control_msgs::msg::JointTrajectoryControllerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<control_msgs::msg::JointTrajectoryControllerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::JointTrajectoryControllerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::JointTrajectoryControllerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      control_msgs::msg::JointTrajectoryControllerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<control_msgs::msg::JointTrajectoryControllerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<control_msgs::msg::JointTrajectoryControllerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<control_msgs::msg::JointTrajectoryControllerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__control_msgs__msg__JointTrajectoryControllerState
    std::shared_ptr<control_msgs::msg::JointTrajectoryControllerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__control_msgs__msg__JointTrajectoryControllerState
    std::shared_ptr<control_msgs::msg::JointTrajectoryControllerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointTrajectoryControllerState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->desired != other.desired) {
      return false;
    }
    if (this->actual != other.actual) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->multi_dof_joint_names != other.multi_dof_joint_names) {
      return false;
    }
    if (this->multi_dof_desired != other.multi_dof_desired) {
      return false;
    }
    if (this->multi_dof_actual != other.multi_dof_actual) {
      return false;
    }
    if (this->multi_dof_error != other.multi_dof_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointTrajectoryControllerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointTrajectoryControllerState_

// alias to use template instance with default allocator
using JointTrajectoryControllerState =
  control_msgs::msg::JointTrajectoryControllerState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace control_msgs

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__STRUCT_HPP_
