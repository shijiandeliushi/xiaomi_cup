// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__DEVICE_INFO__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__DEVICE_INFO__BUILDER_HPP_

#include "protocol/srv/detail/device_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_DeviceInfo_Request_uid
{
public:
  explicit Init_DeviceInfo_Request_uid(::protocol::srv::DeviceInfo_Request & msg)
  : msg_(msg)
  {}
  ::protocol::srv::DeviceInfo_Request uid(::protocol::srv::DeviceInfo_Request::_uid_type arg)
  {
    msg_.uid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::DeviceInfo_Request msg_;
};

class Init_DeviceInfo_Request_enables
{
public:
  Init_DeviceInfo_Request_enables()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceInfo_Request_uid enables(::protocol::srv::DeviceInfo_Request::_enables_type arg)
  {
    msg_.enables = std::move(arg);
    return Init_DeviceInfo_Request_uid(msg_);
  }

private:
  ::protocol::srv::DeviceInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::DeviceInfo_Request>()
{
  return protocol::srv::builder::Init_DeviceInfo_Request_enables();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_DeviceInfo_Response_code
{
public:
  explicit Init_DeviceInfo_Response_code(::protocol::srv::DeviceInfo_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::DeviceInfo_Response code(::protocol::srv::DeviceInfo_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::DeviceInfo_Response msg_;
};

class Init_DeviceInfo_Response_info
{
public:
  Init_DeviceInfo_Response_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceInfo_Response_code info(::protocol::srv::DeviceInfo_Response::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DeviceInfo_Response_code(msg_);
  }

private:
  ::protocol::srv::DeviceInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::DeviceInfo_Response>()
{
  return protocol::srv::builder::Init_DeviceInfo_Response_info();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__DEVICE_INFO__BUILDER_HPP_
