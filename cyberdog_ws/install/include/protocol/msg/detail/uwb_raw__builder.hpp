// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/UwbRaw.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__UWB_RAW__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__UWB_RAW__BUILDER_HPP_

#include "protocol/msg/detail/uwb_raw__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_UwbRaw_rssi_2
{
public:
  explicit Init_UwbRaw_rssi_2(::protocol::msg::UwbRaw & msg)
  : msg_(msg)
  {}
  ::protocol::msg::UwbRaw rssi_2(::protocol::msg::UwbRaw::_rssi_2_type arg)
  {
    msg_.rssi_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::UwbRaw msg_;
};

class Init_UwbRaw_rssi_1
{
public:
  explicit Init_UwbRaw_rssi_1(::protocol::msg::UwbRaw & msg)
  : msg_(msg)
  {}
  Init_UwbRaw_rssi_2 rssi_1(::protocol::msg::UwbRaw::_rssi_1_type arg)
  {
    msg_.rssi_1 = std::move(arg);
    return Init_UwbRaw_rssi_2(msg_);
  }

private:
  ::protocol::msg::UwbRaw msg_;
};

class Init_UwbRaw_n_los
{
public:
  explicit Init_UwbRaw_n_los(::protocol::msg::UwbRaw & msg)
  : msg_(msg)
  {}
  Init_UwbRaw_rssi_1 n_los(::protocol::msg::UwbRaw::_n_los_type arg)
  {
    msg_.n_los = std::move(arg);
    return Init_UwbRaw_rssi_1(msg_);
  }

private:
  ::protocol::msg::UwbRaw msg_;
};

class Init_UwbRaw_angle
{
public:
  explicit Init_UwbRaw_angle(::protocol::msg::UwbRaw & msg)
  : msg_(msg)
  {}
  Init_UwbRaw_n_los angle(::protocol::msg::UwbRaw::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_UwbRaw_n_los(msg_);
  }

private:
  ::protocol::msg::UwbRaw msg_;
};

class Init_UwbRaw_dist
{
public:
  explicit Init_UwbRaw_dist(::protocol::msg::UwbRaw & msg)
  : msg_(msg)
  {}
  Init_UwbRaw_angle dist(::protocol::msg::UwbRaw::_dist_type arg)
  {
    msg_.dist = std::move(arg);
    return Init_UwbRaw_angle(msg_);
  }

private:
  ::protocol::msg::UwbRaw msg_;
};

class Init_UwbRaw_header
{
public:
  Init_UwbRaw_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UwbRaw_dist header(::protocol::msg::UwbRaw::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UwbRaw_dist(msg_);
  }

private:
  ::protocol::msg::UwbRaw msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::UwbRaw>()
{
  return protocol::msg::builder::Init_UwbRaw_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__UWB_RAW__BUILDER_HPP_
