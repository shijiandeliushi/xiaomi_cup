// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/MotionResultCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_RESULT_CMD__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_RESULT_CMD__TRAITS_HPP_

#include "protocol/srv/detail/motion_result_cmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::MotionResultCmd_Request & msg,
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

  // member: vel_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel_des.size() == 0) {
      out << "vel_des: []\n";
    } else {
      out << "vel_des:\n";
      for (auto item : msg.vel_des) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rpy_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rpy_des.size() == 0) {
      out << "rpy_des: []\n";
    } else {
      out << "rpy_des:\n";
      for (auto item : msg.rpy_des) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pos_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos_des.size() == 0) {
      out << "pos_des: []\n";
    } else {
      out << "pos_des:\n";
      for (auto item : msg.pos_des) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acc_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_des.size() == 0) {
      out << "acc_des: []\n";
    } else {
      out << "acc_des:\n";
      for (auto item : msg.acc_des) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ctrl_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ctrl_point.size() == 0) {
      out << "ctrl_point: []\n";
    } else {
      out << "ctrl_point:\n";
      for (auto item : msg.ctrl_point) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: foot_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.foot_pose.size() == 0) {
      out << "foot_pose: []\n";
    } else {
      out << "foot_pose:\n";
      for (auto item : msg.foot_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: step_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.step_height.size() == 0) {
      out << "step_height: []\n";
    } else {
      out << "step_height:\n";
      for (auto item : msg.step_height) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact: ";
    value_to_yaml(msg.contact, out);
    out << "\n";
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

  // member: toml_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "toml_data: ";
    value_to_yaml(msg.toml_data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::MotionResultCmd_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::MotionResultCmd_Request>()
{
  return "protocol::srv::MotionResultCmd_Request";
}

template<>
inline const char * name<protocol::srv::MotionResultCmd_Request>()
{
  return "protocol/srv/MotionResultCmd_Request";
}

template<>
struct has_fixed_size<protocol::srv::MotionResultCmd_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::MotionResultCmd_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::MotionResultCmd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::MotionResultCmd_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::MotionResultCmd_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::MotionResultCmd_Response>()
{
  return "protocol::srv::MotionResultCmd_Response";
}

template<>
inline const char * name<protocol::srv::MotionResultCmd_Response>()
{
  return "protocol/srv/MotionResultCmd_Response";
}

template<>
struct has_fixed_size<protocol::srv::MotionResultCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::MotionResultCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::MotionResultCmd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::MotionResultCmd>()
{
  return "protocol::srv::MotionResultCmd";
}

template<>
inline const char * name<protocol::srv::MotionResultCmd>()
{
  return "protocol/srv/MotionResultCmd";
}

template<>
struct has_fixed_size<protocol::srv::MotionResultCmd>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::MotionResultCmd_Request>::value &&
    has_fixed_size<protocol::srv::MotionResultCmd_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::MotionResultCmd>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::MotionResultCmd_Request>::value &&
    has_bounded_size<protocol::srv::MotionResultCmd_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::MotionResultCmd>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::MotionResultCmd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::MotionResultCmd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__MOTION_RESULT_CMD__TRAITS_HPP_
