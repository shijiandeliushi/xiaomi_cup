// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/AudioExecute.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_EXECUTE__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_EXECUTE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'status'
#include "protocol/msg/detail/audio_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__AudioExecute_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AudioExecute_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AudioExecute_Request_
{
  using Type = AudioExecute_Request_<ContainerAllocator>;

  explicit AudioExecute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->client = "";
    }
  }

  explicit AudioExecute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : client(_alloc),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->client = "";
    }
  }

  // field types and members
  using _client_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _client_type client;
  using _status_type =
    protocol::msg::AudioStatus_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__client(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->client = _arg;
    return *this;
  }
  Type & set__status(
    const protocol::msg::AudioStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::AudioExecute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AudioExecute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AudioExecute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AudioExecute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioExecute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioExecute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioExecute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioExecute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AudioExecute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AudioExecute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AudioExecute_Request
    std::shared_ptr<protocol::srv::AudioExecute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AudioExecute_Request
    std::shared_ptr<protocol::srv::AudioExecute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioExecute_Request_ & other) const
  {
    if (this->client != other.client) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioExecute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioExecute_Request_

// alias to use template instance with default allocator
using AudioExecute_Request =
  protocol::srv::AudioExecute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__AudioExecute_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AudioExecute_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AudioExecute_Response_
{
  using Type = AudioExecute_Response_<ContainerAllocator>;

  explicit AudioExecute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->code = 0l;
    }
  }

  explicit AudioExecute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    protocol::srv::AudioExecute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AudioExecute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AudioExecute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AudioExecute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioExecute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioExecute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioExecute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioExecute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AudioExecute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AudioExecute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AudioExecute_Response
    std::shared_ptr<protocol::srv::AudioExecute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AudioExecute_Response
    std::shared_ptr<protocol::srv::AudioExecute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioExecute_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioExecute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioExecute_Response_

// alias to use template instance with default allocator
using AudioExecute_Response =
  protocol::srv::AudioExecute_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct AudioExecute
{
  using Request = protocol::srv::AudioExecute_Request;
  using Response = protocol::srv::AudioExecute_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_EXECUTE__STRUCT_HPP_
