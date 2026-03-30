// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/AlgoManager.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ALGO_MANAGER__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__ALGO_MANAGER__TRAITS_HPP_

#include "protocol/srv/detail/algo_manager__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'algo_enable'
// Member 'algo_disable'
#include "protocol/msg/detail/algo_list__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AlgoManager_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: algo_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.algo_enable.size() == 0) {
      out << "algo_enable: []\n";
    } else {
      out << "algo_enable:\n";
      for (auto item : msg.algo_enable) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: algo_disable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.algo_disable.size() == 0) {
      out << "algo_disable: []\n";
    } else {
      out << "algo_disable:\n";
      for (auto item : msg.algo_disable) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: open_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "open_age: ";
    value_to_yaml(msg.open_age, out);
    out << "\n";
  }

  // member: open_emotion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "open_emotion: ";
    value_to_yaml(msg.open_emotion, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::AlgoManager_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AlgoManager_Request>()
{
  return "protocol::srv::AlgoManager_Request";
}

template<>
inline const char * name<protocol::srv::AlgoManager_Request>()
{
  return "protocol/srv/AlgoManager_Request";
}

template<>
struct has_fixed_size<protocol::srv::AlgoManager_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<protocol::srv::AlgoManager_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<protocol::srv::AlgoManager_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::AlgoManager_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_enable: ";
    value_to_yaml(msg.result_enable, out);
    out << "\n";
  }

  // member: result_disable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_disable: ";
    value_to_yaml(msg.result_disable, out);
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

inline std::string to_yaml(const protocol::srv::AlgoManager_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::AlgoManager_Response>()
{
  return "protocol::srv::AlgoManager_Response";
}

template<>
inline const char * name<protocol::srv::AlgoManager_Response>()
{
  return "protocol/srv/AlgoManager_Response";
}

template<>
struct has_fixed_size<protocol::srv::AlgoManager_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::AlgoManager_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::AlgoManager_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::AlgoManager>()
{
  return "protocol::srv::AlgoManager";
}

template<>
inline const char * name<protocol::srv::AlgoManager>()
{
  return "protocol/srv/AlgoManager";
}

template<>
struct has_fixed_size<protocol::srv::AlgoManager>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::AlgoManager_Request>::value &&
    has_fixed_size<protocol::srv::AlgoManager_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::AlgoManager>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::AlgoManager_Request>::value &&
    has_bounded_size<protocol::srv::AlgoManager_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::AlgoManager>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::AlgoManager_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::AlgoManager_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__ALGO_MANAGER__TRAITS_HPP_
