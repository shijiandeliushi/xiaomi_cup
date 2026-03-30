// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/Connector.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CONNECTOR__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__CONNECTOR__BUILDER_HPP_

#include "protocol/srv/detail/connector__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_Connector_Request_provider_ip
{
public:
  explicit Init_Connector_Request_provider_ip(::protocol::srv::Connector_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::Connector_Request provider_ip(::protocol::srv::Connector_Request::_provider_ip_type arg)
  {
    msg_.provider_ip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::Connector_Request msg_;
};

class Init_Connector_Request_wifi_password
{
public:
  explicit Init_Connector_Request_wifi_password(::protocol::srv::Connector_Request & msg)
  : msg_(msg)
  {}
  Init_Connector_Request_provider_ip wifi_password(::protocol::srv::Connector_Request::_wifi_password_type arg)
  {
    msg_.wifi_password = std::move(arg);
    return Init_Connector_Request_provider_ip(msg_);
  }

private:
  ::protocol::srv::Connector_Request msg_;
};

class Init_Connector_Request_wifi_name
{
public:
  Init_Connector_Request_wifi_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Connector_Request_wifi_password wifi_name(::protocol::srv::Connector_Request::_wifi_name_type arg)
  {
    msg_.wifi_name = std::move(arg);
    return Init_Connector_Request_wifi_password(msg_);
  }

private:
  ::protocol::srv::Connector_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::Connector_Request>()
{
  return protocol::srv::builder::Init_Connector_Request_wifi_name();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_Connector_Response_code
{
public:
  explicit Init_Connector_Response_code(::protocol::srv::Connector_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::Connector_Response code(::protocol::srv::Connector_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::Connector_Response msg_;
};

class Init_Connector_Response_connected
{
public:
  Init_Connector_Response_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Connector_Response_code connected(::protocol::srv::Connector_Response::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return Init_Connector_Response_code(msg_);
  }

private:
  ::protocol::srv::Connector_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::Connector_Response>()
{
  return protocol::srv::builder::Init_Connector_Response_connected();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__CONNECTOR__BUILDER_HPP_
