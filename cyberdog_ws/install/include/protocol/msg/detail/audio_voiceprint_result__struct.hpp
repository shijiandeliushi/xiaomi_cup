// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/AudioVoiceprintResult.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_VOICEPRINT_RESULT__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__AUDIO_VOICEPRINT_RESULT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'voice_print'
#include "protocol/msg/detail/voice_print__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__msg__AudioVoiceprintResult __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__AudioVoiceprintResult __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioVoiceprintResult_
{
  using Type = AudioVoiceprintResult_<ContainerAllocator>;

  explicit AudioVoiceprintResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : voice_print(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  explicit AudioVoiceprintResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : voice_print(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  // field types and members
  using _code_type =
    int32_t;
  _code_type code;
  using _voice_print_type =
    protocol::msg::VoicePrint_<ContainerAllocator>;
  _voice_print_type voice_print;

  // setters for named parameter idiom
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__voice_print(
    const protocol::msg::VoicePrint_<ContainerAllocator> & _arg)
  {
    this->voice_print = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::msg::AudioVoiceprintResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::AudioVoiceprintResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::AudioVoiceprintResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::AudioVoiceprintResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AudioVoiceprintResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AudioVoiceprintResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AudioVoiceprintResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AudioVoiceprintResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::AudioVoiceprintResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::AudioVoiceprintResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__AudioVoiceprintResult
    std::shared_ptr<protocol::msg::AudioVoiceprintResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__AudioVoiceprintResult
    std::shared_ptr<protocol::msg::AudioVoiceprintResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioVoiceprintResult_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    if (this->voice_print != other.voice_print) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioVoiceprintResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioVoiceprintResult_

// alias to use template instance with default allocator
using AudioVoiceprintResult =
  protocol::msg::AudioVoiceprintResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_VOICEPRINT_RESULT__STRUCT_HPP_
