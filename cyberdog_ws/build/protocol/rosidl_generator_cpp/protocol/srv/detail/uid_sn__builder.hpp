// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/UidSn.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__UID_SN__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__UID_SN__BUILDER_HPP_

#include "protocol/srv/detail/uid_sn__struct.hpp"
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
auto build<::protocol::srv::UidSn_Request>()
{
  return ::protocol::srv::UidSn_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_UidSn_Response_code
{
public:
  explicit Init_UidSn_Response_code(::protocol::srv::UidSn_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::UidSn_Response code(::protocol::srv::UidSn_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::UidSn_Response msg_;
};

class Init_UidSn_Response_sn
{
public:
  explicit Init_UidSn_Response_sn(::protocol::srv::UidSn_Response & msg)
  : msg_(msg)
  {}
  Init_UidSn_Response_code sn(::protocol::srv::UidSn_Response::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_UidSn_Response_code(msg_);
  }

private:
  ::protocol::srv::UidSn_Response msg_;
};

class Init_UidSn_Response_uid
{
public:
  Init_UidSn_Response_uid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UidSn_Response_sn uid(::protocol::srv::UidSn_Response::_uid_type arg)
  {
    msg_.uid = std::move(arg);
    return Init_UidSn_Response_sn(msg_);
  }

private:
  ::protocol::srv::UidSn_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::UidSn_Response>()
{
  return protocol::srv::builder::Init_UidSn_Response_uid();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__UID_SN__BUILDER_HPP_
