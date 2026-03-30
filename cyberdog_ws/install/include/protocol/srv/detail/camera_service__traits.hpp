// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/CameraService.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CAMERA_SERVICE__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__CAMERA_SERVICE__TRAITS_HPP_

#include "protocol/srv/detail/camera_service__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::CameraService_Request & msg,
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

  // member: args
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "args: ";
    value_to_yaml(msg.args, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: fps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fps: ";
    value_to_yaml(msg.fps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::CameraService_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::CameraService_Request>()
{
  return "protocol::srv::CameraService_Request";
}

template<>
inline const char * name<protocol::srv::CameraService_Request>()
{
  return "protocol/srv/CameraService_Request";
}

template<>
struct has_fixed_size<protocol::srv::CameraService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::CameraService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::CameraService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::CameraService_Response & msg,
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

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    value_to_yaml(msg.msg, out);
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

inline std::string to_yaml(const protocol::srv::CameraService_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::CameraService_Response>()
{
  return "protocol::srv::CameraService_Response";
}

template<>
inline const char * name<protocol::srv::CameraService_Response>()
{
  return "protocol/srv/CameraService_Response";
}

template<>
struct has_fixed_size<protocol::srv::CameraService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::CameraService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::CameraService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::CameraService>()
{
  return "protocol::srv::CameraService";
}

template<>
inline const char * name<protocol::srv::CameraService>()
{
  return "protocol/srv/CameraService";
}

template<>
struct has_fixed_size<protocol::srv::CameraService>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::CameraService_Request>::value &&
    has_fixed_size<protocol::srv::CameraService_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::CameraService>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::CameraService_Request>::value &&
    has_bounded_size<protocol::srv::CameraService_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::CameraService>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::CameraService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::CameraService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__CAMERA_SERVICE__TRAITS_HPP_
