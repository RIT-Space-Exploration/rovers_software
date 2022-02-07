// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:srv/QueryTrajectoryState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__TRAITS_HPP_
#define CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__TRAITS_HPP_

#include "control_msgs/srv/detail/query_trajectory_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::srv::QueryTrajectoryState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time:\n";
    to_yaml(msg.time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::srv::QueryTrajectoryState_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::srv::QueryTrajectoryState_Request>()
{
  return "control_msgs::srv::QueryTrajectoryState_Request";
}

template<>
inline const char * name<control_msgs::srv::QueryTrajectoryState_Request>()
{
  return "control_msgs/srv/QueryTrajectoryState_Request";
}

template<>
struct has_fixed_size<control_msgs::srv::QueryTrajectoryState_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<control_msgs::srv::QueryTrajectoryState_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<control_msgs::srv::QueryTrajectoryState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::srv::QueryTrajectoryState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.name.size() == 0) {
      out << "name: []\n";
    } else {
      out << "name:\n";
      for (auto item : msg.name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []\n";
    } else {
      out << "acceleration:\n";
      for (auto item : msg.acceleration) {
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

inline std::string to_yaml(const control_msgs::srv::QueryTrajectoryState_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::srv::QueryTrajectoryState_Response>()
{
  return "control_msgs::srv::QueryTrajectoryState_Response";
}

template<>
inline const char * name<control_msgs::srv::QueryTrajectoryState_Response>()
{
  return "control_msgs/srv/QueryTrajectoryState_Response";
}

template<>
struct has_fixed_size<control_msgs::srv::QueryTrajectoryState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::srv::QueryTrajectoryState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::srv::QueryTrajectoryState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::srv::QueryTrajectoryState>()
{
  return "control_msgs::srv::QueryTrajectoryState";
}

template<>
inline const char * name<control_msgs::srv::QueryTrajectoryState>()
{
  return "control_msgs/srv/QueryTrajectoryState";
}

template<>
struct has_fixed_size<control_msgs::srv::QueryTrajectoryState>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::srv::QueryTrajectoryState_Request>::value &&
    has_fixed_size<control_msgs::srv::QueryTrajectoryState_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::srv::QueryTrajectoryState>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::srv::QueryTrajectoryState_Request>::value &&
    has_bounded_size<control_msgs::srv::QueryTrajectoryState_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::srv::QueryTrajectoryState>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::srv::QueryTrajectoryState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::srv::QueryTrajectoryState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__TRAITS_HPP_
