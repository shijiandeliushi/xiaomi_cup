// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/BmsInfo.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__BMS_INFO__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__BMS_INFO__BUILDER_HPP_

#include "protocol/srv/detail/bms_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BmsInfo_Request>()
{
  return ::protocol::srv::BmsInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_BmsInfo_Response_code
{
public:
  explicit Init_BmsInfo_Response_code(::protocol::srv::BmsInfo_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::BmsInfo_Response code(::protocol::srv::BmsInfo_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::BmsInfo_Response msg_;
};

class Init_BmsInfo_Response_msg
{
public:
  Init_BmsInfo_Response_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BmsInfo_Response_code msg(::protocol::srv::BmsInfo_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_BmsInfo_Response_code(msg_);
  }

private:
  ::protocol::srv::BmsInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::BmsInfo_Response>()
{
  return protocol::srv::builder::Init_BmsInfo_Response_msg();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__BMS_INFO__BUILDER_HPP_
