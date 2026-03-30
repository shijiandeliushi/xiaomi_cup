// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:srv/ElecSkin.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__ELEC_SKIN__TRAITS_HPP_
#define PROTOCOL__SRV__DETAIL__ELEC_SKIN__TRAITS_HPP_

#include "protocol/srv/detail/elec_skin__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::ElecSkin_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: wave_cycle_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wave_cycle_time: ";
    value_to_yaml(msg.wave_cycle_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::ElecSkin_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::ElecSkin_Request>()
{
  return "protocol::srv::ElecSkin_Request";
}

template<>
inline const char * name<protocol::srv::ElecSkin_Request>()
{
  return "protocol/srv/ElecSkin_Request";
}

template<>
struct has_fixed_size<protocol::srv::ElecSkin_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::ElecSkin_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::ElecSkin_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::srv::ElecSkin_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::srv::ElecSkin_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::srv::ElecSkin_Response>()
{
  return "protocol::srv::ElecSkin_Response";
}

template<>
inline const char * name<protocol::srv::ElecSkin_Response>()
{
  return "protocol/srv/ElecSkin_Response";
}

template<>
struct has_fixed_size<protocol::srv::ElecSkin_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::srv::ElecSkin_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::srv::ElecSkin_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<protocol::srv::ElecSkin>()
{
  return "protocol::srv::ElecSkin";
}

template<>
inline const char * name<protocol::srv::ElecSkin>()
{
  return "protocol/srv/ElecSkin";
}

template<>
struct has_fixed_size<protocol::srv::ElecSkin>
  : std::integral_constant<
    bool,
    has_fixed_size<protocol::srv::ElecSkin_Request>::value &&
    has_fixed_size<protocol::srv::ElecSkin_Response>::value
  >
{
};

template<>
struct has_bounded_size<protocol::srv::ElecSkin>
  : std::integral_constant<
    bool,
    has_bounded_size<protocol::srv::ElecSkin_Request>::value &&
    has_bounded_size<protocol::srv::ElecSkin_Response>::value
  >
{
};

template<>
struct is_service<protocol::srv::ElecSkin>
  : std::true_type
{
};

template<>
struct is_service_request<protocol::srv::ElecSkin_Request>
  : std::true_type
{
};

template<>
struct is_service_response<protocol::srv::ElecSkin_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__SRV__DETAIL__ELEC_SKIN__TRAITS_HPP_
