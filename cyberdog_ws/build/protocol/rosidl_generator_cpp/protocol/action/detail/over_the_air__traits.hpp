// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:action/OverTheAir.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__OVER_THE_AIR__TRAITS_HPP_
#define PROTOCOL__ACTION__DETAIL__OVER_THE_AIR__TRAITS_HPP_

#include "protocol/action/detail/over_the_air__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::OverTheAir_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_msg: ";
    value_to_yaml(msg.goal_msg, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: user
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user: ";
    value_to_yaml(msg.user, out);
    out << "\n";
  }

  // member: operate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operate: ";
    value_to_yaml(msg.operate, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    value_to_yaml(msg.data, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    value_to_yaml(msg.depth, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::action::OverTheAir_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::OverTheAir_Goal>()
{
  return "protocol::action::OverTheAir_Goal";
}

template<>
inline const char * name<protocol::action::OverTheAir_Goal>()
{
  return "protocol/action/OverTheAir_Goal";
}

template<>
struct has_fixed_size<protocol::action::OverTheAir_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::action::OverTheAir_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::action::OverTheAir_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::OverTheAir_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_msg: ";
    value_to_yaml(msg.result_msg, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: operate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operate: ";
    value_to_yaml(msg.operate, out);
    out << "\n";
  }

  // member: sn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sn: ";
    value_to_yaml(msg.sn, out);
    out << "\n";
  }

  // member: not_unlocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "not_unlocked: ";
    value_to_yaml(msg.not_unlocked, out);
    out << "\n";
  }

  // member: version_nx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_nx: ";
    value_to_yaml(msg.version_nx, out);
    out << "\n";
  }

  // member: version_nx_mini_led
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_nx_mini_led: ";
    value_to_yaml(msg.version_nx_mini_led, out);
    out << "\n";
  }

  // member: version_nx_head_tof
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_nx_head_tof: ";
    value_to_yaml(msg.version_nx_head_tof, out);
    out << "\n";
  }

  // member: version_nx_rear_tof
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_nx_rear_tof: ";
    value_to_yaml(msg.version_nx_rear_tof, out);
    out << "\n";
  }

  // member: version_nx_head_uwb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_nx_head_uwb: ";
    value_to_yaml(msg.version_nx_head_uwb, out);
    out << "\n";
  }

  // member: version_nx_rear_uwb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_nx_rear_uwb: ";
    value_to_yaml(msg.version_nx_rear_uwb, out);
    out << "\n";
  }

  // member: version_nx_imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_nx_imu: ";
    value_to_yaml(msg.version_nx_imu, out);
    out << "\n";
  }

  // member: version_nx_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_nx_power: ";
    value_to_yaml(msg.version_nx_power, out);
    out << "\n";
  }

  // member: version_r329
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_r329: ";
    value_to_yaml(msg.version_r329, out);
    out << "\n";
  }

  // member: version_mr813
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_mr813: ";
    value_to_yaml(msg.version_mr813, out);
    out << "\n";
  }

  // member: version_mr813_spie1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_mr813_spie1: ";
    value_to_yaml(msg.version_mr813_spie1, out);
    out << "\n";
  }

  // member: version_mr813_spie2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_mr813_spie2: ";
    value_to_yaml(msg.version_mr813_spie2, out);
    out << "\n";
  }

  // member: version_motors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.version_motors.size() == 0) {
      out << "version_motors: []\n";
    } else {
      out << "version_motors:\n";
      for (auto item : msg.version_motors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: disk_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disk_name: ";
    value_to_yaml(msg.disk_name, out);
    out << "\n";
  }

  // member: disk_filesystem
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disk_filesystem: ";
    value_to_yaml(msg.disk_filesystem, out);
    out << "\n";
  }

  // member: disk_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disk_size: ";
    value_to_yaml(msg.disk_size, out);
    out << "\n";
  }

  // member: disk_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disk_used: ";
    value_to_yaml(msg.disk_used, out);
    out << "\n";
  }

  // member: disk_avail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disk_avail: ";
    value_to_yaml(msg.disk_avail, out);
    out << "\n";
  }

  // member: disk_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disk_scale: ";
    value_to_yaml(msg.disk_scale, out);
    out << "\n";
  }

  // member: disk_mounted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disk_mounted: ";
    value_to_yaml(msg.disk_mounted, out);
    out << "\n";
  }

  // member: disk_meta_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.disk_meta_name.size() == 0) {
      out << "disk_meta_name: []\n";
    } else {
      out << "disk_meta_name:\n";
      for (auto item : msg.disk_meta_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: disk_meta_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.disk_meta_size.size() == 0) {
      out << "disk_meta_size: []\n";
    } else {
      out << "disk_meta_size:\n";
      for (auto item : msg.disk_meta_size) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: disk_meta_change_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.disk_meta_change_time.size() == 0) {
      out << "disk_meta_change_time: []\n";
    } else {
      out << "disk_meta_change_time:\n";
      for (auto item : msg.disk_meta_change_time) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: disk_meta_user_rights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.disk_meta_user_rights.size() == 0) {
      out << "disk_meta_user_rights: []\n";
    } else {
      out << "disk_meta_user_rights:\n";
      for (auto item : msg.disk_meta_user_rights) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reboot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reboot: ";
    value_to_yaml(msg.reboot, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    value_to_yaml(msg.code, out);
    out << "\n";
  }

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

inline std::string to_yaml(const protocol::action::OverTheAir_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::OverTheAir_Result>()
{
  return "protocol::action::OverTheAir_Result";
}

template<>
inline const char * name<protocol::action::OverTheAir_Result>()
{
  return "protocol/action/OverTheAir_Result";
}

template<>
struct has_fixed_size<protocol::action::OverTheAir_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::action::OverTheAir_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::action::OverTheAir_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::OverTheAir_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_msg: ";
    value_to_yaml(msg.feedback_msg, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: operate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operate: ";
    value_to_yaml(msg.operate, out);
    out << "\n";
  }

  // member: now_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "now_version: ";
    value_to_yaml(msg.now_version, out);
    out << "\n";
  }

  // member: ota_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ota_version: ";
    value_to_yaml(msg.ota_version, out);
    out << "\n";
  }

  // member: stage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage: ";
    value_to_yaml(msg.stage, out);
    out << "\n";
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target: ";
    value_to_yaml(msg.target, out);
    out << "\n";
  }

  // member: target_stage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_stage: ";
    value_to_yaml(msg.target_stage, out);
    out << "\n";
  }

  // member: file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file: ";
    value_to_yaml(msg.file, out);
    out << "\n";
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    value_to_yaml(msg.size, out);
    out << "\n";
  }

  // member: schedule
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "schedule: ";
    value_to_yaml(msg.schedule, out);
    out << "\n";
  }

  // member: time_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_remaining: ";
    value_to_yaml(msg.time_remaining, out);
    out << "\n";
  }

  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    value_to_yaml(msg.progress, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: describe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "describe: ";
    value_to_yaml(msg.describe, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::action::OverTheAir_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::OverTheAir_Feedback>()
{
  return "protocol::action::OverTheAir_Feedback";
}

template<>
inline const char * name<protocol::action::OverTheAir_Feedback>()
{
  return "protocol/action/OverTheAir_Feedback";
}

template<>
struct has_fixed_size<protocol::action::OverTheAir_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::action::OverTheAir_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::action::OverTheAir_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "protocol/action/detail/over_the_air__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::OverTheAir_SendGoal_Request & msg,
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

inline std::string to_yaml(const protocol::action::OverTheAir_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::OverTheAir_SendGoal_Request>()
{
  return "protocol::action::OverTheAir_SendGoal_Request";
}

template<>
inline const char * name<protocol::action::OverTheAir_SendGoal_Request>()
{
  return "protocol/action/OverTheAir_SendGoal_Request";
}

template<>
struct has_fixed_size<protocol::action::OverTheAir_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<protocol::action::OverTheAir_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<protocol::action::OverTheAir_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<protocol::action::OverTheAir_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<protocol::action::OverTheAir_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::OverTheAir_SendGoal_Response & msg,
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

inline std::string to_yaml(const protocol::action::OverTheAir_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::OverTheAir_SendGoal_Response>()
{
  return "protocol::action::OverTheAir_SendGoal_Response";
}

template<>
inline const char * name<protocol::action::OverTheAir_SendGoal_Response>()
{
  return "protocol/action/OverTheAir_SendGoal_Response";
}

template<>
struct has_fixed_size<protocol::action::OverTheAir_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<protocol::action::OverTheAir_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<protocol::action::OverTheAir_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::action::OverTheAir_SendGoal>()
{
  return "protocol::action::OverTheAir_SendGoal";
}

template<>
inline const char * name<protocol::action::OverTheAir_SendGoal>()
{
  return "protocol/action/OverTheAir_SendGoal";
}

template<>
struct has_fixed_size<protocol::action::OverTheAir_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::action::OverTheAir_SendGoal_Request>::value &&
    has_fixed_size<protocol::action::OverTheAir_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::action::OverTheAir_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::action::OverTheAir_SendGoal_Request>::value &&
    has_bounded_size<protocol::action::OverTheAir_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<protocol::action::OverTheAir_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::action::OverTheAir_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::action::OverTheAir_SendGoal_Response>
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
  const protocol::action::OverTheAir_GetResult_Request & msg,
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

inline std::string to_yaml(const protocol::action::OverTheAir_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::OverTheAir_GetResult_Request>()
{
  return "protocol::action::OverTheAir_GetResult_Request";
}

template<>
inline const char * name<protocol::action::OverTheAir_GetResult_Request>()
{
  return "protocol/action/OverTheAir_GetResult_Request";
}

template<>
struct has_fixed_size<protocol::action::OverTheAir_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<protocol::action::OverTheAir_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<protocol::action::OverTheAir_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "protocol/action/detail/over_the_air__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::OverTheAir_GetResult_Response & msg,
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

inline std::string to_yaml(const protocol::action::OverTheAir_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::OverTheAir_GetResult_Response>()
{
  return "protocol::action::OverTheAir_GetResult_Response";
}

template<>
inline const char * name<protocol::action::OverTheAir_GetResult_Response>()
{
  return "protocol/action/OverTheAir_GetResult_Response";
}

template<>
struct has_fixed_size<protocol::action::OverTheAir_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<protocol::action::OverTheAir_Result>::value> {};

template<>
struct has_bounded_size<protocol::action::OverTheAir_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<protocol::action::OverTheAir_Result>::value> {};

template<>
struct is_message<protocol::action::OverTheAir_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::action::OverTheAir_GetResult>()
{
  return "protocol::action::OverTheAir_GetResult";
}

template<>
inline const char * name<protocol::action::OverTheAir_GetResult>()
{
  return "protocol/action/OverTheAir_GetResult";
}

template<>
struct has_fixed_size<protocol::action::OverTheAir_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::action::OverTheAir_GetResult_Request>::value &&
    has_fixed_size<protocol::action::OverTheAir_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::action::OverTheAir_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::action::OverTheAir_GetResult_Request>::value &&
    has_bounded_size<protocol::action::OverTheAir_GetResult_Response>::value
  >
{
};

template<>
struct is_service<protocol::action::OverTheAir_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::action::OverTheAir_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::action::OverTheAir_GetResult_Response>
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
// #include "protocol/action/detail/over_the_air__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::action::OverTheAir_FeedbackMessage & msg,
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

inline std::string to_yaml(const protocol::action::OverTheAir_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::action::OverTheAir_FeedbackMessage>()
{
  return "protocol::action::OverTheAir_FeedbackMessage";
}

template<>
inline const char * name<protocol::action::OverTheAir_FeedbackMessage>()
{
  return "protocol/action/OverTheAir_FeedbackMessage";
}

template<>
struct has_fixed_size<protocol::action::OverTheAir_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<protocol::action::OverTheAir_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<protocol::action::OverTheAir_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<protocol::action::OverTheAir_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<protocol::action::OverTheAir_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<protocol::action::OverTheAir>
  : std::true_type
{
};

template<>
struct is_action_goal<protocol::action::OverTheAir_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<protocol::action::OverTheAir_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<protocol::action::OverTheAir_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PROTOCOL__ACTION__DETAIL__OVER_THE_AIR__TRAITS_HPP_
