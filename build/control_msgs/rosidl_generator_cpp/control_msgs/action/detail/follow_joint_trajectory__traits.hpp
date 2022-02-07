// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:action/FollowJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__FOLLOW_JOINT_TRAJECTORY__TRAITS_HPP_
#define CONTROL_MSGS__ACTION__DETAIL__FOLLOW_JOINT_TRAJECTORY__TRAITS_HPP_

#include "control_msgs/action/detail/follow_joint_trajectory__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"
// Member 'multi_dof_trajectory'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__traits.hpp"
// Member 'path_tolerance'
// Member 'goal_tolerance'
#include "control_msgs/msg/detail/joint_tolerance__traits.hpp"
// Member 'component_path_tolerance'
// Member 'component_goal_tolerance'
#include "control_msgs/msg/detail/joint_component_tolerance__traits.hpp"
// Member 'goal_time_tolerance'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::FollowJointTrajectory_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory:\n";
    to_yaml(msg.trajectory, out, indentation + 2);
  }

  // member: multi_dof_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_trajectory:\n";
    to_yaml(msg.multi_dof_trajectory, out, indentation + 2);
  }

  // member: path_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_tolerance.size() == 0) {
      out << "path_tolerance: []\n";
    } else {
      out << "path_tolerance:\n";
      for (auto item : msg.path_tolerance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: component_path_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.component_path_tolerance.size() == 0) {
      out << "component_path_tolerance: []\n";
    } else {
      out << "component_path_tolerance:\n";
      for (auto item : msg.component_path_tolerance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: goal_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_tolerance.size() == 0) {
      out << "goal_tolerance: []\n";
    } else {
      out << "goal_tolerance:\n";
      for (auto item : msg.goal_tolerance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: component_goal_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.component_goal_tolerance.size() == 0) {
      out << "component_goal_tolerance: []\n";
    } else {
      out << "component_goal_tolerance:\n";
      for (auto item : msg.component_goal_tolerance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: goal_time_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_time_tolerance:\n";
    to_yaml(msg.goal_time_tolerance, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::action::FollowJointTrajectory_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::FollowJointTrajectory_Goal>()
{
  return "control_msgs::action::FollowJointTrajectory_Goal";
}

template<>
inline const char * name<control_msgs::action::FollowJointTrajectory_Goal>()
{
  return "control_msgs/action/FollowJointTrajectory_Goal";
}

template<>
struct has_fixed_size<control_msgs::action::FollowJointTrajectory_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::action::FollowJointTrajectory_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::action::FollowJointTrajectory_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::FollowJointTrajectory_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: error_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_string: ";
    value_to_yaml(msg.error_string, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::action::FollowJointTrajectory_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::FollowJointTrajectory_Result>()
{
  return "control_msgs::action::FollowJointTrajectory_Result";
}

template<>
inline const char * name<control_msgs::action::FollowJointTrajectory_Result>()
{
  return "control_msgs/action/FollowJointTrajectory_Result";
}

template<>
struct has_fixed_size<control_msgs::action::FollowJointTrajectory_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::action::FollowJointTrajectory_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::action::FollowJointTrajectory_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__traits.hpp"
// Member 'multi_dof_desired'
// Member 'multi_dof_actual'
// Member 'multi_dof_error'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::FollowJointTrajectory_Feedback & msg,
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

  // member: desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired:\n";
    to_yaml(msg.desired, out, indentation + 2);
  }

  // member: actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual:\n";
    to_yaml(msg.actual, out, indentation + 2);
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error:\n";
    to_yaml(msg.error, out, indentation + 2);
  }

  // member: multi_dof_joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.multi_dof_joint_names.size() == 0) {
      out << "multi_dof_joint_names: []\n";
    } else {
      out << "multi_dof_joint_names:\n";
      for (auto item : msg.multi_dof_joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: multi_dof_desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_desired:\n";
    to_yaml(msg.multi_dof_desired, out, indentation + 2);
  }

  // member: multi_dof_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_actual:\n";
    to_yaml(msg.multi_dof_actual, out, indentation + 2);
  }

  // member: multi_dof_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_dof_error:\n";
    to_yaml(msg.multi_dof_error, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const control_msgs::action::FollowJointTrajectory_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::FollowJointTrajectory_Feedback>()
{
  return "control_msgs::action::FollowJointTrajectory_Feedback";
}

template<>
inline const char * name<control_msgs::action::FollowJointTrajectory_Feedback>()
{
  return "control_msgs/action/FollowJointTrajectory_Feedback";
}

template<>
struct has_fixed_size<control_msgs::action::FollowJointTrajectory_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::action::FollowJointTrajectory_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::action::FollowJointTrajectory_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "control_msgs/action/detail/follow_joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::FollowJointTrajectory_SendGoal_Request & msg,
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

inline std::string to_yaml(const control_msgs::action::FollowJointTrajectory_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::FollowJointTrajectory_SendGoal_Request>()
{
  return "control_msgs::action::FollowJointTrajectory_SendGoal_Request";
}

template<>
inline const char * name<control_msgs::action::FollowJointTrajectory_SendGoal_Request>()
{
  return "control_msgs/action/FollowJointTrajectory_SendGoal_Request";
}

template<>
struct has_fixed_size<control_msgs::action::FollowJointTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::FollowJointTrajectory_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::FollowJointTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::FollowJointTrajectory_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::FollowJointTrajectory_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::FollowJointTrajectory_SendGoal_Response & msg,
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

inline std::string to_yaml(const control_msgs::action::FollowJointTrajectory_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::FollowJointTrajectory_SendGoal_Response>()
{
  return "control_msgs::action::FollowJointTrajectory_SendGoal_Response";
}

template<>
inline const char * name<control_msgs::action::FollowJointTrajectory_SendGoal_Response>()
{
  return "control_msgs/action/FollowJointTrajectory_SendGoal_Response";
}

template<>
struct has_fixed_size<control_msgs::action::FollowJointTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<control_msgs::action::FollowJointTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<control_msgs::action::FollowJointTrajectory_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::FollowJointTrajectory_SendGoal>()
{
  return "control_msgs::action::FollowJointTrajectory_SendGoal";
}

template<>
inline const char * name<control_msgs::action::FollowJointTrajectory_SendGoal>()
{
  return "control_msgs/action/FollowJointTrajectory_SendGoal";
}

template<>
struct has_fixed_size<control_msgs::action::FollowJointTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::action::FollowJointTrajectory_SendGoal_Request>::value &&
    has_fixed_size<control_msgs::action::FollowJointTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::action::FollowJointTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::action::FollowJointTrajectory_SendGoal_Request>::value &&
    has_bounded_size<control_msgs::action::FollowJointTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::action::FollowJointTrajectory_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::action::FollowJointTrajectory_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::action::FollowJointTrajectory_SendGoal_Response>
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
  const control_msgs::action::FollowJointTrajectory_GetResult_Request & msg,
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

inline std::string to_yaml(const control_msgs::action::FollowJointTrajectory_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::FollowJointTrajectory_GetResult_Request>()
{
  return "control_msgs::action::FollowJointTrajectory_GetResult_Request";
}

template<>
inline const char * name<control_msgs::action::FollowJointTrajectory_GetResult_Request>()
{
  return "control_msgs/action/FollowJointTrajectory_GetResult_Request";
}

template<>
struct has_fixed_size<control_msgs::action::FollowJointTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::FollowJointTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::FollowJointTrajectory_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::FollowJointTrajectory_GetResult_Response & msg,
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

inline std::string to_yaml(const control_msgs::action::FollowJointTrajectory_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::FollowJointTrajectory_GetResult_Response>()
{
  return "control_msgs::action::FollowJointTrajectory_GetResult_Response";
}

template<>
inline const char * name<control_msgs::action::FollowJointTrajectory_GetResult_Response>()
{
  return "control_msgs/action/FollowJointTrajectory_GetResult_Response";
}

template<>
struct has_fixed_size<control_msgs::action::FollowJointTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::FollowJointTrajectory_Result>::value> {};

template<>
struct has_bounded_size<control_msgs::action::FollowJointTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::FollowJointTrajectory_Result>::value> {};

template<>
struct is_message<control_msgs::action::FollowJointTrajectory_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::FollowJointTrajectory_GetResult>()
{
  return "control_msgs::action::FollowJointTrajectory_GetResult";
}

template<>
inline const char * name<control_msgs::action::FollowJointTrajectory_GetResult>()
{
  return "control_msgs/action/FollowJointTrajectory_GetResult";
}

template<>
struct has_fixed_size<control_msgs::action::FollowJointTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::action::FollowJointTrajectory_GetResult_Request>::value &&
    has_fixed_size<control_msgs::action::FollowJointTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::action::FollowJointTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::action::FollowJointTrajectory_GetResult_Request>::value &&
    has_bounded_size<control_msgs::action::FollowJointTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::action::FollowJointTrajectory_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::action::FollowJointTrajectory_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::action::FollowJointTrajectory_GetResult_Response>
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
// #include "control_msgs/action/detail/follow_joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const control_msgs::action::FollowJointTrajectory_FeedbackMessage & msg,
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

inline std::string to_yaml(const control_msgs::action::FollowJointTrajectory_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<control_msgs::action::FollowJointTrajectory_FeedbackMessage>()
{
  return "control_msgs::action::FollowJointTrajectory_FeedbackMessage";
}

template<>
inline const char * name<control_msgs::action::FollowJointTrajectory_FeedbackMessage>()
{
  return "control_msgs/action/FollowJointTrajectory_FeedbackMessage";
}

template<>
struct has_fixed_size<control_msgs::action::FollowJointTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::FollowJointTrajectory_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::FollowJointTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::FollowJointTrajectory_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::FollowJointTrajectory_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<control_msgs::action::FollowJointTrajectory>
  : std::true_type
{
};

template<>
struct is_action_goal<control_msgs::action::FollowJointTrajectory_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<control_msgs::action::FollowJointTrajectory_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<control_msgs::action::FollowJointTrajectory_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CONTROL_MSGS__ACTION__DETAIL__FOLLOW_JOINT_TRAJECTORY__TRAITS_HPP_
