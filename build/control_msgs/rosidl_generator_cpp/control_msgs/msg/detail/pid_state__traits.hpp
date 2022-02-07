// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/PidState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__PID_STATE__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__PID_STATE__TRAITS_HPP_

#include "control_msgs/msg/detail/pid_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'timestep'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::msg::PidState & msg,
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

  // member: timestep
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestep:\n";
    to_yaml(msg.timestep, out, indentation + 2);
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    value_to_yaml(msg.error, out);
    out << "\n";
  }

  // member: error_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_dot: ";
    value_to_yaml(msg.error_dot, out);
    out << "\n";
  }

  // member: p_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_error: ";
    value_to_yaml(msg.p_error, out);
    out << "\n";
  }

  // member: i_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_error: ";
    value_to_yaml(msg.i_error, out);
    out << "\n";
  }

  // member: d_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_error: ";
    value_to_yaml(msg.d_error, out);
    out << "\n";
  }

  // member: p_term
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_term: ";
    value_to_yaml(msg.p_term, out);
    out << "\n";
  }

  // member: i_term
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_term: ";
    value_to_yaml(msg.i_term, out);
    out << "\n";
  }

  // member: d_term
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_term: ";
    value_to_yaml(msg.d_term, out);
    out << "\n";
  }

  // member: i_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_max: ";
    value_to_yaml(msg.i_max, out);
    out << "\n";
  }

  // member: i_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_min: ";
    value_to_yaml(msg.i_min, out);
    out << "\n";
  }

  // member: output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output: ";
    value_to_yaml(msg.output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::msg::PidState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::msg::PidState>()
{
  return "control_msgs::msg::PidState";
}

template<>
inline const char * name<control_msgs::msg::PidState>()
{
  return "control_msgs/msg/PidState";
}

template<>
struct has_fixed_size<control_msgs::msg::PidState>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<control_msgs::msg::PidState>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<control_msgs::msg::PidState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__PID_STATE__TRAITS_HPP_
