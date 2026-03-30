// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/CameraService.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CAMERA_SERVICE__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__CAMERA_SERVICE__BUILDER_HPP_

#include "protocol/srv/detail/camera_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_CameraService_Request_fps
{
public:
  explicit Init_CameraService_Request_fps(::protocol::srv::CameraService_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::CameraService_Request fps(::protocol::srv::CameraService_Request::_fps_type arg)
  {
    msg_.fps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::CameraService_Request msg_;
};

class Init_CameraService_Request_height
{
public:
  explicit Init_CameraService_Request_height(::protocol::srv::CameraService_Request & msg)
  : msg_(msg)
  {}
  Init_CameraService_Request_fps height(::protocol::srv::CameraService_Request::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_CameraService_Request_fps(msg_);
  }

private:
  ::protocol::srv::CameraService_Request msg_;
};

class Init_CameraService_Request_width
{
public:
  explicit Init_CameraService_Request_width(::protocol::srv::CameraService_Request & msg)
  : msg_(msg)
  {}
  Init_CameraService_Request_height width(::protocol::srv::CameraService_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_CameraService_Request_height(msg_);
  }

private:
  ::protocol::srv::CameraService_Request msg_;
};

class Init_CameraService_Request_args
{
public:
  explicit Init_CameraService_Request_args(::protocol::srv::CameraService_Request & msg)
  : msg_(msg)
  {}
  Init_CameraService_Request_width args(::protocol::srv::CameraService_Request::_args_type arg)
  {
    msg_.args = std::move(arg);
    return Init_CameraService_Request_width(msg_);
  }

private:
  ::protocol::srv::CameraService_Request msg_;
};

class Init_CameraService_Request_command
{
public:
  Init_CameraService_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraService_Request_args command(::protocol::srv::CameraService_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_CameraService_Request_args(msg_);
  }

private:
  ::protocol::srv::CameraService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::CameraService_Request>()
{
  return protocol::srv::builder::Init_CameraService_Request_command();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_CameraService_Response_code
{
public:
  explicit Init_CameraService_Response_code(::protocol::srv::CameraService_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::CameraService_Response code(::protocol::srv::CameraService_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::CameraService_Response msg_;
};

class Init_CameraService_Response_msg
{
public:
  explicit Init_CameraService_Response_msg(::protocol::srv::CameraService_Response & msg)
  : msg_(msg)
  {}
  Init_CameraService_Response_code msg(::protocol::srv::CameraService_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_CameraService_Response_code(msg_);
  }

private:
  ::protocol::srv::CameraService_Response msg_;
};

class Init_CameraService_Response_result
{
public:
  Init_CameraService_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraService_Response_msg result(::protocol::srv::CameraService_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_CameraService_Response_msg(msg_);
  }

private:
  ::protocol::srv::CameraService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::CameraService_Response>()
{
  return protocol::srv::builder::Init_CameraService_Response_result();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__CAMERA_SERVICE__BUILDER_HPP_
