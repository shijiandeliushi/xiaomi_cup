// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:action/AutoCharging.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__AUTO_CHARGING__TRAITS_HPP_
#define PROTOCOL__ACTION__DETAIL__AUTO_CHARGING__TRAITS_HPP_

#include "protocol/action/detail/auto_charging__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::AutoCharging_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
  }

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    value_to_yaml(msg.start, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::action::AutoCharging_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::AutoCharging_Goal>()
{
  return "protocol::action::AutoCharging_Goal";
}

template<>
inline const char * name<protocol::action::AutoCharging_Goal>()
{
  return "protocol/action/AutoCharging_Goal";
}

template<>
struct has_fixed_size<protocol::action::AutoCharging_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<protocol::action::AutoCharging_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<protocol::action::AutoCharging_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::AutoCharging_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::action::AutoCharging_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::AutoCharging_Result>()
{
  return "protocol::action::AutoCharging_Result";
}

template<>
inline const char * name<protocol::action::AutoCharging_Result>()
{
  return "protocol/action/AutoCharging_Result";
}

template<>
struct has_fixed_size<protocol::action::AutoCharging_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::action::AutoCharging_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::action::AutoCharging_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::AutoCharging_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: charging_stage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charging_stage: ";
    value_to_yaml(msg.charging_stage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::action::AutoCharging_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::AutoCharging_Feedback>()
{
  return "protocol::action::AutoCharging_Feedback";
}

template<>
inline const char * name<protocol::action::AutoCharging_Feedback>()
{
  return "protocol/action/AutoCharging_Feedback";
}

template<>
struct has_fixed_size<protocol::action::AutoCharging_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::action::AutoCharging_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::action::AutoCharging_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "protocol/action/detail/auto_charging__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::AutoCharging_SendGoal_Request & msg,
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

inline std::string to_yaml(const protocol::action::AutoCharging_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::AutoCharging_SendGoal_Request>()
{
  return "protocol::action::AutoCharging_SendGoal_Request";
}

template<>
inline const char * name<protocol::action::AutoCharging_SendGoal_Request>()
{
  return "protocol/action/AutoCharging_SendGoal_Request";
}

template<>
struct has_fixed_size<protocol::action::AutoCharging_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<protocol::action::AutoCharging_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<protocol::action::AutoCharging_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<protocol::action::AutoCharging_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<protocol::action::AutoCharging_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::AutoCharging_SendGoal_Response & msg,
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

inline std::string to_yaml(const protocol::action::AutoCharging_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::AutoCharging_SendGoal_Response>()
{
  return "protocol::action::AutoCharging_SendGoal_Response";
}

template<>
inline const char * name<protocol::action::AutoCharging_SendGoal_Response>()
{
  return "protocol/action/AutoCharging_SendGoal_Response";
}

template<>
struct has_fixed_size<protocol::action::AutoCharging_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<protocol::action::AutoCharging_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<protocol::action::AutoCharging_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::action::AutoCharging_SendGoal>()
{
  return "protocol::action::AutoCharging_SendGoal";
}

template<>
inline const char * name<protocol::action::AutoCharging_SendGoal>()
{
  return "protocol/action/AutoCharging_SendGoal";
}

template<>
struct has_fixed_size<protocol::action::AutoCharging_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::action::AutoCharging_SendGoal_Request>::value &&
    has_fixed_size<protocol::action::AutoCharging_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::action::AutoCharging_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::action::AutoCharging_SendGoal_Request>::value &&
    has_bounded_size<protocol::action::AutoCharging_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<protocol::action::AutoCharging_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::action::AutoCharging_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::action::AutoCharging_SendGoal_Response>
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
  const protocol::action::AutoCharging_GetResult_Request & msg,
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

inline std::string to_yaml(const protocol::action::AutoCharging_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::AutoCharging_GetResult_Request>()
{
  return "protocol::action::AutoCharging_GetResult_Request";
}

template<>
inline const char * name<protocol::action::AutoCharging_GetResult_Request>()
{
  return "protocol/action/AutoCharging_GetResult_Request";
}

template<>
struct has_fixed_size<protocol::action::AutoCharging_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<protocol::action::AutoCharging_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<protocol::action::AutoCharging_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "protocol/action/detail/auto_charging__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::AutoCharging_GetResult_Response & msg,
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

inline std::string to_yaml(const protocol::action::AutoCharging_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::AutoCharging_GetResult_Response>()
{
  return "protocol::action::AutoCharging_GetResult_Response";
}

template<>
inline const char * name<protocol::action::AutoCharging_GetResult_Response>()
{
  return "protocol/action/AutoCharging_GetResult_Response";
}

template<>
struct has_fixed_size<protocol::action::AutoCharging_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<protocol::action::AutoCharging_Result>::value> {};

template<>
struct has_bounded_size<protocol::action::AutoCharging_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<protocol::action::AutoCharging_Result>::value> {};

template<>
struct is_message<protocol::action::AutoCharging_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::action::AutoCharging_GetResult>()
{
  return "protocol::action::AutoCharging_GetResult";
}

template<>
inline const char * name<protocol::action::AutoCharging_GetResult>()
{
  return "protocol/action/AutoCharging_GetResult";
}

template<>
struct has_fixed_size<protocol::action::AutoCharging_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::action::AutoCharging_GetResult_Request>::value &&
    has_fixed_size<protocol::action::AutoCharging_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::action::AutoCharging_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::action::AutoCharging_GetResult_Request>::value &&
    has_bounded_size<protocol::action::AutoCharging_GetResult_Response>::value
  >
{
};

template<>
struct is_service<protocol::action::AutoCharging_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::action::AutoCharging_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::action::AutoCharging_GetResult_Response>
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
// #include "protocol/action/detail/auto_charging__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::AutoCharging_FeedbackMessage & msg,
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

inline std::string to_yaml(const protocol::action::AutoCharging_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::AutoCharging_FeedbackMessage>()
{
  return "protocol::action::AutoCharging_FeedbackMessage";
}

template<>
inline const char * name<protocol::action::AutoCharging_FeedbackMessage>()
{
  return "protocol/action/AutoCharging_FeedbackMessage";
}

template<>
struct has_fixed_size<protocol::action::AutoCharging_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<protocol::action::AutoCharging_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<protocol::action::AutoCharging_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<protocol::action::AutoCharging_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<protocol::action::AutoCharging_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<protocol::action::AutoCharging>
  : std::true_type
{
};

template<>
struct is_action_goal<protocol::action::AutoCharging_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<protocol::action::AutoCharging_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<protocol::action::AutoCharging_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PROTOCOL__ACTION__DETAIL__AUTO_CHARGING__TRAITS_HPP_
