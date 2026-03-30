// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/MapMetaData.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MAP_META_DATA__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__MAP_META_DATA__BUILDER_HPP_

#include "protocol/msg/detail/map_meta_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_MapMetaData_origin
{
public:
  explicit Init_MapMetaData_origin(::protocol::msg::MapMetaData & msg)
  : msg_(msg)
  {}
  ::protocol::msg::MapMetaData origin(::protocol::msg::MapMetaData::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::MapMetaData msg_;
};

class Init_MapMetaData_height
{
public:
  explicit Init_MapMetaData_height(::protocol::msg::MapMetaData & msg)
  : msg_(msg)
  {}
  Init_MapMetaData_origin height(::protocol::msg::MapMetaData::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_MapMetaData_origin(msg_);
  }

private:
  ::protocol::msg::MapMetaData msg_;
};

class Init_MapMetaData_width
{
public:
  explicit Init_MapMetaData_width(::protocol::msg::MapMetaData & msg)
  : msg_(msg)
  {}
  Init_MapMetaData_height width(::protocol::msg::MapMetaData::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_MapMetaData_height(msg_);
  }

private:
  ::protocol::msg::MapMetaData msg_;
};

class Init_MapMetaData_resolution
{
public:
  explicit Init_MapMetaData_resolution(::protocol::msg::MapMetaData & msg)
  : msg_(msg)
  {}
  Init_MapMetaData_width resolution(::protocol::msg::MapMetaData::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_MapMetaData_width(msg_);
  }

private:
  ::protocol::msg::MapMetaData msg_;
};

class Init_MapMetaData_map_load_time
{
public:
  Init_MapMetaData_map_load_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapMetaData_resolution map_load_time(::protocol::msg::MapMetaData::_map_load_time_type arg)
  {
    msg_.map_load_time = std::move(arg);
    return Init_MapMetaData_resolution(msg_);
  }

private:
  ::protocol::msg::MapMetaData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::MapMetaData>()
{
  return protocol::msg::builder::Init_MapMetaData_map_load_time();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MAP_META_DATA__BUILDER_HPP_
