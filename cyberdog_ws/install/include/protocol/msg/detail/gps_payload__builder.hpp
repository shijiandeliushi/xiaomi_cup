// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/GpsPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__GPS_PAYLOAD__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__GPS_PAYLOAD__BUILDER_HPP_

#include "protocol/msg/detail/gps_payload__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_GpsPayload_lat
{
public:
  explicit Init_GpsPayload_lat(::protocol::msg::GpsPayload & msg)
  : msg_(msg)
  {}
  ::protocol::msg::GpsPayload lat(::protocol::msg::GpsPayload::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::GpsPayload msg_;
};

class Init_GpsPayload_lon
{
public:
  explicit Init_GpsPayload_lon(::protocol::msg::GpsPayload & msg)
  : msg_(msg)
  {}
  Init_GpsPayload_lat lon(::protocol::msg::GpsPayload::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_GpsPayload_lat(msg_);
  }

private:
  ::protocol::msg::GpsPayload msg_;
};

class Init_GpsPayload_num_sv
{
public:
  explicit Init_GpsPayload_num_sv(::protocol::msg::GpsPayload & msg)
  : msg_(msg)
  {}
  Init_GpsPayload_lon num_sv(::protocol::msg::GpsPayload::_num_sv_type arg)
  {
    msg_.num_sv = std::move(arg);
    return Init_GpsPayload_lon(msg_);
  }

private:
  ::protocol::msg::GpsPayload msg_;
};

class Init_GpsPayload_fix_type
{
public:
  explicit Init_GpsPayload_fix_type(::protocol::msg::GpsPayload & msg)
  : msg_(msg)
  {}
  Init_GpsPayload_num_sv fix_type(::protocol::msg::GpsPayload::_fix_type_type arg)
  {
    msg_.fix_type = std::move(arg);
    return Init_GpsPayload_num_sv(msg_);
  }

private:
  ::protocol::msg::GpsPayload msg_;
};

class Init_GpsPayload_itow
{
public:
  explicit Init_GpsPayload_itow(::protocol::msg::GpsPayload & msg)
  : msg_(msg)
  {}
  Init_GpsPayload_fix_type itow(::protocol::msg::GpsPayload::_itow_type arg)
  {
    msg_.itow = std::move(arg);
    return Init_GpsPayload_fix_type(msg_);
  }

private:
  ::protocol::msg::GpsPayload msg_;
};

class Init_GpsPayload_nanosec
{
public:
  explicit Init_GpsPayload_nanosec(::protocol::msg::GpsPayload & msg)
  : msg_(msg)
  {}
  Init_GpsPayload_itow nanosec(::protocol::msg::GpsPayload::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_GpsPayload_itow(msg_);
  }

private:
  ::protocol::msg::GpsPayload msg_;
};

class Init_GpsPayload_sec
{
public:
  Init_GpsPayload_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpsPayload_nanosec sec(::protocol::msg::GpsPayload::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_GpsPayload_nanosec(msg_);
  }

private:
  ::protocol::msg::GpsPayload msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::GpsPayload>()
{
  return protocol::msg::builder::Init_GpsPayload_sec();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__GPS_PAYLOAD__BUILDER_HPP_
