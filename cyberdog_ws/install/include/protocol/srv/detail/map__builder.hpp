// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/Map.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__MAP__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__MAP__BUILDER_HPP_

#include "protocol/srv/detail/map__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_Map_Request_request
{
public:
  explicit Init_Map_Request_request(::protocol::srv::Map_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::Map_Request request(::protocol::srv::Map_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::Map_Request msg_;
};

class Init_Map_Request_map_build_type
{
public:
  explicit Init_Map_Request_map_build_type(::protocol::srv::Map_Request & msg)
  : msg_(msg)
  {}
  Init_Map_Request_request map_build_type(::protocol::srv::Map_Request::_map_build_type_type arg)
  {
    msg_.map_build_type = std::move(arg);
    return Init_Map_Request_request(msg_);
  }

private:
  ::protocol::srv::Map_Request msg_;
};

class Init_Map_Request_command
{
public:
  Init_Map_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Map_Request_map_build_type command(::protocol::srv::Map_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_Map_Request_map_build_type(msg_);
  }

private:
  ::protocol::srv::Map_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::Map_Request>()
{
  return protocol::srv::builder::Init_Map_Request_command();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_Map_Response_code
{
public:
  explicit Init_Map_Response_code(::protocol::srv::Map_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::Map_Response code(::protocol::srv::Map_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::Map_Response msg_;
};

class Init_Map_Response_response
{
public:
  Init_Map_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Map_Response_code response(::protocol::srv::Map_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_Map_Response_code(msg_);
  }

private:
  ::protocol::srv::Map_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::Map_Response>()
{
  return protocol::srv::builder::Init_Map_Response_response();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__MAP__BUILDER_HPP_
