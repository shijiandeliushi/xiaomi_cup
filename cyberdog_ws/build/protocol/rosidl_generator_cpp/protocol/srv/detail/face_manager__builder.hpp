// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/FaceManager.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__FACE_MANAGER__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__FACE_MANAGER__BUILDER_HPP_

#include "protocol/srv/detail/face_manager__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_FaceManager_Request_ishost
{
public:
  explicit Init_FaceManager_Request_ishost(::protocol::srv::FaceManager_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::FaceManager_Request ishost(::protocol::srv::FaceManager_Request::_ishost_type arg)
  {
    msg_.ishost = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::FaceManager_Request msg_;
};

class Init_FaceManager_Request_oriname
{
public:
  explicit Init_FaceManager_Request_oriname(::protocol::srv::FaceManager_Request & msg)
  : msg_(msg)
  {}
  Init_FaceManager_Request_ishost oriname(::protocol::srv::FaceManager_Request::_oriname_type arg)
  {
    msg_.oriname = std::move(arg);
    return Init_FaceManager_Request_ishost(msg_);
  }

private:
  ::protocol::srv::FaceManager_Request msg_;
};

class Init_FaceManager_Request_username
{
public:
  explicit Init_FaceManager_Request_username(::protocol::srv::FaceManager_Request & msg)
  : msg_(msg)
  {}
  Init_FaceManager_Request_oriname username(::protocol::srv::FaceManager_Request::_username_type arg)
  {
    msg_.username = std::move(arg);
    return Init_FaceManager_Request_oriname(msg_);
  }

private:
  ::protocol::srv::FaceManager_Request msg_;
};

class Init_FaceManager_Request_args
{
public:
  explicit Init_FaceManager_Request_args(::protocol::srv::FaceManager_Request & msg)
  : msg_(msg)
  {}
  Init_FaceManager_Request_username args(::protocol::srv::FaceManager_Request::_args_type arg)
  {
    msg_.args = std::move(arg);
    return Init_FaceManager_Request_username(msg_);
  }

private:
  ::protocol::srv::FaceManager_Request msg_;
};

class Init_FaceManager_Request_command
{
public:
  Init_FaceManager_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceManager_Request_args command(::protocol::srv::FaceManager_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_FaceManager_Request_args(msg_);
  }

private:
  ::protocol::srv::FaceManager_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::FaceManager_Request>()
{
  return protocol::srv::builder::Init_FaceManager_Request_command();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_FaceManager_Response_code
{
public:
  explicit Init_FaceManager_Response_code(::protocol::srv::FaceManager_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::FaceManager_Response code(::protocol::srv::FaceManager_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::FaceManager_Response msg_;
};

class Init_FaceManager_Response_face_images
{
public:
  explicit Init_FaceManager_Response_face_images(::protocol::srv::FaceManager_Response & msg)
  : msg_(msg)
  {}
  Init_FaceManager_Response_code face_images(::protocol::srv::FaceManager_Response::_face_images_type arg)
  {
    msg_.face_images = std::move(arg);
    return Init_FaceManager_Response_code(msg_);
  }

private:
  ::protocol::srv::FaceManager_Response msg_;
};

class Init_FaceManager_Response_msg
{
public:
  explicit Init_FaceManager_Response_msg(::protocol::srv::FaceManager_Response & msg)
  : msg_(msg)
  {}
  Init_FaceManager_Response_face_images msg(::protocol::srv::FaceManager_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_FaceManager_Response_face_images(msg_);
  }

private:
  ::protocol::srv::FaceManager_Response msg_;
};

class Init_FaceManager_Response_result
{
public:
  Init_FaceManager_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceManager_Response_msg result(::protocol::srv::FaceManager_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_FaceManager_Response_msg(msg_);
  }

private:
  ::protocol::srv::FaceManager_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::FaceManager_Response>()
{
  return protocol::srv::builder::Init_FaceManager_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__FACE_MANAGER__BUILDER_HPP_
