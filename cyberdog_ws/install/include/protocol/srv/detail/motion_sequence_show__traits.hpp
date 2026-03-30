// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/MotionSequenceShow.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE_SHOW__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE_SHOW__TRAITS_HPP_

#include "protocol/srv/detail/motion_sequence_show__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'gait_list'
#include "protocol/msg/detail/motion_sequence_gait__traits.hpp"
// Member 'pace_list'
#include "protocol/msg/detail/motion_sequence_pace__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::MotionSequenceShow_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motion_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_id: ";
    value_to_yaml(msg.motion_id, out);
    out << "\n";
  }

  // member: cmd_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_source: ";
    value_to_yaml(msg.cmd_source, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: gait_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gait_list.size() == 0) {
      out << "gait_list: []\n";
    } else {
      out << "gait_list:\n";
      for (auto item : msg.gait_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pace_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pace_list.size() == 0) {
      out << "pace_list: []\n";
    } else {
      out << "pace_list:\n";
      for (auto item : msg.pace_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: gait_toml_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gait_toml_list.size() == 0) {
      out << "gait_toml_list: []\n";
    } else {
      out << "gait_toml_list:\n";
      for (auto item : msg.gait_toml_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pace_toml_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pace_toml_list.size() == 0) {
      out << "pace_toml_list: []\n";
    } else {
      out << "pace_toml_list:\n";
      for (auto item : msg.pace_toml_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gait_toml
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_toml: ";
    value_to_yaml(msg.gait_toml, out);
    out << "\n";
  }

  // member: pace_toml
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pace_toml: ";
    value_to_yaml(msg.pace_toml, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::MotionSequenceShow_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::MotionSequenceShow_Request>()
{
  return "protocol::srv::MotionSequenceShow_Request";
}

template<>
inline const char * name<protocol::srv::MotionSequenceShow_Request>()
{
  return "protocol/srv/MotionSequenceShow_Request";
}

template<>
struct has_fixed_size<protocol::srv::MotionSequenceShow_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::MotionSequenceShow_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::MotionSequenceShow_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::MotionSequenceShow_Response & msg,
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

  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    value_to_yaml(msg.code, out);
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

  // member: motion_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_id: ";
    value_to_yaml(msg.motion_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::MotionSequenceShow_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::MotionSequenceShow_Response>()
{
  return "protocol::srv::MotionSequenceShow_Response";
}

template<>
inline const char * name<protocol::srv::MotionSequenceShow_Response>()
{
  return "protocol/srv/MotionSequenceShow_Response";
}

template<>
struct has_fixed_size<protocol::srv::MotionSequenceShow_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::MotionSequenceShow_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::MotionSequenceShow_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::MotionSequenceShow>()
{
  return "protocol::srv::MotionSequenceShow";
}

template<>
inline const char * name<protocol::srv::MotionSequenceShow>()
{
  return "protocol/srv/MotionSequenceShow";
}

template<>
struct has_fixed_size<protocol::srv::MotionSequenceShow>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::MotionSequenceShow_Request>::value &&
    has_fixed_size<protocol::srv::MotionSequenceShow_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::MotionSequenceShow>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::MotionSequenceShow_Request>::value &&
    has_bounded_size<protocol::srv::MotionSequenceShow_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::MotionSequenceShow>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::MotionSequenceShow_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::MotionSequenceShow_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE_SHOW__TRAITS_HPP_
