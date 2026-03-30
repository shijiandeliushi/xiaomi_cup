// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/SingleTofPayload.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__SINGLE_TOF_PAYLOAD__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__SINGLE_TOF_PAYLOAD__BUILDER_HPP_

#include "protocol/msg/detail/single_tof_payload__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_SingleTofPayload_intensity
{
public:
  explicit Init_SingleTofPayload_intensity(::protocol::msg::SingleTofPayload & msg)
  : msg_(msg)
  {}
  ::protocol::msg::SingleTofPayload intensity(::protocol::msg::SingleTofPayload::_intensity_type arg)
  {
    msg_.intensity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::SingleTofPayload msg_;
};

class Init_SingleTofPayload_data
{
public:
  explicit Init_SingleTofPayload_data(::protocol::msg::SingleTofPayload & msg)
  : msg_(msg)
  {}
  Init_SingleTofPayload_intensity data(::protocol::msg::SingleTofPayload::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_SingleTofPayload_intensity(msg_);
  }

private:
  ::protocol::msg::SingleTofPayload msg_;
};

class Init_SingleTofPayload_tof_position
{
public:
  explicit Init_SingleTofPayload_tof_position(::protocol::msg::SingleTofPayload & msg)
  : msg_(msg)
  {}
  Init_SingleTofPayload_data tof_position(::protocol::msg::SingleTofPayload::_tof_position_type arg)
  {
    msg_.tof_position = std::move(arg);
    return Init_SingleTofPayload_data(msg_);
  }

private:
  ::protocol::msg::SingleTofPayload msg_;
};

class Init_SingleTofPayload_data_available
{
public:
  explicit Init_SingleTofPayload_data_available(::protocol::msg::SingleTofPayload & msg)
  : msg_(msg)
  {}
  Init_SingleTofPayload_tof_position data_available(::protocol::msg::SingleTofPayload::_data_available_type arg)
  {
    msg_.data_available = std::move(arg);
    return Init_SingleTofPayload_tof_position(msg_);
  }

private:
  ::protocol::msg::SingleTofPayload msg_;
};

class Init_SingleTofPayload_header
{
public:
  Init_SingleTofPayload_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SingleTofPayload_data_available header(::protocol::msg::SingleTofPayload::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SingleTofPayload_data_available(msg_);
  }

private:
  ::protocol::msg::SingleTofPayload msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::SingleTofPayload>()
{
  return protocol::msg::builder::Init_SingleTofPayload_header();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__SINGLE_TOF_PAYLOAD__BUILDER_HPP_
