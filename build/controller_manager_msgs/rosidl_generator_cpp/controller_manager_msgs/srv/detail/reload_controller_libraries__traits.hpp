// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:srv/ReloadControllerLibraries.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__TRAITS_HPP_

#include "controller_manager_msgs/srv/detail/reload_controller_libraries__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_manager_msgs::srv::ReloadControllerLibraries_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: force_kill
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_kill: ";
    value_to_yaml(msg.force_kill, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_manager_msgs::srv::ReloadControllerLibraries_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_manager_msgs::srv::ReloadControllerLibraries_Request>()
{
  return "controller_manager_msgs::srv::ReloadControllerLibraries_Request";
}

template<>
inline const char * name<controller_manager_msgs::srv::ReloadControllerLibraries_Request>()
{
  return "controller_manager_msgs/srv/ReloadControllerLibraries_Request";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ReloadControllerLibraries_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ReloadControllerLibraries_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_manager_msgs::srv::ReloadControllerLibraries_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_manager_msgs::srv::ReloadControllerLibraries_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ok: ";
    value_to_yaml(msg.ok, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_manager_msgs::srv::ReloadControllerLibraries_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_manager_msgs::srv::ReloadControllerLibraries_Response>()
{
  return "controller_manager_msgs::srv::ReloadControllerLibraries_Response";
}

template<>
inline const char * name<controller_manager_msgs::srv::ReloadControllerLibraries_Response>()
{
  return "controller_manager_msgs/srv/ReloadControllerLibraries_Response";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ReloadControllerLibraries_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ReloadControllerLibraries_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_manager_msgs::srv::ReloadControllerLibraries_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::ReloadControllerLibraries>()
{
  return "controller_manager_msgs::srv::ReloadControllerLibraries";
}

template<>
inline const char * name<controller_manager_msgs::srv::ReloadControllerLibraries>()
{
  return "controller_manager_msgs/srv/ReloadControllerLibraries";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ReloadControllerLibraries>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_manager_msgs::srv::ReloadControllerLibraries_Request>::value &&
    has_fixed_size<controller_manager_msgs::srv::ReloadControllerLibraries_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ReloadControllerLibraries>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_manager_msgs::srv::ReloadControllerLibraries_Request>::value &&
    has_bounded_size<controller_manager_msgs::srv::ReloadControllerLibraries_Response>::value
  >
{
};

template<>
struct is_service<controller_manager_msgs::srv::ReloadControllerLibraries>
  : std::true_type
{
};

template<>
struct is_service_request<controller_manager_msgs::srv::ReloadControllerLibraries_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_manager_msgs::srv::ReloadControllerLibraries_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__RELOAD_CONTROLLER_LIBRARIES__TRAITS_HPP_
