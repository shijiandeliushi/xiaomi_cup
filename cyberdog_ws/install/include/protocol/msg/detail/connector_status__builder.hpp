// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/ConnectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__CONNECTOR_STATUS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__CONNECTOR_STATUS__BUILDER_HPP_

#include "protocol/msg/detail/connector_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_ConnectorStatus_code
{
public:
  explicit Init_ConnectorStatus_code(::protocol::msg::ConnectorStatus & msg)
  : msg_(msg)
  {}
  ::protocol::msg::ConnectorStatus code(::protocol::msg::ConnectorStatus::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::ConnectorStatus msg_;
};

class Init_ConnectorStatus_strength
{
public:
  explicit Init_ConnectorStatus_strength(::protocol::msg::ConnectorStatus & msg)
  : msg_(msg)
  {}
  Init_ConnectorStatus_code strength(::protocol::msg::ConnectorStatus::_strength_type arg)
  {
    msg_.strength = std::move(arg);
    return Init_ConnectorStatus_code(msg_);
  }

private:
  ::protocol::msg::ConnectorStatus msg_;
};

class Init_ConnectorStatus_provider_ip
{
public:
  explicit Init_ConnectorStatus_provider_ip(::protocol::msg::ConnectorStatus & msg)
  : msg_(msg)
  {}
  Init_ConnectorStatus_strength provider_ip(::protocol::msg::ConnectorStatus::_provider_ip_type arg)
  {
    msg_.provider_ip = std::move(arg);
    return Init_ConnectorStatus_strength(msg_);
  }

private:
  ::protocol::msg::ConnectorStatus msg_;
};

class Init_ConnectorStatus_robot_ip
{
public:
  explicit Init_ConnectorStatus_robot_ip(::protocol::msg::ConnectorStatus & msg)
  : msg_(msg)
  {}
  Init_ConnectorStatus_provider_ip robot_ip(::protocol::msg::ConnectorStatus::_robot_ip_type arg)
  {
    msg_.robot_ip = std::move(arg);
    return Init_ConnectorStatus_provider_ip(msg_);
  }

private:
  ::protocol::msg::ConnectorStatus msg_;
};

class Init_ConnectorStatus_ssid
{
public:
  explicit Init_ConnectorStatus_ssid(::protocol::msg::ConnectorStatus & msg)
  : msg_(msg)
  {}
  Init_ConnectorStatus_robot_ip ssid(::protocol::msg::ConnectorStatus::_ssid_type arg)
  {
    msg_.ssid = std::move(arg);
    return Init_ConnectorStatus_robot_ip(msg_);
  }

private:
  ::protocol::msg::ConnectorStatus msg_;
};

class Init_ConnectorStatus_is_internet
{
public:
  explicit Init_ConnectorStatus_is_internet(::protocol::msg::ConnectorStatus & msg)
  : msg_(msg)
  {}
  Init_ConnectorStatus_ssid is_internet(::protocol::msg::ConnectorStatus::_is_internet_type arg)
  {
    msg_.is_internet = std::move(arg);
    return Init_ConnectorStatus_ssid(msg_);
  }

private:
  ::protocol::msg::ConnectorStatus msg_;
};

class Init_ConnectorStatus_is_connected
{
public:
  Init_ConnectorStatus_is_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConnectorStatus_is_internet is_connected(::protocol::msg::ConnectorStatus::_is_connected_type arg)
  {
    msg_.is_connected = std::move(arg);
    return Init_ConnectorStatus_is_internet(msg_);
  }

private:
  ::protocol::msg::ConnectorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::ConnectorStatus>()
{
  return protocol::msg::builder::Init_ConnectorStatus_is_connected();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__CONNECTOR_STATUS__BUILDER_HPP_
