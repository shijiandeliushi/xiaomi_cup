// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/UserInformation.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__USER_INFORMATION__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__USER_INFORMATION__BUILDER_HPP_

#include "protocol/msg/detail/user_information__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_UserInformation_facestatus
{
public:
  explicit Init_UserInformation_facestatus(::protocol::msg::UserInformation & msg)
  : msg_(msg)
  {}
  ::protocol::msg::UserInformation facestatus(::protocol::msg::UserInformation::_facestatus_type arg)
  {
    msg_.facestatus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::UserInformation msg_;
};

class Init_UserInformation_voicestatus
{
public:
  explicit Init_UserInformation_voicestatus(::protocol::msg::UserInformation & msg)
  : msg_(msg)
  {}
  Init_UserInformation_facestatus voicestatus(::protocol::msg::UserInformation::_voicestatus_type arg)
  {
    msg_.voicestatus = std::move(arg);
    return Init_UserInformation_facestatus(msg_);
  }

private:
  ::protocol::msg::UserInformation msg_;
};

class Init_UserInformation_username
{
public:
  explicit Init_UserInformation_username(::protocol::msg::UserInformation & msg)
  : msg_(msg)
  {}
  Init_UserInformation_voicestatus username(::protocol::msg::UserInformation::_username_type arg)
  {
    msg_.username = std::move(arg);
    return Init_UserInformation_voicestatus(msg_);
  }

private:
  ::protocol::msg::UserInformation msg_;
};

class Init_UserInformation_id
{
public:
  Init_UserInformation_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UserInformation_username id(::protocol::msg::UserInformation::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_UserInformation_username(msg_);
  }

private:
  ::protocol::msg::UserInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::UserInformation>()
{
  return protocol::msg::builder::Init_UserInformation_id();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__USER_INFORMATION__BUILDER_HPP_
