// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/FaceInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_INFO__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__FACE_INFO__BUILDER_HPP_

#include "protocol/msg/detail/face_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_FaceInfo_infos
{
public:
  explicit Init_FaceInfo_infos(::protocol::msg::FaceInfo & msg)
  : msg_(msg)
  {}
  ::protocol::msg::FaceInfo infos(::protocol::msg::FaceInfo::_infos_type arg)
  {
    msg_.infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::FaceInfo msg_;
};

class Init_FaceInfo_count
{
public:
  explicit Init_FaceInfo_count(::protocol::msg::FaceInfo & msg)
  : msg_(msg)
  {}
  Init_FaceInfo_infos count(::protocol::msg::FaceInfo::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_FaceInfo_infos(msg_);
  }

private:
  ::protocol::msg::FaceInfo msg_;
};

class Init_FaceInfo_header
{
public:
  Init_FaceInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceInfo_count header(::protocol::msg::FaceInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FaceInfo_count(msg_);
  }

private:
  ::protocol::msg::FaceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::FaceInfo>()
{
  return protocol::msg::builder::Init_FaceInfo_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__FACE_INFO__BUILDER_HPP_
