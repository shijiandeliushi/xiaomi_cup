// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/SdcardPlayIdQuery.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SDCARD_PLAY_ID_QUERY__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__SDCARD_PLAY_ID_QUERY__TRAITS_HPP_

#include "protocol/srv/detail/sdcard_play_id_query__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::SdcardPlayIdQuery_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: play_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "play_id: ";
    value_to_yaml(msg.play_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::SdcardPlayIdQuery_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::SdcardPlayIdQuery_Request>()
{
  return "protocol::srv::SdcardPlayIdQuery_Request";
}

template<>
inline const char * name<protocol::srv::SdcardPlayIdQuery_Request>()
{
  return "protocol/srv/SdcardPlayIdQuery_Request";
}

template<>
struct has_fixed_size<protocol::srv::SdcardPlayIdQuery_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::SdcardPlayIdQuery_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::SdcardPlayIdQuery_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::SdcardPlayIdQuery_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: exist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exist: ";
    value_to_yaml(msg.exist, out);
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

inline std::string to_yaml(const protocol::srv::SdcardPlayIdQuery_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::SdcardPlayIdQuery_Response>()
{
  return "protocol::srv::SdcardPlayIdQuery_Response";
}

template<>
inline const char * name<protocol::srv::SdcardPlayIdQuery_Response>()
{
  return "protocol/srv/SdcardPlayIdQuery_Response";
}

template<>
struct has_fixed_size<protocol::srv::SdcardPlayIdQuery_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::SdcardPlayIdQuery_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::SdcardPlayIdQuery_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::SdcardPlayIdQuery>()
{
  return "protocol::srv::SdcardPlayIdQuery";
}

template<>
inline const char * name<protocol::srv::SdcardPlayIdQuery>()
{
  return "protocol/srv/SdcardPlayIdQuery";
}

template<>
struct has_fixed_size<protocol::srv::SdcardPlayIdQuery>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::SdcardPlayIdQuery_Request>::value &&
    has_fixed_size<protocol::srv::SdcardPlayIdQuery_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::SdcardPlayIdQuery>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::SdcardPlayIdQuery_Request>::value &&
    has_bounded_size<protocol::srv::SdcardPlayIdQuery_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::SdcardPlayIdQuery>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::SdcardPlayIdQuery_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::SdcardPlayIdQuery_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__SDCARD_PLAY_ID_QUERY__TRAITS_HPP_
