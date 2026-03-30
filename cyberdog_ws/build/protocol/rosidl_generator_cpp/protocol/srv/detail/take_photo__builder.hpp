// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/TakePhoto.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__TAKE_PHOTO__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__TAKE_PHOTO__BUILDER_HPP_

#include "protocol/srv/detail/take_photo__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::TakePhoto_Request>()
{
  return ::protocol::srv::TakePhoto_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_TakePhoto_Response_code
{
public:
  explicit Init_TakePhoto_Response_code(::protocol::srv::TakePhoto_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::TakePhoto_Response code(::protocol::srv::TakePhoto_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::TakePhoto_Response msg_;
};

class Init_TakePhoto_Response_img
{
public:
  explicit Init_TakePhoto_Response_img(::protocol::srv::TakePhoto_Response & msg)
  : msg_(msg)
  {}
  Init_TakePhoto_Response_code img(::protocol::srv::TakePhoto_Response::_img_type arg)
  {
    msg_.img = std::move(arg);
    return Init_TakePhoto_Response_code(msg_);
  }

private:
  ::protocol::srv::TakePhoto_Response msg_;
};

class Init_TakePhoto_Response_result
{
public:
  explicit Init_TakePhoto_Response_result(::protocol::srv::TakePhoto_Response & msg)
  : msg_(msg)
  {}
  Init_TakePhoto_Response_img result(::protocol::srv::TakePhoto_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_TakePhoto_Response_img(msg_);
  }

private:
  ::protocol::srv::TakePhoto_Response msg_;
};

class Init_TakePhoto_Response_message
{
public:
  Init_TakePhoto_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TakePhoto_Response_result message(::protocol::srv::TakePhoto_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_TakePhoto_Response_result(msg_);
  }

private:
  ::protocol::srv::TakePhoto_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::TakePhoto_Response>()
{
  return protocol::srv::builder::Init_TakePhoto_Response_message();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__TAKE_PHOTO__BUILDER_HPP_
