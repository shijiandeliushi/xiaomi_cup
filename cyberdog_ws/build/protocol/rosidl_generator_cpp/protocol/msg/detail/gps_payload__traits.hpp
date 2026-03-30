// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from protocol:msg/GpsPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__GPS_PAYLOAD__TRAITS_HPP_
#define PROTOCOL__MSG__DETAIL__GPS_PAYLOAD__TRAITS_HPP_

#include "protocol/msg/detail/gps_payload__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const protocol::msg::GpsPayload & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sec: ";
    value_to_yaml(msg.sec, out);
    out << "\n";
  }

  // member: nanosec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nanosec: ";
    value_to_yaml(msg.nanosec, out);
    out << "\n";
  }

  // member: itow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "itow: ";
    value_to_yaml(msg.itow, out);
    out << "\n";
  }

  // member: fix_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_type: ";
    value_to_yaml(msg.fix_type, out);
    out << "\n";
  }

  // member: num_sv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_sv: ";
    value_to_yaml(msg.num_sv, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    value_to_yaml(msg.lat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const protocol::msg::GpsPayload & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<protocol::msg::GpsPayload>()
{
  return "protocol::msg::GpsPayload";
}

template<>
inline const char * name<protocol::msg::GpsPayload>()
{
  return "protocol/msg/GpsPayload";
}

template<>
struct has_fixed_size<protocol::msg::GpsPayload>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<protocol::msg::GpsPayload>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<protocol::msg::GpsPayload>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROTOCOL__MSG__DETAIL__GPS_PAYLOAD__TRAITS_HPP_
