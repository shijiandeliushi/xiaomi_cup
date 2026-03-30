// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/FaceEntry.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FACE_ENTRY__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__FACE_ENTRY__BUILDER_HPP_

#include "protocol/srv/detail/face_entry__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_FaceEntry_Request_ishost
{
public:
  explicit Init_FaceEntry_Request_ishost(::protocol::srv::FaceEntry_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::FaceEntry_Request ishost(::protocol::srv::FaceEntry_Request::_ishost_type arg)
  {
    msg_.ishost = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::FaceEntry_Request msg_;
};

class Init_FaceEntry_Request_oriname
{
public:
  explicit Init_FaceEntry_Request_oriname(::protocol::srv::FaceEntry_Request & msg)
  : msg_(msg)
  {}
  Init_FaceEntry_Request_ishost oriname(::protocol::srv::FaceEntry_Request::_oriname_type arg)
  {
    msg_.oriname = std::move(arg);
    return Init_FaceEntry_Request_ishost(msg_);
  }

private:
  ::protocol::srv::FaceEntry_Request msg_;
};

class Init_FaceEntry_Request_username
{
public:
  explicit Init_FaceEntry_Request_username(::protocol::srv::FaceEntry_Request & msg)
  : msg_(msg)
  {}
  Init_FaceEntry_Request_oriname username(::protocol::srv::FaceEntry_Request::_username_type arg)
  {
    msg_.username = std::move(arg);
    return Init_FaceEntry_Request_oriname(msg_);
  }

private:
  ::protocol::srv::FaceEntry_Request msg_;
};

class Init_FaceEntry_Request_command
{
public:
  Init_FaceEntry_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceEntry_Request_username command(::protocol::srv::FaceEntry_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_FaceEntry_Request_username(msg_);
  }

private:
  ::protocol::srv::FaceEntry_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::FaceEntry_Request>()
{
  return protocol::srv::builder::Init_FaceEntry_Request_command();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_FaceEntry_Response_code
{
public:
  explicit Init_FaceEntry_Response_code(::protocol::srv::FaceEntry_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::FaceEntry_Response code(::protocol::srv::FaceEntry_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::FaceEntry_Response msg_;
};

class Init_FaceEntry_Response_allfaces
{
public:
  explicit Init_FaceEntry_Response_allfaces(::protocol::srv::FaceEntry_Response & msg)
  : msg_(msg)
  {}
  Init_FaceEntry_Response_code allfaces(::protocol::srv::FaceEntry_Response::_allfaces_type arg)
  {
    msg_.allfaces = std::move(arg);
    return Init_FaceEntry_Response_code(msg_);
  }

private:
  ::protocol::srv::FaceEntry_Response msg_;
};

class Init_FaceEntry_Response_result
{
public:
  Init_FaceEntry_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceEntry_Response_allfaces result(::protocol::srv::FaceEntry_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_FaceEntry_Response_allfaces(msg_);
  }

private:
  ::protocol::srv::FaceEntry_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::FaceEntry_Response>()
{
  return protocol::srv::builder::Init_FaceEntry_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__FACE_ENTRY__BUILDER_HPP_
