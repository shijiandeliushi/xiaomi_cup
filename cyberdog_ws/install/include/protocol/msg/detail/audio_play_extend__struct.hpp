// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/AudioPlayExtend.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_PLAY_EXTEND__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__AUDIO_PLAY_EXTEND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'speech'
#include "protocol/msg/detail/audio_play__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__AudioPlayExtend __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__AudioPlayExtend __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioPlayExtend_
{
  using Type = AudioPlayExtend_<ContainerAllocator>;

  explicit AudioPlayExtend_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : speech(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->module_name = "";
      this->is_online = false;
      this->text = "";
    }
  }

  explicit AudioPlayExtend_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : module_name(_alloc),
    speech(_alloc, _init),
    text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->module_name = "";
      this->is_online = false;
      this->text = "";
    }
  }

  // field types and members
  using _module_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _module_name_type module_name;
  using _is_online_type =
    bool;
  _is_online_type is_online;
  using _speech_type =
    protocol::msg::AudioPlay_<ContainerAllocator>;
  _speech_type speech;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;

  // setters for named parameter idiom
  Type & set__module_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->module_name = _arg;
    return *this;
  }
  Type & set__is_online(
    const bool & _arg)
  {
    this->is_online = _arg;
    return *this;
  }
  Type & set__speech(
    const protocol::msg::AudioPlay_<ContainerAllocator> & _arg)
  {
    this->speech = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::AudioPlayExtend_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::AudioPlayExtend_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::AudioPlayExtend_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::AudioPlayExtend_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AudioPlayExtend_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AudioPlayExtend_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AudioPlayExtend_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AudioPlayExtend_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::AudioPlayExtend_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::AudioPlayExtend_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__AudioPlayExtend
    std::shared_ptr<protocol::msg::AudioPlayExtend_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__AudioPlayExtend
    std::shared_ptr<protocol::msg::AudioPlayExtend_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioPlayExtend_ & other) const
  {
    if (this->module_name != other.module_name) {
      return false;
    }
    if (this->is_online != other.is_online) {
      return false;
    }
    if (this->speech != other.speech) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioPlayExtend_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioPlayExtend_

// alias to use template instance with default allocator
using AudioPlayExtend =
  protocol::msg::AudioPlayExtend_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_PLAY_EXTEND__STRUCT_HPP_
