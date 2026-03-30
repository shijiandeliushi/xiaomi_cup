// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/CompressedImage.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__COMPRESSED_IMAGE__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__COMPRESSED_IMAGE__BUILDER_HPP_

#include "protocol/msg/detail/compressed_image__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_CompressedImage_data
{
public:
  explicit Init_CompressedImage_data(::protocol::msg::CompressedImage & msg)
  : msg_(msg)
  {}
  ::protocol::msg::CompressedImage data(::protocol::msg::CompressedImage::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::CompressedImage msg_;
};

class Init_CompressedImage_format
{
public:
  explicit Init_CompressedImage_format(::protocol::msg::CompressedImage & msg)
  : msg_(msg)
  {}
  Init_CompressedImage_data format(::protocol::msg::CompressedImage::_format_type arg)
  {
    msg_.format = std::move(arg);
    return Init_CompressedImage_data(msg_);
  }

private:
  ::protocol::msg::CompressedImage msg_;
};

class Init_CompressedImage_header
{
public:
  Init_CompressedImage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompressedImage_format header(::protocol::msg::CompressedImage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CompressedImage_format(msg_);
  }

private:
  ::protocol::msg::CompressedImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::CompressedImage>()
{
  return protocol::msg::builder::Init_CompressedImage_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__COMPRESSED_IMAGE__BUILDER_HPP_
