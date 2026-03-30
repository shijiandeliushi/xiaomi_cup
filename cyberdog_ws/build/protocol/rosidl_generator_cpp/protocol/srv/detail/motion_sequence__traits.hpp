// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/MotionSequence.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE__TRAITS_HPP_

#include "protocol/srv/detail/motion_sequence__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'params'
#include "protocol/msg/detail/motion_sequence_param__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::MotionSequence_Request & msg,
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

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    value_to_yaml(msg.duration, out);
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

  // member: params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.params.size() == 0) {
      out << "params: []\n";
    } else {
      out << "params:\n";
      for (auto item : msg.params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::MotionSequence_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::MotionSequence_Request>()
{
  return "protocol::srv::MotionSequence_Request";
}

template<>
inline const char * name<protocol::srv::MotionSequence_Request>()
{
  return "protocol/srv/MotionSequence_Request";
}

template<>
struct has_fixed_size<protocol::srv::MotionSequence_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::MotionSequence_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::MotionSequence_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::MotionSequence_Response & msg,
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

inline std::string to_yaml(const protocol::srv::MotionSequence_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::MotionSequence_Response>()
{
  return "protocol::srv::MotionSequence_Response";
}

template<>
inline const char * name<protocol::srv::MotionSequence_Response>()
{
  return "protocol/srv/MotionSequence_Response";
}

template<>
struct has_fixed_size<protocol::srv::MotionSequence_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::MotionSequence_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::MotionSequence_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::MotionSequence>()
{
  return "protocol::srv::MotionSequence";
}

template<>
inline const char * name<protocol::srv::MotionSequence>()
{
  return "protocol/srv/MotionSequence";
}

template<>
struct has_fixed_size<protocol::srv::MotionSequence>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::MotionSequence_Request>::value &&
    has_fixed_size<protocol::srv::MotionSequence_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::MotionSequence>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::MotionSequence_Request>::value &&
    has_bounded_size<protocol::srv::MotionSequence_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::MotionSequence>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::MotionSequence_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::MotionSequence_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__MOTION_SEQUENCE__TRAITS_HPP_
