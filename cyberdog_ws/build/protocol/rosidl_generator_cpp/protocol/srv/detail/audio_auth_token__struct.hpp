// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/AudioAuthToken.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_AUTH_TOKEN__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_AUTH_TOKEN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__AudioAuthToken_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AudioAuthToken_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AudioAuthToken_Request_
{
  using Type = AudioAuthToken_Request_<ContainerAllocator>;

  explicit AudioAuthToken_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid = "";
      this->token_access = "";
      this->token_fresh = "";
      this->token_expirein = 0ull;
    }
  }

  explicit AudioAuthToken_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uid(_alloc),
    token_access(_alloc),
    token_fresh(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uid = "";
      this->token_access = "";
      this->token_fresh = "";
      this->token_expirein = 0ull;
    }
  }

  // field types and members
  using _uid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uid_type uid;
  using _token_access_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _token_access_type token_access;
  using _token_fresh_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _token_fresh_type token_fresh;
  using _token_expirein_type =
    uint64_t;
  _token_expirein_type token_expirein;

  // setters for named parameter idiom
  Type & set__uid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uid = _arg;
    return *this;
  }
  Type & set__token_access(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->token_access = _arg;
    return *this;
  }
  Type & set__token_fresh(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->token_fresh = _arg;
    return *this;
  }
  Type & set__token_expirein(
    const uint64_t & _arg)
  {
    this->token_expirein = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::AudioAuthToken_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AudioAuthToken_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AudioAuthToken_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AudioAuthToken_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioAuthToken_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioAuthToken_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioAuthToken_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioAuthToken_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AudioAuthToken_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AudioAuthToken_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AudioAuthToken_Request
    std::shared_ptr<protocol::srv::AudioAuthToken_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AudioAuthToken_Request
    std::shared_ptr<protocol::srv::AudioAuthToken_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioAuthToken_Request_ & other) const
  {
    if (this->uid != other.uid) {
      return false;
    }
    if (this->token_access != other.token_access) {
      return false;
    }
    if (this->token_fresh != other.token_fresh) {
      return false;
    }
    if (this->token_expirein != other.token_expirein) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioAuthToken_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioAuthToken_Request_

// alias to use template instance with default allocator
using AudioAuthToken_Request =
  protocol::srv::AudioAuthToken_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__AudioAuthToken_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AudioAuthToken_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AudioAuthToken_Response_
{
  using Type = AudioAuthToken_Response_<ContainerAllocator>;

  explicit AudioAuthToken_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->code = 0l;
    }
  }

  explicit AudioAuthToken_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    protocol::srv::AudioAuthToken_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AudioAuthToken_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AudioAuthToken_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AudioAuthToken_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioAuthToken_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioAuthToken_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioAuthToken_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioAuthToken_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AudioAuthToken_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AudioAuthToken_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AudioAuthToken_Response
    std::shared_ptr<protocol::srv::AudioAuthToken_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AudioAuthToken_Response
    std::shared_ptr<protocol::srv::AudioAuthToken_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioAuthToken_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioAuthToken_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioAuthToken_Response_

// alias to use template instance with default allocator
using AudioAuthToken_Response =
  protocol::srv::AudioAuthToken_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct AudioAuthToken
{
  using Request = protocol::srv::AudioAuthToken_Request;
  using Response = protocol::srv::AudioAuthToken_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_AUTH_TOKEN__STRUCT_HPP_
