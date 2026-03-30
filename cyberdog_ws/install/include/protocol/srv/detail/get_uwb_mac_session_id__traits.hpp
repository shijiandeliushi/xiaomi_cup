// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/GetUWBMacSessionID.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GET_UWB_MAC_SESSION_ID__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__GET_UWB_MAC_SESSION_ID__TRAITS_HPP_

#include "protocol/srv/detail/get_uwb_mac_session_id__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::GetUWBMacSessionID_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::GetUWBMacSessionID_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::GetUWBMacSessionID_Request>()
{
  return "protocol::srv::GetUWBMacSessionID_Request";
}

template<>
inline const char * name<protocol::srv::GetUWBMacSessionID_Request>()
{
  return "protocol/srv/GetUWBMacSessionID_Request";
}

template<>
struct has_fixed_size<protocol::srv::GetUWBMacSessionID_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::GetUWBMacSessionID_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::GetUWBMacSessionID_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::GetUWBMacSessionID_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: session_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "session_id: ";
    value_to_yaml(msg.session_id, out);
    out << "\n";
  }

  // member: master
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "master: ";
    value_to_yaml(msg.master, out);
    out << "\n";
  }

  // member: slave1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slave1: ";
    value_to_yaml(msg.slave1, out);
    out << "\n";
  }

  // member: slave2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slave2: ";
    value_to_yaml(msg.slave2, out);
    out << "\n";
  }

  // member: slave3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slave3: ";
    value_to_yaml(msg.slave3, out);
    out << "\n";
  }

  // member: slave4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slave4: ";
    value_to_yaml(msg.slave4, out);
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

inline std::string to_yaml(const protocol::srv::GetUWBMacSessionID_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::GetUWBMacSessionID_Response>()
{
  return "protocol::srv::GetUWBMacSessionID_Response";
}

template<>
inline const char * name<protocol::srv::GetUWBMacSessionID_Response>()
{
  return "protocol/srv/GetUWBMacSessionID_Response";
}

template<>
struct has_fixed_size<protocol::srv::GetUWBMacSessionID_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::GetUWBMacSessionID_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::GetUWBMacSessionID_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::GetUWBMacSessionID>()
{
  return "protocol::srv::GetUWBMacSessionID";
}

template<>
inline const char * name<protocol::srv::GetUWBMacSessionID>()
{
  return "protocol/srv/GetUWBMacSessionID";
}

template<>
struct has_fixed_size<protocol::srv::GetUWBMacSessionID>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::GetUWBMacSessionID_Request>::value &&
    has_fixed_size<protocol::srv::GetUWBMacSessionID_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::GetUWBMacSessionID>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::GetUWBMacSessionID_Request>::value &&
    has_bounded_size<protocol::srv::GetUWBMacSessionID_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::GetUWBMacSessionID>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::GetUWBMacSessionID_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::GetUWBMacSessionID_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__GET_UWB_MAC_SESSION_ID__TRAITS_HPP_
