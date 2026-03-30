// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/AudioVoiceprintTrain.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_TRAIN__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_TRAIN__STRUCT_HPP_

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
# define DEPRECATED__protocol__srv__AudioVoiceprintTrain_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AudioVoiceprintTrain_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AudioVoiceprintTrain_Request_
{
  using Type = AudioVoiceprintTrain_Request_<ContainerAllocator>;

  explicit AudioVoiceprintTrain_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : voice_print(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->train_id = 0;
    }
  }

  explicit AudioVoiceprintTrain_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : voice_print(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->train_id = 0;
    }
  }

  // field types and members
  using _train_id_type =
    uint8_t;
  _train_id_type train_id;
  using _voice_print_type =
    protocol::msg::VoicePrint_<ContainerAllocator>;
  _voice_print_type voice_print;

  // setters for named parameter idiom
  Type & set__train_id(
    const uint8_t & _arg)
  {
    this->train_id = _arg;
    return *this;
  }
  Type & set__voice_print(
    const protocol::msg::VoicePrint_<ContainerAllocator> & _arg)
  {
    this->voice_print = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TID_START =
    1u;
  static constexpr uint8_t TID_CANCEL =
    2u;

  // pointer types
  using RawPtr =
    protocol::srv::AudioVoiceprintTrain_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AudioVoiceprintTrain_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AudioVoiceprintTrain_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AudioVoiceprintTrain_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioVoiceprintTrain_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioVoiceprintTrain_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioVoiceprintTrain_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioVoiceprintTrain_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AudioVoiceprintTrain_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AudioVoiceprintTrain_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AudioVoiceprintTrain_Request
    std::shared_ptr<protocol::srv::AudioVoiceprintTrain_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AudioVoiceprintTrain_Request
    std::shared_ptr<protocol::srv::AudioVoiceprintTrain_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioVoiceprintTrain_Request_ & other) const
  {
    if (this->train_id != other.train_id) {
      return false;
    }
    if (this->voice_print != other.voice_print) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioVoiceprintTrain_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioVoiceprintTrain_Request_

// alias to use template instance with default allocator
using AudioVoiceprintTrain_Request =
  protocol::srv::AudioVoiceprintTrain_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AudioVoiceprintTrain_Request_<ContainerAllocator>::TID_START;
template<typename ContainerAllocator>
constexpr uint8_t AudioVoiceprintTrain_Request_<ContainerAllocator>::TID_CANCEL;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__AudioVoiceprintTrain_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AudioVoiceprintTrain_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AudioVoiceprintTrain_Response_
{
  using Type = AudioVoiceprintTrain_Response_<ContainerAllocator>;

  explicit AudioVoiceprintTrain_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  explicit AudioVoiceprintTrain_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
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

  // setters for named parameter idiom
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::AudioVoiceprintTrain_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AudioVoiceprintTrain_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AudioVoiceprintTrain_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AudioVoiceprintTrain_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioVoiceprintTrain_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioVoiceprintTrain_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioVoiceprintTrain_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioVoiceprintTrain_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AudioVoiceprintTrain_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AudioVoiceprintTrain_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AudioVoiceprintTrain_Response
    std::shared_ptr<protocol::srv::AudioVoiceprintTrain_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AudioVoiceprintTrain_Response
    std::shared_ptr<protocol::srv::AudioVoiceprintTrain_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioVoiceprintTrain_Response_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioVoiceprintTrain_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioVoiceprintTrain_Response_

// alias to use template instance with default allocator
using AudioVoiceprintTrain_Response =
  protocol::srv::AudioVoiceprintTrain_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct AudioVoiceprintTrain
{
  using Request = protocol::srv::AudioVoiceprintTrain_Request;
  using Response = protocol::srv::AudioVoiceprintTrain_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINT_TRAIN__STRUCT_HPP_
