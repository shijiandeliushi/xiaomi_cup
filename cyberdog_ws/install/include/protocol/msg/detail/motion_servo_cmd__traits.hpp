// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/MotionServoCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__TRAITS_HPP_

#include "protocol/msg/detail/motion_servo_cmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::MotionServoCmd & msg,
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

  // member: cmd_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_type: ";
    value_to_yaml(msg.cmd_type, out);
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

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    value_to_yaml(msg.value, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::MotionServoCmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::MotionServoCmd>()
{
  return "protocol::msg::MotionServoCmd";
}

template<>
inline const char * name<protocol::msg::MotionServoCmd>()
{
  return "protocol/msg/MotionServoCmd";
}

template<>
struct has_fixed_size<protocol::msg::MotionServoCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::msg::MotionServoCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::msg::MotionServoCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__TRAITS_HPP_
