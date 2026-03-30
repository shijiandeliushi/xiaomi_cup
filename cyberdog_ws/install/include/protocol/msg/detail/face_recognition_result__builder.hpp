// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/FaceRecognitionResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__FACE_RECOGNITION_RESULT__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__FACE_RECOGNITION_RESULT__BUILDER_HPP_

#include "protocol/msg/detail/face_recognition_result__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_FaceRecognitionResult_emotion
{
public:
  explicit Init_FaceRecognitionResult_emotion(::protocol::msg::FaceRecognitionResult & msg)
  : msg_(msg)
  {}
  ::protocol::msg::FaceRecognitionResult emotion(::protocol::msg::FaceRecognitionResult::_emotion_type arg)
  {
    msg_.emotion = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::FaceRecognitionResult msg_;
};

class Init_FaceRecognitionResult_age
{
public:
  explicit Init_FaceRecognitionResult_age(::protocol::msg::FaceRecognitionResult & msg)
  : msg_(msg)
  {}
  Init_FaceRecognitionResult_emotion age(::protocol::msg::FaceRecognitionResult::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_FaceRecognitionResult_emotion(msg_);
  }

private:
  ::protocol::msg::FaceRecognitionResult msg_;
};

class Init_FaceRecognitionResult_id
{
public:
  explicit Init_FaceRecognitionResult_id(::protocol::msg::FaceRecognitionResult & msg)
  : msg_(msg)
  {}
  Init_FaceRecognitionResult_age id(::protocol::msg::FaceRecognitionResult::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_FaceRecognitionResult_age(msg_);
  }

private:
  ::protocol::msg::FaceRecognitionResult msg_;
};

class Init_FaceRecognitionResult_result
{
public:
  explicit Init_FaceRecognitionResult_result(::protocol::msg::FaceRecognitionResult & msg)
  : msg_(msg)
  {}
  Init_FaceRecognitionResult_id result(::protocol::msg::FaceRecognitionResult::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_FaceRecognitionResult_id(msg_);
  }

private:
  ::protocol::msg::FaceRecognitionResult msg_;
};

class Init_FaceRecognitionResult_username
{
public:
  Init_FaceRecognitionResult_username()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceRecognitionResult_result username(::protocol::msg::FaceRecognitionResult::_username_type arg)
  {
    msg_.username = std::move(arg);
    return Init_FaceRecognitionResult_result(msg_);
  }

private:
  ::protocol::msg::FaceRecognitionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::FaceRecognitionResult>()
{
  return protocol::msg::builder::Init_FaceRecognitionResult_username();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__FACE_RECOGNITION_RESULT__BUILDER_HPP_
