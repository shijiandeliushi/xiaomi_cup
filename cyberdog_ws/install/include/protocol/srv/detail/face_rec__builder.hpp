// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/FaceRec.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FACE_REC__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__FACE_REC__BUILDER_HPP_

#include "protocol/srv/detail/face_rec__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_FaceRec_Request_timeout
{
public:
  explicit Init_FaceRec_Request_timeout(::protocol::srv::FaceRec_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::FaceRec_Request timeout(::protocol::srv::FaceRec_Request::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::FaceRec_Request msg_;
};

class Init_FaceRec_Request_id
{
public:
  explicit Init_FaceRec_Request_id(::protocol::srv::FaceRec_Request & msg)
  : msg_(msg)
  {}
  Init_FaceRec_Request_timeout id(::protocol::srv::FaceRec_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_FaceRec_Request_timeout(msg_);
  }

private:
  ::protocol::srv::FaceRec_Request msg_;
};

class Init_FaceRec_Request_username
{
public:
  explicit Init_FaceRec_Request_username(::protocol::srv::FaceRec_Request & msg)
  : msg_(msg)
  {}
  Init_FaceRec_Request_id username(::protocol::srv::FaceRec_Request::_username_type arg)
  {
    msg_.username = std::move(arg);
    return Init_FaceRec_Request_id(msg_);
  }

private:
  ::protocol::srv::FaceRec_Request msg_;
};

class Init_FaceRec_Request_command
{
public:
  Init_FaceRec_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceRec_Request_username command(::protocol::srv::FaceRec_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_FaceRec_Request_username(msg_);
  }

private:
  ::protocol::srv::FaceRec_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::FaceRec_Request>()
{
  return protocol::srv::builder::Init_FaceRec_Request_command();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_FaceRec_Response_code
{
public:
  explicit Init_FaceRec_Response_code(::protocol::srv::FaceRec_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::FaceRec_Response code(::protocol::srv::FaceRec_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::FaceRec_Response msg_;
};

class Init_FaceRec_Response_result
{
public:
  Init_FaceRec_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceRec_Response_code result(::protocol::srv::FaceRec_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_FaceRec_Response_code(msg_);
  }

private:
  ::protocol::srv::FaceRec_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::FaceRec_Response>()
{
  return protocol::srv::builder::Init_FaceRec_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__FACE_REC__BUILDER_HPP_
