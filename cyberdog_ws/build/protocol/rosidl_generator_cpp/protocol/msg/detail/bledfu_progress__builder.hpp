// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/BLEDFUProgress.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BLEDFU_PROGRESS__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__BLEDFU_PROGRESS__BUILDER_HPP_

#include "protocol/msg/detail/bledfu_progress__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_BLEDFUProgress_message
{
public:
  explicit Init_BLEDFUProgress_message(::protocol::msg::BLEDFUProgress & msg)
  : msg_(msg)
  {}
  ::protocol::msg::BLEDFUProgress message(::protocol::msg::BLEDFUProgress::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::BLEDFUProgress msg_;
};

class Init_BLEDFUProgress_progress
{
public:
  explicit Init_BLEDFUProgress_progress(::protocol::msg::BLEDFUProgress & msg)
  : msg_(msg)
  {}
  Init_BLEDFUProgress_message progress(::protocol::msg::BLEDFUProgress::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_BLEDFUProgress_message(msg_);
  }

private:
  ::protocol::msg::BLEDFUProgress msg_;
};

class Init_BLEDFUProgress_status
{
public:
  Init_BLEDFUProgress_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BLEDFUProgress_progress status(::protocol::msg::BLEDFUProgress::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_BLEDFUProgress_progress(msg_);
  }

private:
  ::protocol::msg::BLEDFUProgress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::BLEDFUProgress>()
{
  return protocol::msg::builder::Init_BLEDFUProgress_status();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__BLEDFU_PROGRESS__BUILDER_HPP_
