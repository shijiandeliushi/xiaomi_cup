// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/MotionQueueCustomCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_QUEUE_CUSTOM_CMD__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_QUEUE_CUSTOM_CMD__TRAITS_HPP_

#include "protocol/srv/detail/motion_queue_custom_cmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'cmds'
#include "protocol/msg/detail/motion_custom_cmd__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::MotionQueueCustomCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cmds.size() == 0) {
      out << "cmds: []\n";
    } else {
      out << "cmds:\n";
      for (auto item : msg.cmds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::MotionQueueCustomCmd_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::MotionQueueCustomCmd_Request>()
{
  return "protocol::srv::MotionQueueCustomCmd_Request";
}

template<>
inline const char * name<protocol::srv::MotionQueueCustomCmd_Request>()
{
  return "protocol/srv/MotionQueueCustomCmd_Request";
}

template<>
struct has_fixed_size<protocol::srv::MotionQueueCustomCmd_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::MotionQueueCustomCmd_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::MotionQueueCustomCmd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::MotionQueueCustomCmd_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::MotionQueueCustomCmd_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::MotionQueueCustomCmd_Response>()
{
  return "protocol::srv::MotionQueueCustomCmd_Response";
}

template<>
inline const char * name<protocol::srv::MotionQueueCustomCmd_Response>()
{
  return "protocol/srv/MotionQueueCustomCmd_Response";
}

template<>
struct has_fixed_size<protocol::srv::MotionQueueCustomCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::MotionQueueCustomCmd_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::MotionQueueCustomCmd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::MotionQueueCustomCmd>()
{
  return "protocol::srv::MotionQueueCustomCmd";
}

template<>
inline const char * name<protocol::srv::MotionQueueCustomCmd>()
{
  return "protocol/srv/MotionQueueCustomCmd";
}

template<>
struct has_fixed_size<protocol::srv::MotionQueueCustomCmd>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::MotionQueueCustomCmd_Request>::value &&
    has_fixed_size<protocol::srv::MotionQueueCustomCmd_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::MotionQueueCustomCmd>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::MotionQueueCustomCmd_Request>::value &&
    has_bounded_size<protocol::srv::MotionQueueCustomCmd_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::MotionQueueCustomCmd>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::MotionQueueCustomCmd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::MotionQueueCustomCmd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__MOTION_QUEUE_CUSTOM_CMD__TRAITS_HPP_
