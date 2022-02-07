// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:srv/ListControllerTypes.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLER_TYPES__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLER_TYPES__TRAITS_HPP_

#include "controller_manager_msgs/srv/detail/list_controller_types__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_manager_msgs::srv::ListControllerTypes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_manager_msgs::srv::ListControllerTypes_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_manager_msgs::srv::ListControllerTypes_Request>()
{
  return "controller_manager_msgs::srv::ListControllerTypes_Request";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListControllerTypes_Request>()
{
  return "controller_manager_msgs/srv/ListControllerTypes_Request";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListControllerTypes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListControllerTypes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_manager_msgs::srv::ListControllerTypes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_manager_msgs::srv::ListControllerTypes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: types
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.types.size() == 0) {
      out << "types: []\n";
    } else {
      out << "types:\n";
      for (auto item : msg.types) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: base_classes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.base_classes.size() == 0) {
      out << "base_classes: []\n";
    } else {
      out << "base_classes:\n";
      for (auto item : msg.base_classes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_manager_msgs::srv::ListControllerTypes_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_manager_msgs::srv::ListControllerTypes_Response>()
{
  return "controller_manager_msgs::srv::ListControllerTypes_Response";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListControllerTypes_Response>()
{
  return "controller_manager_msgs/srv/ListControllerTypes_Response";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListControllerTypes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListControllerTypes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::srv::ListControllerTypes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::ListControllerTypes>()
{
  return "controller_manager_msgs::srv::ListControllerTypes";
}

template<>
inline const char * name<controller_manager_msgs::srv::ListControllerTypes>()
{
  return "controller_manager_msgs/srv/ListControllerTypes";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::ListControllerTypes>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_manager_msgs::srv::ListControllerTypes_Request>::value &&
    has_fixed_size<controller_manager_msgs::srv::ListControllerTypes_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_manager_msgs::srv::ListControllerTypes>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_manager_msgs::srv::ListControllerTypes_Request>::value &&
    has_bounded_size<controller_manager_msgs::srv::ListControllerTypes_Response>::value
  >
{
};

template<>
struct is_service<controller_manager_msgs::srv::ListControllerTypes>
  : std::true_type
{
};

template<>
struct is_service_request<controller_manager_msgs::srv::ListControllerTypes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_manager_msgs::srv::ListControllerTypes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LIST_CONTROLLER_TYPES__TRAITS_HPP_
