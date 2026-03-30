// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/IP.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__IP__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__IP__BUILDER_HPP_

#include "protocol/srv/detail/ip__struct.hpp"
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
auto build<::protocol::srv::IP_Request>()
{
  return ::protocol::srv::IP_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_IP_Response_code
{
public:
  explicit Init_IP_Response_code(::protocol::srv::IP_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::IP_Response code(::protocol::srv::IP_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::IP_Response msg_;
};

class Init_IP_Response_ip
{
public:
  Init_IP_Response_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IP_Response_code ip(::protocol::srv::IP_Response::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return Init_IP_Response_code(msg_);
  }

private:
  ::protocol::srv::IP_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::IP_Response>()
{
  return protocol::srv::builder::Init_IP_Response_ip();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__IP__BUILDER_HPP_
