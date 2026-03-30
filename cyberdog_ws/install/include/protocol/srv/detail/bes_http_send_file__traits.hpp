// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/BesHttpSendFile.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BES_HTTP_SEND_FILE__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__BES_HTTP_SEND_FILE__TRAITS_HPP_

#include "protocol/srv/detail/bes_http_send_file__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::BesHttpSendFile_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: method
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "method: ";
    value_to_yaml(msg.method, out);
    out << "\n";
  }

  // member: url
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "url: ";
    value_to_yaml(msg.url, out);
    out << "\n";
  }

  // member: file_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_name: ";
    value_to_yaml(msg.file_name, out);
    out << "\n";
  }

  // member: content_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "content_type: ";
    value_to_yaml(msg.content_type, out);
    out << "\n";
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info: ";
    value_to_yaml(msg.info, out);
    out << "\n";
  }

  // member: milsecs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "milsecs: ";
    value_to_yaml(msg.milsecs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::BesHttpSendFile_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::BesHttpSendFile_Request>()
{
  return "protocol::srv::BesHttpSendFile_Request";
}

template<>
inline const char * name<protocol::srv::BesHttpSendFile_Request>()
{
  return "protocol/srv/BesHttpSendFile_Request";
}

template<>
struct has_fixed_size<protocol::srv::BesHttpSendFile_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::BesHttpSendFile_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::BesHttpSendFile_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::BesHttpSendFile_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    value_to_yaml(msg.data, out);
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

inline std::string to_yaml(const protocol::srv::BesHttpSendFile_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::BesHttpSendFile_Response>()
{
  return "protocol::srv::BesHttpSendFile_Response";
}

template<>
inline const char * name<protocol::srv::BesHttpSendFile_Response>()
{
  return "protocol/srv/BesHttpSendFile_Response";
}

template<>
struct has_fixed_size<protocol::srv::BesHttpSendFile_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::BesHttpSendFile_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::BesHttpSendFile_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::BesHttpSendFile>()
{
  return "protocol::srv::BesHttpSendFile";
}

template<>
inline const char * name<protocol::srv::BesHttpSendFile>()
{
  return "protocol/srv/BesHttpSendFile";
}

template<>
struct has_fixed_size<protocol::srv::BesHttpSendFile>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::BesHttpSendFile_Request>::value &&
    has_fixed_size<protocol::srv::BesHttpSendFile_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::BesHttpSendFile>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::BesHttpSendFile_Request>::value &&
    has_bounded_size<protocol::srv::BesHttpSendFile_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::BesHttpSendFile>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::BesHttpSendFile_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::BesHttpSendFile_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__BES_HTTP_SEND_FILE__TRAITS_HPP_
