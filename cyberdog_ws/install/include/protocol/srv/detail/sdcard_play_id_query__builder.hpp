// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:srv/SdcardPlayIdQuery.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SDCARD_PLAY_ID_QUERY__BUILDER_HPP_
#define PROTOCOL__SRV__DETAIL__SDCARD_PLAY_ID_QUERY__BUILDER_HPP_

#include "protocol/srv/detail/sdcard_play_id_query__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_SdcardPlayIdQuery_Request_play_id
{
public:
  Init_SdcardPlayIdQuery_Request_play_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::protocol::srv::SdcardPlayIdQuery_Request play_id(::protocol::srv::SdcardPlayIdQuery_Request::_play_id_type arg)
  {
    msg_.play_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::SdcardPlayIdQuery_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::SdcardPlayIdQuery_Request>()
{
  return protocol::srv::builder::Init_SdcardPlayIdQuery_Request_play_id();
}

}  // namespace protocol


namespace protocol
{

namespace srv
{

namespace builder
{

class Init_SdcardPlayIdQuery_Response_code
{
public:
  explicit Init_SdcardPlayIdQuery_Response_code(::protocol::srv::SdcardPlayIdQuery_Response & msg)
  : msg_(msg)
  {}
  ::protocol::srv::SdcardPlayIdQuery_Response code(::protocol::srv::SdcardPlayIdQuery_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::srv::SdcardPlayIdQuery_Response msg_;
};

class Init_SdcardPlayIdQuery_Response_exist
{
public:
  Init_SdcardPlayIdQuery_Response_exist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdcardPlayIdQuery_Response_code exist(::protocol::srv::SdcardPlayIdQuery_Response::_exist_type arg)
  {
    msg_.exist = std::move(arg);
    return Init_SdcardPlayIdQuery_Response_code(msg_);
  }

private:
  ::protocol::srv::SdcardPlayIdQuery_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::srv::SdcardPlayIdQuery_Response>()
{
  return protocol::srv::builder::Init_SdcardPlayIdQuery_Response_exist();
}

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__SDCARD_PLAY_ID_QUERY__BUILDER_HPP_
