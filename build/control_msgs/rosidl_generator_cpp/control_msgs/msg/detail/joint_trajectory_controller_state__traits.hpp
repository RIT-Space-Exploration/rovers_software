// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/JointTrajectoryControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__TRAITS_HPP_

#include "control_msgs/msg/detail/joint_trajectory_controller_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__traits.hpp"
// Member 'multi_dof_desired'
// Member 'multi_dof_actual'
// Member 'multi_dof_error'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::msg::JointTrajectoryControllerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired:\n";
    to_yaml(msg.desired, out, indentation + 2);
  }

  // member: actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual:\n";
    to_yaml(msg.actual, out, indentation + 2);
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error:\n";
    to_yaml(msg.error, out, indentation + 2);
  }

  // member: multi_dof_joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.multi_dof_joint_names.size() == 0) {
      out << "multi_dof_joint_names: []\n";
    } else {
      out << "multi_dof_joint_names:\n";
      for (auto item : msg.multi_dof_joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: multi_dof_desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_desired:\n";
    to_yaml(msg.multi_dof_desired, out, indentation + 2);
  }

  // member: multi_dof_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_actual:\n";
    to_yaml(msg.multi_dof_actual, out, indentation + 2);
  }

  // member: multi_dof_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_error:\n";
    to_yaml(msg.multi_dof_error, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::msg::JointTrajectoryControllerState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::msg::JointTrajectoryControllerState>()
{
  return "control_msgs::msg::JointTrajectoryControllerState";
}

template<>
inline const char * name<control_msgs::msg::JointTrajectoryControllerState>()
{
  return "control_msgs/msg/JointTrajectoryControllerState";
}

template<>
struct has_fixed_size<control_msgs::msg::JointTrajectoryControllerState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::JointTrajectoryControllerState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::JointTrajectoryControllerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__TRAITS_HPP_
