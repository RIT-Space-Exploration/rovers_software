// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:msg/HardwareInterface.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__TRAITS_HPP_

#include "controller_manager_msgs/msg/detail/hardware_interface__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_manager_msgs::msg::HardwareInterface & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: is_claimed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_claimed: ";
    value_to_yaml(msg.is_claimed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_manager_msgs::msg::HardwareInterface & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_manager_msgs::msg::HardwareInterface>()
{
  return "controller_manager_msgs::msg::HardwareInterface";
}

template<>
inline const char * name<controller_manager_msgs::msg::HardwareInterface>()
{
  return "controller_manager_msgs/msg/HardwareInterface";
}

template<>
struct has_fixed_size<controller_manager_msgs::msg::HardwareInterface>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::msg::HardwareInterface>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::msg::HardwareInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__MSG__DETAIL__HARDWARE_INTERFACE__TRAITS_HPP_
