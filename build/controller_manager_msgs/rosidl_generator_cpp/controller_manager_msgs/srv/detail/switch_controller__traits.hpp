// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:srv/SwitchController.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__TRAITS_HPP_

#include "controller_manager_msgs/srv/detail/switch_controller__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_manager_msgs::srv::SwitchController_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_controllers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start_controllers.size() == 0) {
      out << "start_controllers: []\n";
    } else {
      out << "start_controllers:\n";
      for (auto item : msg.start_controllers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stop_controllers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stop_controllers.size() == 0) {
      out << "stop_controllers: []\n";
    } else {
      out << "stop_controllers:\n";
      for (auto item : msg.stop_controllers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: strictness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strictness: ";
    value_to_yaml(msg.strictness, out);
    out << "\n";
  }

  // member: start_asap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_asap: ";
    value_to_yaml(msg.start_asap, out);
    out << "\n";
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout:\n";
    to_yaml(msg.timeout, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_manager_msgs::srv::SwitchController_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_manager_msgs::srv::SwitchController_Request>()
{
  return "controller_manager_msgs::srv::SwitchController_Request";
}

template<>
inline const char * name<controller_manager_msgs::srv::SwitchController_Request>()
{
  return "controller_manager_msgs/srv/SwitchController_Request";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::SwitchController_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::SwitchController_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::srv::SwitchController_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_manager_msgs::srv::SwitchController_Response & msg,
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

inline std::string to_yaml(const controller_manager_msgs::srv::SwitchController_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_manager_msgs::srv::SwitchController_Response>()
{
  return "controller_manager_msgs::srv::SwitchController_Response";
}

template<>
inline const char * name<controller_manager_msgs::srv::SwitchController_Response>()
{
  return "controller_manager_msgs/srv/SwitchController_Response";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::SwitchController_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::SwitchController_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_manager_msgs::srv::SwitchController_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::SwitchController>()
{
  return "controller_manager_msgs::srv::SwitchController";
}

template<>
inline const char * name<controller_manager_msgs::srv::SwitchController>()
{
  return "controller_manager_msgs/srv/SwitchController";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::SwitchController>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_manager_msgs::srv::SwitchController_Request>::value &&
    has_fixed_size<controller_manager_msgs::srv::SwitchController_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_manager_msgs::srv::SwitchController>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_manager_msgs::srv::SwitchController_Request>::value &&
    has_bounded_size<controller_manager_msgs::srv::SwitchController_Response>::value
  >
{
};

template<>
struct is_service<controller_manager_msgs::srv::SwitchController>
  : std::true_type
{
};

template<>
struct is_service_request<controller_manager_msgs::srv::SwitchController_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_manager_msgs::srv::SwitchController_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__TRAITS_HPP_
