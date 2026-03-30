// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/Face.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__FACE__BUILDER_HPP_

#include "protocol/msg/detail/face__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_Face_emotion
{
public:
  explicit Init_Face_emotion(::protocol::msg::Face & msg)
  : msg_(msg)
  {}
  ::protocol::msg::Face emotion(::protocol::msg::Face::_emotion_type arg)
  {
    msg_.emotion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::Face msg_;
};

class Init_Face_age
{
public:
  explicit Init_Face_age(::protocol::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_emotion age(::protocol::msg::Face::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Face_emotion(msg_);
  }

private:
  ::protocol::msg::Face msg_;
};

class Init_Face_is_host
{
public:
  explicit Init_Face_is_host(::protocol::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_age is_host(::protocol::msg::Face::_is_host_type arg)
  {
    msg_.is_host = std::move(arg);
    return Init_Face_age(msg_);
  }

private:
  ::protocol::msg::Face msg_;
};

class Init_Face_row
{
public:
  explicit Init_Face_row(::protocol::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_is_host row(::protocol::msg::Face::_row_type arg)
  {
    msg_.row = std::move(arg);
    return Init_Face_is_host(msg_);
  }

private:
  ::protocol::msg::Face msg_;
};

class Init_Face_pitch
{
public:
  explicit Init_Face_pitch(::protocol::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_row pitch(::protocol::msg::Face::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Face_row(msg_);
  }

private:
  ::protocol::msg::Face msg_;
};

class Init_Face_yaw
{
public:
  explicit Init_Face_yaw(::protocol::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_pitch yaw(::protocol::msg::Face::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Face_pitch(msg_);
  }

private:
  ::protocol::msg::Face msg_;
};

class Init_Face_match
{
public:
  explicit Init_Face_match(::protocol::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_yaw match(::protocol::msg::Face::_match_type arg)
  {
    msg_.match = std::move(arg);
    return Init_Face_yaw(msg_);
  }

private:
  ::protocol::msg::Face msg_;
};

class Init_Face_score
{
public:
  explicit Init_Face_score(::protocol::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_match score(::protocol::msg::Face::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_Face_match(msg_);
  }

private:
  ::protocol::msg::Face msg_;
};

class Init_Face_id
{
public:
  explicit Init_Face_id(::protocol::msg::Face & msg)
  : msg_(msg)
  {}
  Init_Face_score id(::protocol::msg::Face::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Face_score(msg_);
  }

private:
  ::protocol::msg::Face msg_;
};

class Init_Face_roi
{
public:
  Init_Face_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Face_id roi(::protocol::msg::Face::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return Init_Face_id(msg_);
  }

private:
  ::protocol::msg::Face msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::Face>()
{
  return protocol::msg::builder::Init_Face_roi();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__FACE__BUILDER_HPP_
