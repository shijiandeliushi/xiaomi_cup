// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/FaceEntry.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FACE_ENTRY__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__FACE_ENTRY__TRAITS_HPP_

#include "protocol/srv/detail/face_entry__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::FaceEntry_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: username
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "username: ";
    value_to_yaml(msg.username, out);
    out << "\n";
  }

  // member: oriname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "oriname: ";
    value_to_yaml(msg.oriname, out);
    out << "\n";
  }

  // member: ishost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ishost: ";
    value_to_yaml(msg.ishost, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::FaceEntry_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::FaceEntry_Request>()
{
  return "protocol::srv::FaceEntry_Request";
}

template<>
inline const char * name<protocol::srv::FaceEntry_Request>()
{
  return "protocol/srv/FaceEntry_Request";
}

template<>
struct has_fixed_size<protocol::srv::FaceEntry_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::FaceEntry_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::FaceEntry_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::FaceEntry_Response & msg,
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

  // member: allfaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allfaces: ";
    value_to_yaml(msg.allfaces, out);
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

inline std::string to_yaml(const protocol::srv::FaceEntry_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::FaceEntry_Response>()
{
  return "protocol::srv::FaceEntry_Response";
}

template<>
inline const char * name<protocol::srv::FaceEntry_Response>()
{
  return "protocol/srv/FaceEntry_Response";
}

template<>
struct has_fixed_size<protocol::srv::FaceEntry_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::FaceEntry_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::FaceEntry_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::FaceEntry>()
{
  return "protocol::srv::FaceEntry";
}

template<>
inline const char * name<protocol::srv::FaceEntry>()
{
  return "protocol/srv/FaceEntry";
}

template<>
struct has_fixed_size<protocol::srv::FaceEntry>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::FaceEntry_Request>::value &&
    has_fixed_size<protocol::srv::FaceEntry_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::FaceEntry>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::FaceEntry_Request>::value &&
    has_bounded_size<protocol::srv::FaceEntry_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::FaceEntry>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::FaceEntry_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::FaceEntry_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__FACE_ENTRY__TRAITS_HPP_
