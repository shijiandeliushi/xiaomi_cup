// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/ConnectIp.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CONNECT_IP__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__CONNECT_IP__BUILDER_HPP_

#include "protocol/srv/detail/connect_ip__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_ConnectIp_Request_ip_address
{
public:
  Init_ConnectIp_Request_ip_address()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::ConnectIp_Request ip_address(::protocol::srv::ConnectIp_Request::_ip_address_type arg)
  {
    msg_.ip_address = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::ConnectIp_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::ConnectIp_Request>()
{
  return protocol::srv::builder::Init_ConnectIp_Request_ip_address();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_ConnectIp_Response_success
{
public:
  Init_ConnectIp_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::ConnectIp_Response success(::protocol::srv::ConnectIp_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::ConnectIp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::ConnectIp_Response>()
{
  return protocol::srv::builder::Init_ConnectIp_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__CONNECT_IP__BUILDER_HPP_
