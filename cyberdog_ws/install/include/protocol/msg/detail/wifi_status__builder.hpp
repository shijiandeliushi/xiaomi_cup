// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/WifiStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__WIFI_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__WIFI_STATUS__BUILDER_HPP_

#include "protocol/msg/detail/wifi_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_WifiStatus_strength
{
public:
  explicit Init_WifiStatus_strength(::protocol::msg::WifiStatus & msg)
  : msg_(msg)
  {}
  ::protocol::msg::WifiStatus strength(::protocol::msg::WifiStatus::_strength_type arg)
  {
    msg_.strength = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::WifiStatus msg_;
};

class Init_WifiStatus_ssid
{
public:
  explicit Init_WifiStatus_ssid(::protocol::msg::WifiStatus & msg)
  : msg_(msg)
  {}
  Init_WifiStatus_strength ssid(::protocol::msg::WifiStatus::_ssid_type arg)
  {
    msg_.ssid = std::move(arg);
    return Init_WifiStatus_strength(msg_);
  }

private:
  ::protocol::msg::WifiStatus msg_;
};

class Init_WifiStatus_ip
{
public:
  explicit Init_WifiStatus_ip(::protocol::msg::WifiStatus & msg)
  : msg_(msg)
  {}
  Init_WifiStatus_ssid ip(::protocol::msg::WifiStatus::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_WifiStatus_ssid(msg_);
  }

private:
  ::protocol::msg::WifiStatus msg_;
};

class Init_WifiStatus_is_connected
{
public:
  Init_WifiStatus_is_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WifiStatus_ip is_connected(::protocol::msg::WifiStatus::_is_connected_type arg)
  {
    msg_.is_connected = std::move(arg);
    return Init_WifiStatus_ip(msg_);
  }

private:
  ::protocol::msg::WifiStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::WifiStatus>()
{
  return protocol::msg::builder::Init_WifiStatus_is_connected();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__WIFI_STATUS__BUILDER_HPP_
