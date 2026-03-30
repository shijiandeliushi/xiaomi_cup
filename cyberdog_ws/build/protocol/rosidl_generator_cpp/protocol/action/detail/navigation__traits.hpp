// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:action/Navigation.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__NAVIGATION__TRAITS_HPP_
#define PROTOCOL__ACTION__DETAIL__NAVIGATION__TRAITS_HPP_

#include "protocol/action/detail/navigation__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'tracking_roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::Navigation_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nav_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_type: ";
    value_to_yaml(msg.nav_type, out);
    out << "\n";
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: label_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label_id: ";
    value_to_yaml(msg.label_id, out);
    out << "\n";
  }

  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    value_to_yaml(msg.map_name, out);
    out << "\n";
  }

  // member: tracking_roi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_roi:\n";
    to_yaml(msg.tracking_roi, out, indentation + 2);
  }

  // member: relative_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_pos: ";
    value_to_yaml(msg.relative_pos, out);
    out << "\n";
  }

  // member: keep_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keep_distance: ";
    value_to_yaml(msg.keep_distance, out);
    out << "\n";
  }

  // member: outdoor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outdoor: ";
    value_to_yaml(msg.outdoor, out);
    out << "\n";
  }

  // member: object_tracking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_tracking: ";
    value_to_yaml(msg.object_tracking, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::action::Navigation_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::Navigation_Goal>()
{
  return "protocol::action::Navigation_Goal";
}

template<>
inline const char * name<protocol::action::Navigation_Goal>()
{
  return "protocol/action/Navigation_Goal";
}

template<>
struct has_fixed_size<protocol::action::Navigation_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::action::Navigation_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::action::Navigation_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::Navigation_Result & msg,
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

inline std::string to_yaml(const protocol::action::Navigation_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::Navigation_Result>()
{
  return "protocol::action::Navigation_Result";
}

template<>
inline const char * name<protocol::action::Navigation_Result>()
{
  return "protocol/action/Navigation_Result";
}

template<>
struct has_fixed_size<protocol::action::Navigation_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::action::Navigation_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::action::Navigation_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::Navigation_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_code: ";
    value_to_yaml(msg.feedback_code, out);
    out << "\n";
  }

  // member: feedback_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_msg: ";
    value_to_yaml(msg.feedback_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::action::Navigation_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::Navigation_Feedback>()
{
  return "protocol::action::Navigation_Feedback";
}

template<>
inline const char * name<protocol::action::Navigation_Feedback>()
{
  return "protocol/action/Navigation_Feedback";
}

template<>
struct has_fixed_size<protocol::action::Navigation_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::action::Navigation_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::action::Navigation_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "protocol/action/detail/navigation__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::Navigation_SendGoal_Request & msg,
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

inline std::string to_yaml(const protocol::action::Navigation_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::Navigation_SendGoal_Request>()
{
  return "protocol::action::Navigation_SendGoal_Request";
}

template<>
inline const char * name<protocol::action::Navigation_SendGoal_Request>()
{
  return "protocol/action/Navigation_SendGoal_Request";
}

template<>
struct has_fixed_size<protocol::action::Navigation_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<protocol::action::Navigation_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<protocol::action::Navigation_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<protocol::action::Navigation_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<protocol::action::Navigation_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::Navigation_SendGoal_Response & msg,
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

inline std::string to_yaml(const protocol::action::Navigation_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::Navigation_SendGoal_Response>()
{
  return "protocol::action::Navigation_SendGoal_Response";
}

template<>
inline const char * name<protocol::action::Navigation_SendGoal_Response>()
{
  return "protocol/action/Navigation_SendGoal_Response";
}

template<>
struct has_fixed_size<protocol::action::Navigation_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<protocol::action::Navigation_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<protocol::action::Navigation_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::action::Navigation_SendGoal>()
{
  return "protocol::action::Navigation_SendGoal";
}

template<>
inline const char * name<protocol::action::Navigation_SendGoal>()
{
  return "protocol/action/Navigation_SendGoal";
}

template<>
struct has_fixed_size<protocol::action::Navigation_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::action::Navigation_SendGoal_Request>::value &&
    has_fixed_size<protocol::action::Navigation_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::action::Navigation_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::action::Navigation_SendGoal_Request>::value &&
    has_bounded_size<protocol::action::Navigation_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<protocol::action::Navigation_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::action::Navigation_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::action::Navigation_SendGoal_Response>
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
  const protocol::action::Navigation_GetResult_Request & msg,
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

inline std::string to_yaml(const protocol::action::Navigation_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::Navigation_GetResult_Request>()
{
  return "protocol::action::Navigation_GetResult_Request";
}

template<>
inline const char * name<protocol::action::Navigation_GetResult_Request>()
{
  return "protocol/action/Navigation_GetResult_Request";
}

template<>
struct has_fixed_size<protocol::action::Navigation_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<protocol::action::Navigation_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<protocol::action::Navigation_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "protocol/action/detail/navigation__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::Navigation_GetResult_Response & msg,
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

inline std::string to_yaml(const protocol::action::Navigation_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::Navigation_GetResult_Response>()
{
  return "protocol::action::Navigation_GetResult_Response";
}

template<>
inline const char * name<protocol::action::Navigation_GetResult_Response>()
{
  return "protocol/action/Navigation_GetResult_Response";
}

template<>
struct has_fixed_size<protocol::action::Navigation_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<protocol::action::Navigation_Result>::value> {};

template<>
struct has_bounded_size<protocol::action::Navigation_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<protocol::action::Navigation_Result>::value> {};

template<>
struct is_message<protocol::action::Navigation_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::action::Navigation_GetResult>()
{
  return "protocol::action::Navigation_GetResult";
}

template<>
inline const char * name<protocol::action::Navigation_GetResult>()
{
  return "protocol/action/Navigation_GetResult";
}

template<>
struct has_fixed_size<protocol::action::Navigation_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::action::Navigation_GetResult_Request>::value &&
    has_fixed_size<protocol::action::Navigation_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::action::Navigation_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::action::Navigation_GetResult_Request>::value &&
    has_bounded_size<protocol::action::Navigation_GetResult_Response>::value
  >
{
};

template<>
struct is_service<protocol::action::Navigation_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::action::Navigation_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::action::Navigation_GetResult_Response>
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
// #include "protocol/action/detail/navigation__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::Navigation_FeedbackMessage & msg,
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

inline std::string to_yaml(const protocol::action::Navigation_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::Navigation_FeedbackMessage>()
{
  return "protocol::action::Navigation_FeedbackMessage";
}

template<>
inline const char * name<protocol::action::Navigation_FeedbackMessage>()
{
  return "protocol/action/Navigation_FeedbackMessage";
}

template<>
struct has_fixed_size<protocol::action::Navigation_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<protocol::action::Navigation_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<protocol::action::Navigation_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<protocol::action::Navigation_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<protocol::action::Navigation_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<protocol::action::Navigation>
  : std::true_type
{
};

template<>
struct is_action_goal<protocol::action::Navigation_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<protocol::action::Navigation_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<protocol::action::Navigation_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PROTOCOL__ACTION__DETAIL__NAVIGATION__TRAITS_HPP_
