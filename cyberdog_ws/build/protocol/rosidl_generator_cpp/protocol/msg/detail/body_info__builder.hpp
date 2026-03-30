// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/BodyInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BODY_INFO__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__BODY_INFO__BUILDER_HPP_

#include "protocol/msg/detail/body_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_BodyInfo_infos
{
public:
  explicit Init_BodyInfo_infos(::protocol::msg::BodyInfo & msg)
  : msg_(msg)
  {}
  ::protocol::msg::BodyInfo infos(::protocol::msg::BodyInfo::_infos_type arg)
  {
    msg_.infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::BodyInfo msg_;
};

class Init_BodyInfo_count
{
public:
  explicit Init_BodyInfo_count(::protocol::msg::BodyInfo & msg)
  : msg_(msg)
  {}
  Init_BodyInfo_infos count(::protocol::msg::BodyInfo::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_BodyInfo_infos(msg_);
  }

private:
  ::protocol::msg::BodyInfo msg_;
};

class Init_BodyInfo_header
{
public:
  Init_BodyInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BodyInfo_count header(::protocol::msg::BodyInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BodyInfo_count(msg_);
  }

private:
  ::protocol::msg::BodyInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::BodyInfo>()
{
  return protocol::msg::builder::Init_BodyInfo_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__BODY_INFO__BUILDER_HPP_
