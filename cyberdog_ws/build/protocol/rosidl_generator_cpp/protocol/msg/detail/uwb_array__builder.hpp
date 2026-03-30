// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/UwbArray.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__UWB_ARRAY__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__UWB_ARRAY__BUILDER_HPP_

#include "protocol/msg/detail/uwb_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_UwbArray_data
{
public:
  explicit Init_UwbArray_data(::protocol::msg::UwbArray & msg)
  : msg_(msg)
  {}
  ::protocol::msg::UwbArray data(::protocol::msg::UwbArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::UwbArray msg_;
};

class Init_UwbArray_header
{
public:
  Init_UwbArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UwbArray_data header(::protocol::msg::UwbArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UwbArray_data(msg_);
  }

private:
  ::protocol::msg::UwbArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::UwbArray>()
{
  return protocol::msg::builder::Init_UwbArray_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__UWB_ARRAY__BUILDER_HPP_
