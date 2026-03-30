// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/TakePhoto.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TAKE_PHOTO__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__TAKE_PHOTO__TRAITS_HPP_

#include "protocol/srv/detail/take_photo__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::TakePhoto_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::TakePhoto_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::TakePhoto_Request>()
{
  return "protocol::srv::TakePhoto_Request";
}

template<>
inline const char * name<protocol::srv::TakePhoto_Request>()
{
  return "protocol/srv/TakePhoto_Request";
}

template<>
struct has_fixed_size<protocol::srv::TakePhoto_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::TakePhoto_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::TakePhoto_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'img'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::TakePhoto_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
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

  // member: img
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img:\n";
    to_yaml(msg.img, out, indentation + 2);
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

inline std::string to_yaml(const protocol::srv::TakePhoto_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::TakePhoto_Response>()
{
  return "protocol::srv::TakePhoto_Response";
}

template<>
inline const char * name<protocol::srv::TakePhoto_Response>()
{
  return "protocol/srv/TakePhoto_Response";
}

template<>
struct has_fixed_size<protocol::srv::TakePhoto_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::TakePhoto_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::TakePhoto_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::TakePhoto>()
{
  return "protocol::srv::TakePhoto";
}

template<>
inline const char * name<protocol::srv::TakePhoto>()
{
  return "protocol/srv/TakePhoto";
}

template<>
struct has_fixed_size<protocol::srv::TakePhoto>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::TakePhoto_Request>::value &&
    has_fixed_size<protocol::srv::TakePhoto_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::TakePhoto>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::TakePhoto_Request>::value &&
    has_bounded_size<protocol::srv::TakePhoto_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::TakePhoto>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::TakePhoto_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::TakePhoto_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__TAKE_PHOTO__TRAITS_HPP_
