// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/BesHttpSendFile.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BES_HTTP_SEND_FILE__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__BES_HTTP_SEND_FILE__BUILDER_HPP_

#include "protocol/srv/detail/bes_http_send_file__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_BesHttpSendFile_Request_milsecs
{
public:
  explicit Init_BesHttpSendFile_Request_milsecs(::protocol::srv::BesHttpSendFile_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::BesHttpSendFile_Request milsecs(::protocol::srv::BesHttpSendFile_Request::_milsecs_type arg)
  {
    msg_.milsecs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::BesHttpSendFile_Request msg_;
};

class Init_BesHttpSendFile_Request_info
{
public:
  explicit Init_BesHttpSendFile_Request_info(::protocol::srv::BesHttpSendFile_Request & msg)
  : msg_(msg)
  {}
  Init_BesHttpSendFile_Request_milsecs info(::protocol::srv::BesHttpSendFile_Request::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_BesHttpSendFile_Request_milsecs(msg_);
  }

private:
  ::protocol::srv::BesHttpSendFile_Request msg_;
};

class Init_BesHttpSendFile_Request_content_type
{
public:
  explicit Init_BesHttpSendFile_Request_content_type(::protocol::srv::BesHttpSendFile_Request & msg)
  : msg_(msg)
  {}
  Init_BesHttpSendFile_Request_info content_type(::protocol::srv::BesHttpSendFile_Request::_content_type_type arg)
  {
    msg_.content_type = std::move(arg);
    return Init_BesHttpSendFile_Request_info(msg_);
  }

private:
  ::protocol::srv::BesHttpSendFile_Request msg_;
};

class Init_BesHttpSendFile_Request_file_name
{
public:
  explicit Init_BesHttpSendFile_Request_file_name(::protocol::srv::BesHttpSendFile_Request & msg)
  : msg_(msg)
  {}
  Init_BesHttpSendFile_Request_content_type file_name(::protocol::srv::BesHttpSendFile_Request::_file_name_type arg)
  {
    msg_.file_name = std::move(arg);
    return Init_BesHttpSendFile_Request_content_type(msg_);
  }

private:
  ::protocol::srv::BesHttpSendFile_Request msg_;
};

class Init_BesHttpSendFile_Request_url
{
public:
  explicit Init_BesHttpSendFile_Request_url(::protocol::srv::BesHttpSendFile_Request & msg)
  : msg_(msg)
  {}
  Init_BesHttpSendFile_Request_file_name url(::protocol::srv::BesHttpSendFile_Request::_url_type arg)
  {
    msg_.url = std::move(arg);
    return Init_BesHttpSendFile_Request_file_name(msg_);
  }

private:
  ::protocol::srv::BesHttpSendFile_Request msg_;
};

class Init_BesHttpSendFile_Request_method
{
public:
  Init_BesHttpSendFile_Request_method()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BesHttpSendFile_Request_url method(::protocol::srv::BesHttpSendFile_Request::_method_type arg)
  {
    msg_.method = std::move(arg);
    return Init_BesHttpSendFile_Request_url(msg_);
  }

private:
  ::protocol::srv::BesHttpSendFile_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BesHttpSendFile_Request>()
{
  return protocol::srv::builder::Init_BesHttpSendFile_Request_method();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_BesHttpSendFile_Response_code
{
public:
  explicit Init_BesHttpSendFile_Response_code(::protocol::srv::BesHttpSendFile_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::BesHttpSendFile_Response code(::protocol::srv::BesHttpSendFile_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::BesHttpSendFile_Response msg_;
};

class Init_BesHttpSendFile_Response_data
{
public:
  Init_BesHttpSendFile_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BesHttpSendFile_Response_code data(::protocol::srv::BesHttpSendFile_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_BesHttpSendFile_Response_code(msg_);
  }

private:
  ::protocol::srv::BesHttpSendFile_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BesHttpSendFile_Response>()
{
  return protocol::srv::builder::Init_BesHttpSendFile_Response_data();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__BES_HTTP_SEND_FILE__BUILDER_HPP_
