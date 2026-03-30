// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/NotifyToApp.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__NOTIFY_TO_APP__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__NOTIFY_TO_APP__BUILDER_HPP_

#include "protocol/msg/detail/notify_to_app__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_NotifyToApp_code
{
public:
  explicit Init_NotifyToApp_code(::protocol::msg::NotifyToApp & msg)
  : msg_(msg)
  {}
  ::protocol::msg::NotifyToApp code(::protocol::msg::NotifyToApp::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::NotifyToApp msg_;
};

class Init_NotifyToApp_ip
{
public:
  explicit Init_NotifyToApp_ip(::protocol::msg::NotifyToApp & msg)
  : msg_(msg)
  {}
  Init_NotifyToApp_code ip(::protocol::msg::NotifyToApp::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_NotifyToApp_code(msg_);
  }

private:
  ::protocol::msg::NotifyToApp msg_;
};

class Init_NotifyToApp_ssid
{
public:
  Init_NotifyToApp_ssid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NotifyToApp_ip ssid(::protocol::msg::NotifyToApp::_ssid_type arg)
  {
    msg_.ssid = std::move(arg);
    return Init_NotifyToApp_ip(msg_);
  }

private:
  ::protocol::msg::NotifyToApp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::NotifyToApp>()
{
  return protocol::msg::builder::Init_NotifyToApp_ssid();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__NOTIFY_TO_APP__BUILDER_HPP_
