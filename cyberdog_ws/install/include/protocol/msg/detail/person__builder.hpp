// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__PERSON__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__PERSON__BUILDER_HPP_

#include "protocol/msg/detail/person__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_Person_track_res
{
public:
  explicit Init_Person_track_res(::protocol::msg::Person & msg)
  : msg_(msg)
  {}
  ::protocol::msg::Person track_res(::protocol::msg::Person::_track_res_type arg)
  {
    msg_.track_res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::Person msg_;
};

class Init_Person_body_info
{
public:
  explicit Init_Person_body_info(::protocol::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_track_res body_info(::protocol::msg::Person::_body_info_type arg)
  {
    msg_.body_info = std::move(arg);
    return Init_Person_track_res(msg_);
  }

private:
  ::protocol::msg::Person msg_;
};

class Init_Person_face_info
{
public:
  explicit Init_Person_face_info(::protocol::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_body_info face_info(::protocol::msg::Person::_face_info_type arg)
  {
    msg_.face_info = std::move(arg);
    return Init_Person_body_info(msg_);
  }

private:
  ::protocol::msg::Person msg_;
};

class Init_Person_header
{
public:
  Init_Person_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Person_face_info header(::protocol::msg::Person::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Person_face_info(msg_);
  }

private:
  ::protocol::msg::Person msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::Person>()
{
  return protocol::msg::builder::Init_Person_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__PERSON__BUILDER_HPP_
