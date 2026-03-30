// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/GetMapLabel.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__GET_MAP_LABEL__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__GET_MAP_LABEL__BUILDER_HPP_

#include "protocol/srv/detail/get_map_label__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_GetMapLabel_Request_map_id
{
public:
  explicit Init_GetMapLabel_Request_map_id(::protocol::srv::GetMapLabel_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::GetMapLabel_Request map_id(::protocol::srv::GetMapLabel_Request::_map_id_type arg)
  {
    msg_.map_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::GetMapLabel_Request msg_;
};

class Init_GetMapLabel_Request_map_name
{
public:
  Init_GetMapLabel_Request_map_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMapLabel_Request_map_id map_name(::protocol::srv::GetMapLabel_Request::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_GetMapLabel_Request_map_id(msg_);
  }

private:
  ::protocol::srv::GetMapLabel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::GetMapLabel_Request>()
{
  return protocol::srv::builder::Init_GetMapLabel_Request_map_name();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_GetMapLabel_Response_code
{
public:
  explicit Init_GetMapLabel_Response_code(::protocol::srv::GetMapLabel_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::GetMapLabel_Response code(::protocol::srv::GetMapLabel_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::GetMapLabel_Response msg_;
};

class Init_GetMapLabel_Response_label
{
public:
  explicit Init_GetMapLabel_Response_label(::protocol::srv::GetMapLabel_Response & msg)
  : msg_(msg)
  {}
  Init_GetMapLabel_Response_code label(::protocol::srv::GetMapLabel_Response::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_GetMapLabel_Response_code(msg_);
  }

private:
  ::protocol::srv::GetMapLabel_Response msg_;
};

class Init_GetMapLabel_Response_success
{
public:
  Init_GetMapLabel_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMapLabel_Response_label success(::protocol::srv::GetMapLabel_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetMapLabel_Response_label(msg_);
  }

private:
  ::protocol::srv::GetMapLabel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::GetMapLabel_Response>()
{
  return protocol::srv::builder::Init_GetMapLabel_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__GET_MAP_LABEL__BUILDER_HPP_
