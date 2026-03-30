// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/BodyRegion.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BODY_REGION__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__BODY_REGION__BUILDER_HPP_

#include "protocol/srv/detail/body_region__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_BodyRegion_Request_roi
{
public:
  Init_BodyRegion_Request_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::BodyRegion_Request roi(::protocol::srv::BodyRegion_Request::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::BodyRegion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BodyRegion_Request>()
{
  return protocol::srv::builder::Init_BodyRegion_Request_roi();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_BodyRegion_Response_code
{
public:
  explicit Init_BodyRegion_Response_code(::protocol::srv::BodyRegion_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::BodyRegion_Response code(::protocol::srv::BodyRegion_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::BodyRegion_Response msg_;
};

class Init_BodyRegion_Response_success
{
public:
  Init_BodyRegion_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BodyRegion_Response_code success(::protocol::srv::BodyRegion_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_BodyRegion_Response_code(msg_);
  }

private:
  ::protocol::srv::BodyRegion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BodyRegion_Response>()
{
  return protocol::srv::builder::Init_BodyRegion_Response_success();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__BODY_REGION__BUILDER_HPP_
