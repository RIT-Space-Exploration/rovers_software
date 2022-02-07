// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:srv/ListHardwareInterfaces.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__TRAITS_HPP_

#include "controller_manager_msgs/srv/detail/list_hardware_interfaces__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_manager_msgs::srv::ListHardwareInterfaces_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_manager_msgs::srv::ListHardwareInterfaces_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_manager_msgs::srv::ListHardwareInterfaces_Request>()
{
  return "controller_manager_msgs::srv::ListHardwareInterfaces_Request";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListHardwareInterfaces_Request>()
{
  return "controller_manager_msgs/srv/ListHardwareInterfaces_Request";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListHardwareInterfaces_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListHardwareInterfaces_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_manager_msgs::srv::ListHardwareInterfaces_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'command_interfaces'
// Member 'state_interfaces'
#include "controller_manager_msgs/msg/detail/hardware_interface__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_manager_msgs::srv::ListHardwareInterfaces_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command_interfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.command_interfaces.size() == 0) {
      out << "command_interfaces: []\n";
    } else {
      out << "command_interfaces:\n";
      for (auto item : msg.command_interfaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: state_interfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state_interfaces.size() == 0) {
      out << "state_interfaces: []\n";
    } else {
      out << "state_interfaces:\n";
      for (auto item : msg.state_interfaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_manager_msgs::srv::ListHardwareInterfaces_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_manager_msgs::srv::ListHardwareInterfaces_Response>()
{
  return "controller_manager_msgs::srv::ListHardwareInterfaces_Response";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListHardwareInterfaces_Response>()
{
  return "controller_manager_msgs/srv/ListHardwareInterfaces_Response";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListHardwareInterfaces_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListHardwareInterfaces_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::srv::ListHardwareInterfaces_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::ListHardwareInterfaces>()
{
  return "controller_manager_msgs::srv::ListHardwareInterfaces";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListHardwareInterfaces>()
{
  return "controller_manager_msgs/srv/ListHardwareInterfaces";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListHardwareInterfaces>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_manager_msgs::srv::ListHardwareInterfaces_Request>::value &&
    has_fixed_size<controller_manager_msgs::srv::ListHardwareInterfaces_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListHardwareInterfaces>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_manager_msgs::srv::ListHardwareInterfaces_Request>::value &&
    has_bounded_size<controller_manager_msgs::srv::ListHardwareInterfaces_Response>::value
  >
{
};

template<>
struct is_service<controller_manager_msgs::srv::ListHardwareInterfaces>
  : std::true_type
{
};

template<>
struct is_service_request<controller_manager_msgs::srv::ListHardwareInterfaces_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_manager_msgs::srv::ListHardwareInterfaces_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_HARDWARE_INTERFACES__TRAITS_HPP_