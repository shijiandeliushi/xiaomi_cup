// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/Unlock.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__UNLOCK__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__UNLOCK__BUILDER_HPP_

#include "protocol/srv/detail/unlock__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_Unlock_Request_httplink
{
public:
  Init_Unlock_Request_httplink()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::Unlock_Request httplink(::protocol::srv::Unlock_Request::_httplink_type arg)
  {
    msg_.httplink = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::Unlock_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::Unlock_Request>()
{
  return protocol::srv::builder::Init_Unlock_Request_httplink();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_Unlock_Response_code
{
public:
  explicit Init_Unlock_Response_code(::protocol::srv::Unlock_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::Unlock_Response code(::protocol::srv::Unlock_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::Unlock_Response msg_;
};

class Init_Unlock_Response_unlock_result
{
public:
  Init_Unlock_Response_unlock_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Unlock_Response_code unlock_result(::protocol::srv::Unlock_Response::_unlock_result_type arg)
  {
    msg_.unlock_result = std::move(arg);
    return Init_Unlock_Response_code(msg_);
  }

private:
  ::protocol::srv::Unlock_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::Unlock_Response>()
{
  return protocol::srv::builder::Init_Unlock_Response_unlock_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__UNLOCK__BUILDER_HPP_
