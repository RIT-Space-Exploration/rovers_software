// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/JointComponentTolerance.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_COMPONENT_TOLERANCE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_COMPONENT_TOLERANCE__TRAITS_HPP_

#include "control_msgs/msg/detail/joint_component_tolerance__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::msg::JointComponentTolerance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_name: ";
    value_to_yaml(msg.joint_name, out);
    out << "\n";
  }

  // member: component
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "component: ";
    value_to_yaml(msg.component, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    value_to_yaml(msg.acceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::msg::JointComponentTolerance & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::msg::JointComponentTolerance>()
{
  return "control_msgs::msg::JointComponentTolerance";
}

template<>
inline const char * name<control_msgs::msg::JointComponentTolerance>()
{
  return "control_msgs/msg/JointComponentTolerance";
}

template<>
struct has_fixed_size<control_msgs::msg::JointComponentTolerance>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::JointComponentTolerance>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::JointComponentTolerance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_COMPONENT_TOLERANCE__TRAITS_HPP_
