// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/OtaServerCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__OTA_SERVER_CMD__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__OTA_SERVER_CMD__BUILDER_HPP_

#include "protocol/srv/detail/ota_server_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_OtaServerCmd_Request_request
{
public:
  Init_OtaServerCmd_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::OtaServerCmd_Request request(::protocol::srv::OtaServerCmd_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::OtaServerCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::OtaServerCmd_Request>()
{
  return protocol::srv::builder::Init_OtaServerCmd_Request_request();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_OtaServerCmd_Response_code
{
public:
  explicit Init_OtaServerCmd_Response_code(::protocol::srv::OtaServerCmd_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::OtaServerCmd_Response code(::protocol::srv::OtaServerCmd_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::OtaServerCmd_Response msg_;
};

class Init_OtaServerCmd_Response_response
{
public:
  Init_OtaServerCmd_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OtaServerCmd_Response_code response(::protocol::srv::OtaServerCmd_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_OtaServerCmd_Response_code(msg_);
  }

private:
  ::protocol::srv::OtaServerCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::OtaServerCmd_Response>()
{
  return protocol::srv::builder::Init_OtaServerCmd_Response_response();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__OTA_SERVER_CMD__BUILDER_HPP_
