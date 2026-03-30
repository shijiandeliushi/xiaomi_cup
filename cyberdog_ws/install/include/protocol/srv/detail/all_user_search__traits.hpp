// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/AllUserSearch.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ALL_USER_SEARCH__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__ALL_USER_SEARCH__TRAITS_HPP_

#include "protocol/srv/detail/all_user_search__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AllUserSearch_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::AllUserSearch_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AllUserSearch_Request>()
{
  return "protocol::srv::AllUserSearch_Request";
}

template<>
inline const char * name<protocol::srv::AllUserSearch_Request>()
{
  return "protocol/srv/AllUserSearch_Request";
}

template<>
struct has_fixed_size<protocol::srv::AllUserSearch_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::AllUserSearch_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::AllUserSearch_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "protocol/msg/detail/user_information__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AllUserSearch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.result.size() == 0) {
      out << "result: []\n";
    } else {
      out << "result:\n";
      for (auto item : msg.result) {
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

inline std::string to_yaml(const protocol::srv::AllUserSearch_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AllUserSearch_Response>()
{
  return "protocol::srv::AllUserSearch_Response";
}

template<>
inline const char * name<protocol::srv::AllUserSearch_Response>()
{
  return "protocol/srv/AllUserSearch_Response";
}

template<>
struct has_fixed_size<protocol::srv::AllUserSearch_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::AllUserSearch_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::AllUserSearch_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::AllUserSearch>()
{
  return "protocol::srv::AllUserSearch";
}

template<>
inline const char * name<protocol::srv::AllUserSearch>()
{
  return "protocol/srv/AllUserSearch";
}

template<>
struct has_fixed_size<protocol::srv::AllUserSearch>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::AllUserSearch_Request>::value &&
    has_fixed_size<protocol::srv::AllUserSearch_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::AllUserSearch>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::AllUserSearch_Request>::value &&
    has_bounded_size<protocol::srv::AllUserSearch_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::AllUserSearch>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::AllUserSearch_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::AllUserSearch_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__ALL_USER_SEARCH__TRAITS_HPP_
