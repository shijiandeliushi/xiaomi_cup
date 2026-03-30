// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/WifiConnect.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__WIFI_CONNECT__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__WIFI_CONNECT__BUILDER_HPP_

#include "protocol/srv/detail/wifi_connect__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_WifiConnect_Request_pwd
{
public:
  explicit Init_WifiConnect_Request_pwd(::protocol::srv::WifiConnect_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::WifiConnect_Request pwd(::protocol::srv::WifiConnect_Request::_pwd_type arg)
  {
    msg_.pwd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::WifiConnect_Request msg_;
};

class Init_WifiConnect_Request_ssid
{
public:
  Init_WifiConnect_Request_ssid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WifiConnect_Request_pwd ssid(::protocol::srv::WifiConnect_Request::_ssid_type arg)
  {
    msg_.ssid = std::move(arg);
    return Init_WifiConnect_Request_pwd(msg_);
  }

private:
  ::protocol::srv::WifiConnect_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::WifiConnect_Request>()
{
  return protocol::srv::builder::Init_WifiConnect_Request_ssid();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_WifiConnect_Response_code
{
public:
  explicit Init_WifiConnect_Response_code(::protocol::srv::WifiConnect_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::WifiConnect_Response code(::protocol::srv::WifiConnect_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::WifiConnect_Response msg_;
};

class Init_WifiConnect_Response_result
{
public:
  Init_WifiConnect_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WifiConnect_Response_code result(::protocol::srv::WifiConnect_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_WifiConnect_Response_code(msg_);
  }

private:
  ::protocol::srv::WifiConnect_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::WifiConnect_Response>()
{
  return protocol::srv::builder::Init_WifiConnect_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__WIFI_CONNECT__BUILDER_HPP_
