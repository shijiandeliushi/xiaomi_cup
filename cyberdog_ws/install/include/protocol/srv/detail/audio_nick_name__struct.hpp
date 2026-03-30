// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/AudioNickName.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__AUDIO_NICK_NAME__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__AUDIO_NICK_NAME__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__AudioNickName_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AudioNickName_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AudioNickName_Request_
{
  using Type = AudioNickName_Request_<ContainerAllocator>;

  explicit AudioNickName_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nick_name = "";
      this->wake_name = "";
    }
  }

  explicit AudioNickName_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nick_name(_alloc),
    wake_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nick_name = "";
      this->wake_name = "";
    }
  }

  // field types and members
  using _nick_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _nick_name_type nick_name;
  using _wake_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _wake_name_type wake_name;

  // setters for named parameter idiom
  Type & set__nick_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->nick_name = _arg;
    return *this;
  }
  Type & set__wake_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->wake_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::srv::AudioNickName_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AudioNickName_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AudioNickName_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AudioNickName_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioNickName_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioNickName_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioNickName_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioNickName_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AudioNickName_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AudioNickName_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AudioNickName_Request
    std::shared_ptr<protocol::srv::AudioNickName_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AudioNickName_Request
    std::shared_ptr<protocol::srv::AudioNickName_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioNickName_Request_ & other) const
  {
    if (this->nick_name != other.nick_name) {
      return false;
    }
    if (this->wake_name != other.wake_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioNickName_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioNickName_Request_

// alias to use template instance with default allocator
using AudioNickName_Request =
  protocol::srv::AudioNickName_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__AudioNickName_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__AudioNickName_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AudioNickName_Response_
{
  using Type = AudioNickName_Response_<ContainerAllocator>;

  explicit AudioNickName_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->code = 0l;
    }
  }

  explicit AudioNickName_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->code = 0l;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _code_type =
    int32_t;
  _code_type code;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
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
    protocol::srv::AudioNickName_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::AudioNickName_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::AudioNickName_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::AudioNickName_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioNickName_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioNickName_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::AudioNickName_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::AudioNickName_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::AudioNickName_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::AudioNickName_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__AudioNickName_Response
    std::shared_ptr<protocol::srv::AudioNickName_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__AudioNickName_Response
    std::shared_ptr<protocol::srv::AudioNickName_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioNickName_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioNickName_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioNickName_Response_

// alias to use template instance with default allocator
using AudioNickName_Response =
  protocol::srv::AudioNickName_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct AudioNickName
{
  using Request = protocol::srv::AudioNickName_Request;
  using Response = protocol::srv::AudioNickName_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__AUDIO_NICK_NAME__STRUCT_HPP_
