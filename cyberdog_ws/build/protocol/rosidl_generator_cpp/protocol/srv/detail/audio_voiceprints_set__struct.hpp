// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/AudioVoiceprintsSet.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINTS_SET__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINTS_SET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'voice_prints'
#include "protocol/msg/detail/voice_prints__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__AudioVoiceprintsSet_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AudioVoiceprintsSet_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AudioVoiceprintsSet_Request_
{
  using Type = AudioVoiceprintsSet_Request_<ContainerAllocator>;

  explicit AudioVoiceprintsSet_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : voice_prints(_init)
  {
    (void)_init;
  }

  explicit AudioVoiceprintsSet_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : voice_prints(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _voice_prints_type =
    protocol::msg::VoicePrints_<ContainerAllocator>;
  _voice_prints_type voice_prints;

  // setters for named parameter idiom
  Type & set__voice_prints(
    const protocol::msg::VoicePrints_<ContainerAllocator> & _arg)
  {
    this->voice_prints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::AudioVoiceprintsSet_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AudioVoiceprintsSet_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AudioVoiceprintsSet_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AudioVoiceprintsSet_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioVoiceprintsSet_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioVoiceprintsSet_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioVoiceprintsSet_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioVoiceprintsSet_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AudioVoiceprintsSet_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AudioVoiceprintsSet_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AudioVoiceprintsSet_Request
    std::shared_ptr<protocol::srv::AudioVoiceprintsSet_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AudioVoiceprintsSet_Request
    std::shared_ptr<protocol::srv::AudioVoiceprintsSet_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioVoiceprintsSet_Request_ & other) const
  {
    if (this->voice_prints != other.voice_prints) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioVoiceprintsSet_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioVoiceprintsSet_Request_

// alias to use template instance with default allocator
using AudioVoiceprintsSet_Request =
  protocol::srv::AudioVoiceprintsSet_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__AudioVoiceprintsSet_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AudioVoiceprintsSet_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AudioVoiceprintsSet_Response_
{
  using Type = AudioVoiceprintsSet_Response_<ContainerAllocator>;

  explicit AudioVoiceprintsSet_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->code = 0l;
    }
  }

  explicit AudioVoiceprintsSet_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->code = 0l;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::AudioVoiceprintsSet_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AudioVoiceprintsSet_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AudioVoiceprintsSet_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AudioVoiceprintsSet_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioVoiceprintsSet_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioVoiceprintsSet_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioVoiceprintsSet_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioVoiceprintsSet_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AudioVoiceprintsSet_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AudioVoiceprintsSet_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AudioVoiceprintsSet_Response
    std::shared_ptr<protocol::srv::AudioVoiceprintsSet_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AudioVoiceprintsSet_Response
    std::shared_ptr<protocol::srv::AudioVoiceprintsSet_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioVoiceprintsSet_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioVoiceprintsSet_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioVoiceprintsSet_Response_

// alias to use template instance with default allocator
using AudioVoiceprintsSet_Response =
  protocol::srv::AudioVoiceprintsSet_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct AudioVoiceprintsSet
{
  using Request = protocol::srv::AudioVoiceprintsSet_Request;
  using Response = protocol::srv::AudioVoiceprintsSet_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_VOICEPRINTS_SET__STRUCT_HPP_
