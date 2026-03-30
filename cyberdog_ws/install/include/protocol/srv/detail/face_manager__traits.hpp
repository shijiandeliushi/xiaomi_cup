// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/FaceManager.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FACE_MANAGER__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__FACE_MANAGER__TRAITS_HPP_

#include "protocol/srv/detail/face_manager__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::FaceManager_Request & msg,
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

inline std::string to_yaml(const protocol::srv::FaceManager_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::FaceManager_Request>()
{
  return "protocol::srv::FaceManager_Request";
}

template<>
inline const char * name<protocol::srv::FaceManager_Request>()
{
  return "protocol/srv/FaceManager_Request";
}

template<>
struct has_fixed_size<protocol::srv::FaceManager_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::FaceManager_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::FaceManager_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'face_images'
#include "protocol/msg/detail/compressed_image__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::FaceManager_Response & msg,
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

  // member: face_images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.face_images.size() == 0) {
      out << "face_images: []\n";
    } else {
      out << "face_images:\n";
      for (auto item : msg.face_images) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const protocol::srv::FaceManager_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::FaceManager_Response>()
{
  return "protocol::srv::FaceManager_Response";
}

template<>
inline const char * name<protocol::srv::FaceManager_Response>()
{
  return "protocol/srv/FaceManager_Response";
}

template<>
struct has_fixed_size<protocol::srv::FaceManager_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::FaceManager_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::FaceManager_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::FaceManager>()
{
  return "protocol::srv::FaceManager";
}

template<>
inline const char * name<protocol::srv::FaceManager>()
{
  return "protocol/srv/FaceManager";
}

template<>
struct has_fixed_size<protocol::srv::FaceManager>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::FaceManager_Request>::value &&
    has_fixed_size<protocol::srv::FaceManager_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::FaceManager>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::FaceManager_Request>::value &&
    has_bounded_size<protocol::srv::FaceManager_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::FaceManager>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::FaceManager_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::FaceManager_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__FACE_MANAGER__TRAITS_HPP_
