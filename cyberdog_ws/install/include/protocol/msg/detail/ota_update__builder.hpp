// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/OtaUpdate.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__OTA_UPDATE__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__OTA_UPDATE__BUILDER_HPP_

#include "protocol/msg/detail/ota_update__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_OtaUpdate_code
{
public:
  explicit Init_OtaUpdate_code(::protocol::msg::OtaUpdate & msg)
  : msg_(msg)
  {}
  ::protocol::msg::OtaUpdate code(::protocol::msg::OtaUpdate::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::OtaUpdate msg_;
};

class Init_OtaUpdate_progress
{
public:
  Init_OtaUpdate_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OtaUpdate_code progress(::protocol::msg::OtaUpdate::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_OtaUpdate_code(msg_);
  }

private:
  ::protocol::msg::OtaUpdate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::OtaUpdate>()
{
  return protocol::msg::builder::Init_OtaUpdate_progress();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__OTA_UPDATE__BUILDER_HPP_
