// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/DynamicJointState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__DYNAMIC_JOINT_STATE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__DYNAMIC_JOINT_STATE__TRAITS_HPP_

#include "control_msgs/msg/detail/dynamic_joint_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'interface_values'
#include "control_msgs/msg/detail/interface_value__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::msg::DynamicJointState & msg,
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

  // member: interface_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.interface_values.size() == 0) {
      out << "interface_values: []\n";
    } else {
      out << "interface_values:\n";
      for (auto item : msg.interface_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::msg::DynamicJointState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::msg::DynamicJointState>()
{
  return "control_msgs::msg::DynamicJointState";
}

template<>
inline const char * name<control_msgs::msg::DynamicJointState>()
{
  return "control_msgs/msg/DynamicJointState";
}

template<>
struct has_fixed_size<control_msgs::msg::DynamicJointState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::DynamicJointState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::DynamicJointState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__DYNAMIC_JOINT_STATE__TRAITS_HPP_
