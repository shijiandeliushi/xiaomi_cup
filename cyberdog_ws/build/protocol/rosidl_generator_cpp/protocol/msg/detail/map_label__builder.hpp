// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from protocol:msg/MapLabel.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MAP_LABEL__BUILDER_HPP_
#define PROTOCOL__MSG__DETAIL__MAP_LABEL__BUILDER_HPP_

#include "protocol/msg/detail/map_label__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace protocol
{

namespace msg
{

namespace builder
{

class Init_MapLabel_labels
{
public:
  explicit Init_MapLabel_labels(::protocol::msg::MapLabel & msg)
  : msg_(msg)
  {}
  ::protocol::msg::MapLabel labels(::protocol::msg::MapLabel::_labels_type arg)
  {
    msg_.labels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::protocol::msg::MapLabel msg_;
};

class Init_MapLabel_map
{
public:
  explicit Init_MapLabel_map(::protocol::msg::MapLabel & msg)
  : msg_(msg)
  {}
  Init_MapLabel_labels map(::protocol::msg::MapLabel::_map_type arg)
  {
    msg_.map = std::move(arg);
    return Init_MapLabel_labels(msg_);
  }

private:
  ::protocol::msg::MapLabel msg_;
};

class Init_MapLabel_is_outdoor
{
public:
  explicit Init_MapLabel_is_outdoor(::protocol::msg::MapLabel & msg)
  : msg_(msg)
  {}
  Init_MapLabel_map is_outdoor(::protocol::msg::MapLabel::_is_outdoor_type arg)
  {
    msg_.is_outdoor = std::move(arg);
    return Init_MapLabel_map(msg_);
  }

private:
  ::protocol::msg::MapLabel msg_;
};

class Init_MapLabel_map_id
{
public:
  explicit Init_MapLabel_map_id(::protocol::msg::MapLabel & msg)
  : msg_(msg)
  {}
  Init_MapLabel_is_outdoor map_id(::protocol::msg::MapLabel::_map_id_type arg)
  {
    msg_.map_id = std::move(arg);
    return Init_MapLabel_is_outdoor(msg_);
  }

private:
  ::protocol::msg::MapLabel msg_;
};

class Init_MapLabel_map_name
{
public:
  Init_MapLabel_map_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapLabel_map_id map_name(::protocol::msg::MapLabel::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_MapLabel_map_id(msg_);
  }

private:
  ::protocol::msg::MapLabel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::protocol::msg::MapLabel>()
{
  return protocol::msg::builder::Init_MapLabel_map_name();
}

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__MAP_LABEL__BUILDER_HPP_
