// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/FaceResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_RESULT__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__FACE_RESULT__BUILDER_HPP_

#include "protocol/msg/detail/face_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_FaceResult_face_images
{
public:
  explicit Init_FaceResult_face_images(::protocol::msg::FaceResult & msg)
  : msg_(msg)
  {}
  ::protocol::msg::FaceResult face_images(::protocol::msg::FaceResult::_face_images_type arg)
  {
    msg_.face_images = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::FaceResult msg_;
};

class Init_FaceResult_msg
{
public:
  explicit Init_FaceResult_msg(::protocol::msg::FaceResult & msg)
  : msg_(msg)
  {}
  Init_FaceResult_face_images msg(::protocol::msg::FaceResult::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_FaceResult_face_images(msg_);
  }

private:
  ::protocol::msg::FaceResult msg_;
};

class Init_FaceResult_result
{
public:
  Init_FaceResult_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceResult_msg result(::protocol::msg::FaceResult::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_FaceResult_msg(msg_);
  }

private:
  ::protocol::msg::FaceResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::FaceResult>()
{
  return protocol::msg::builder::Init_FaceResult_result();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__FACE_RESULT__BUILDER_HPP_
