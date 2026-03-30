// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/WifiInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__WIFI_INFO__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__WIFI_INFO__BUILDER_HPP_

#include "protocol/msg/detail/wifi_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_WifiInfo_type
{
public:
  explicit Init_WifiInfo_type(::protocol::msg::WifiInfo & msg)
  : msg_(msg)
  {}
  ::protocol::msg::WifiInfo type(::protocol::msg::WifiInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::WifiInfo msg_;
};

class Init_WifiInfo_mac
{
public:
  explicit Init_WifiInfo_mac(::protocol::msg::WifiInfo & msg)
  : msg_(msg)
  {}
  Init_WifiInfo_type mac(::protocol::msg::WifiInfo::_mac_type arg)
  {
    msg_.mac = std::move(arg);
    return Init_WifiInfo_type(msg_);
  }

private:
  ::protocol::msg::WifiInfo msg_;
};

class Init_WifiInfo_ip
{
public:
  explicit Init_WifiInfo_ip(::protocol::msg::WifiInfo & msg)
  : msg_(msg)
  {}
  Init_WifiInfo_mac ip(::protocol::msg::WifiInfo::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_WifiInfo_mac(msg_);
  }

private:
  ::protocol::msg::WifiInfo msg_;
};

class Init_WifiInfo_pwd
{
public:
  explicit Init_WifiInfo_pwd(::protocol::msg::WifiInfo & msg)
  : msg_(msg)
  {}
  Init_WifiInfo_ip pwd(::protocol::msg::WifiInfo::_pwd_type arg)
  {
    msg_.pwd = std::move(arg);
    return Init_WifiInfo_ip(msg_);
  }

private:
  ::protocol::msg::WifiInfo msg_;
};

class Init_WifiInfo_ssid
{
public:
  Init_WifiInfo_ssid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WifiInfo_pwd ssid(::protocol::msg::WifiInfo::_ssid_type arg)
  {
    msg_.ssid = std::move(arg);
    return Init_WifiInfo_pwd(msg_);
  }

private:
  ::protocol::msg::WifiInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::WifiInfo>()
{
  return protocol::msg::builder::Init_WifiInfo_ssid();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__WIFI_INFO__BUILDER_HPP_
