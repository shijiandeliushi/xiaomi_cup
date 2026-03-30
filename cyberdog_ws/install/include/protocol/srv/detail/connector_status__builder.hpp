// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/ConnectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CONNECTOR_STATUS__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__CONNECTOR_STATUS__BUILDER_HPP_

#include "protocol/srv/detail/connector_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::ConnectorStatus_Request>()
{
  return ::protocol::srv::ConnectorStatus_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_ConnectorStatus_Response_code
{
public:
  explicit Init_ConnectorStatus_Response_code(::protocol::srv::ConnectorStatus_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::ConnectorStatus_Response code(::protocol::srv::ConnectorStatus_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::ConnectorStatus_Response msg_;
};

class Init_ConnectorStatus_Response_strength
{
public:
  explicit Init_ConnectorStatus_Response_strength(::protocol::srv::ConnectorStatus_Response & msg)
  : msg_(msg)
  {}
  Init_ConnectorStatus_Response_code strength(::protocol::srv::ConnectorStatus_Response::_strength_type arg)
  {
    msg_.strength = std::move(arg);
    return Init_ConnectorStatus_Response_code(msg_);
  }

private:
  ::protocol::srv::ConnectorStatus_Response msg_;
};

class Init_ConnectorStatus_Response_ssid
{
public:
  explicit Init_ConnectorStatus_Response_ssid(::protocol::srv::ConnectorStatus_Response & msg)
  : msg_(msg)
  {}
  Init_ConnectorStatus_Response_strength ssid(::protocol::srv::ConnectorStatus_Response::_ssid_type arg)
  {
    msg_.ssid = std::move(arg);
    return Init_ConnectorStatus_Response_strength(msg_);
  }

private:
  ::protocol::srv::ConnectorStatus_Response msg_;
};

class Init_ConnectorStatus_Response_is_connected
{
public:
  Init_ConnectorStatus_Response_is_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConnectorStatus_Response_ssid is_connected(::protocol::srv::ConnectorStatus_Response::_is_connected_type arg)
  {
    msg_.is_connected = std::move(arg);
    return Init_ConnectorStatus_Response_ssid(msg_);
  }

private:
  ::protocol::srv::ConnectorStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::ConnectorStatus_Response>()
{
  return protocol::srv::builder::Init_ConnectorStatus_Response_is_connected();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__CONNECTOR_STATUS__BUILDER_HPP_
