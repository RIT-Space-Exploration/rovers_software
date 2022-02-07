// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:action/PointHead.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__TRAITS_HPP_
#define CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__TRAITS_HPP_

#include "control_msgs/action/detail/point_head__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/point_stamped__traits.hpp"
// Member 'pointing_axis'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'min_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::PointHead_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_yaml(msg.target, out, indentation + 2);
  }

  // member: pointing_axis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pointing_axis:\n";
    to_yaml(msg.pointing_axis, out, indentation + 2);
  }

  // member: pointing_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pointing_frame: ";
    value_to_yaml(msg.pointing_frame, out);
    out << "\n";
  }

  // member: min_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_duration:\n";
    to_yaml(msg.min_duration, out, indentation + 2);
  }

  // member: max_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity: ";
    value_to_yaml(msg.max_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::action::PointHead_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::PointHead_Goal>()
{
  return "control_msgs::action::PointHead_Goal";
}

template<>
inline const char * name<control_msgs::action::PointHead_Goal>()
{
  return "control_msgs/action/PointHead_Goal";
}

template<>
struct has_fixed_size<control_msgs::action::PointHead_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::action::PointHead_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::action::PointHead_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::PointHead_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::action::PointHead_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::PointHead_Result>()
{
  return "control_msgs::action::PointHead_Result";
}

template<>
inline const char * name<control_msgs::action::PointHead_Result>()
{
  return "control_msgs/action/PointHead_Result";
}

template<>
struct has_fixed_size<control_msgs::action::PointHead_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::action::PointHead_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::action::PointHead_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::PointHead_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pointing_angle_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pointing_angle_error: ";
    value_to_yaml(msg.pointing_angle_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::action::PointHead_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::PointHead_Feedback>()
{
  return "control_msgs::action::PointHead_Feedback";
}

template<>
inline const char * name<control_msgs::action::PointHead_Feedback>()
{
  return "control_msgs/action/PointHead_Feedback";
}

template<>
struct has_fixed_size<control_msgs::action::PointHead_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::action::PointHead_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::action::PointHead_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "control_msgs/action/detail/point_head__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::PointHead_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::action::PointHead_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::PointHead_SendGoal_Request>()
{
  return "control_msgs::action::PointHead_SendGoal_Request";
}

template<>
inline const char * name<control_msgs::action::PointHead_SendGoal_Request>()
{
  return "control_msgs/action/PointHead_SendGoal_Request";
}

template<>
struct has_fixed_size<control_msgs::action::PointHead_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::PointHead_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::PointHead_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::PointHead_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::PointHead_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::PointHead_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::action::PointHead_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::PointHead_SendGoal_Response>()
{
  return "control_msgs::action::PointHead_SendGoal_Response";
}

template<>
inline const char * name<control_msgs::action::PointHead_SendGoal_Response>()
{
  return "control_msgs/action/PointHead_SendGoal_Response";
}

template<>
struct has_fixed_size<control_msgs::action::PointHead_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<control_msgs::action::PointHead_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<control_msgs::action::PointHead_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::PointHead_SendGoal>()
{
  return "control_msgs::action::PointHead_SendGoal";
}

template<>
inline const char * name<control_msgs::action::PointHead_SendGoal>()
{
  return "control_msgs/action/PointHead_SendGoal";
}

template<>
struct has_fixed_size<control_msgs::action::PointHead_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::action::PointHead_SendGoal_Request>::value &&
    has_fixed_size<control_msgs::action::PointHead_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::action::PointHead_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::action::PointHead_SendGoal_Request>::value &&
    has_bounded_size<control_msgs::action::PointHead_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::action::PointHead_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::action::PointHead_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::action::PointHead_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::PointHead_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::action::PointHead_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::PointHead_GetResult_Request>()
{
  return "control_msgs::action::PointHead_GetResult_Request";
}

template<>
inline const char * name<control_msgs::action::PointHead_GetResult_Request>()
{
  return "control_msgs/action/PointHead_GetResult_Request";
}

template<>
struct has_fixed_size<control_msgs::action::PointHead_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::PointHead_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::PointHead_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/point_head__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::PointHead_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::action::PointHead_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::PointHead_GetResult_Response>()
{
  return "control_msgs::action::PointHead_GetResult_Response";
}

template<>
inline const char * name<control_msgs::action::PointHead_GetResult_Response>()
{
  return "control_msgs/action/PointHead_GetResult_Response";
}

template<>
struct has_fixed_size<control_msgs::action::PointHead_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::PointHead_Result>::value> {};

template<>
struct has_bounded_size<control_msgs::action::PointHead_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::PointHead_Result>::value> {};

template<>
struct is_message<control_msgs::action::PointHead_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::PointHead_GetResult>()
{
  return "control_msgs::action::PointHead_GetResult";
}

template<>
inline const char * name<control_msgs::action::PointHead_GetResult>()
{
  return "control_msgs/action/PointHead_GetResult";
}

template<>
struct has_fixed_size<control_msgs::action::PointHead_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::action::PointHead_GetResult_Request>::value &&
    has_fixed_size<control_msgs::action::PointHead_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::action::PointHead_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::action::PointHead_GetResult_Request>::value &&
    has_bounded_size<control_msgs::action::PointHead_GetResult_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::action::PointHead_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::action::PointHead_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::action::PointHead_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "control_msgs/action/detail/point_head__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::PointHead_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::action::PointHead_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::PointHead_FeedbackMessage>()
{
  return "control_msgs::action::PointHead_FeedbackMessage";
}

template<>
inline const char * name<control_msgs::action::PointHead_FeedbackMessage>()
{
  return "control_msgs/action/PointHead_FeedbackMessage";
}

template<>
struct has_fixed_size<control_msgs::action::PointHead_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::PointHead_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::PointHead_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::PointHead_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::PointHead_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<control_msgs::action::PointHead>
  : std::true_type
{
};

template<>
struct is_action_goal<control_msgs::action::PointHead_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<control_msgs::action::PointHead_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<control_msgs::action::PointHead_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__TRAITS_HPP_
