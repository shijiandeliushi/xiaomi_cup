// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/VisualProgrammingOperate.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__VISUAL_PROGRAMMING_OPERATE__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__VISUAL_PROGRAMMING_OPERATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'form'
#include "protocol/msg/detail/visual_programming_operate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__srv__VisualProgrammingOperate_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__VisualProgrammingOperate_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VisualProgrammingOperate_Request_
{
  using Type = VisualProgrammingOperate_Request_<ContainerAllocator>;

  explicit VisualProgrammingOperate_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : form(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->json = "";
    }
  }

  explicit VisualProgrammingOperate_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : json(_alloc),
    form(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->json = "";
    }
  }

  // field types and members
  using _type_type =
    int32_t;
  _type_type type;
  using _json_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _json_type json;
  using _form_type =
    protocol::msg::VisualProgrammingOperate_<ContainerAllocator>;
  _form_type form;

  // setters for named parameter idiom
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__json(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->json = _arg;
    return *this;
  }
  Type & set__form(
    const protocol::msg::VisualProgrammingOperate_<ContainerAllocator> & _arg)
  {
    this->form = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t TYPE_JSON =
    0;
  static constexpr int32_t TYPE_FROM =
    1;

  // pointer types
  using RawPtr =
    protocol::srv::VisualProgrammingOperate_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::VisualProgrammingOperate_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::VisualProgrammingOperate_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::VisualProgrammingOperate_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::VisualProgrammingOperate_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::VisualProgrammingOperate_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::VisualProgrammingOperate_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::VisualProgrammingOperate_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::VisualProgrammingOperate_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::VisualProgrammingOperate_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__VisualProgrammingOperate_Request
    std::shared_ptr<protocol::srv::VisualProgrammingOperate_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__VisualProgrammingOperate_Request
    std::shared_ptr<protocol::srv::VisualProgrammingOperate_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisualProgrammingOperate_Request_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->json != other.json) {
      return false;
    }
    if (this->form != other.form) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisualProgrammingOperate_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisualProgrammingOperate_Request_

// alias to use template instance with default allocator
using VisualProgrammingOperate_Request =
  protocol::srv::VisualProgrammingOperate_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t VisualProgrammingOperate_Request_<ContainerAllocator>::TYPE_JSON;
template<typename ContainerAllocator>
constexpr int32_t VisualProgrammingOperate_Request_<ContainerAllocator>::TYPE_FROM;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__VisualProgrammingOperate_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__VisualProgrammingOperate_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VisualProgrammingOperate_Response_
{
  using Type = VisualProgrammingOperate_Response_<ContainerAllocator>;

  explicit VisualProgrammingOperate_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
      this->json = "";
    }
  }

  explicit VisualProgrammingOperate_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : json(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
      this->json = "";
    }
  }

  // field types and members
  using _code_type =
    int32_t;
  _code_type code;
  using _json_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _json_type json;

  // setters for named parameter idiom
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__json(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->json = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t CODE_SUCCESS =
    0;
  static constexpr int32_t CODE_CATHC =
    1;
  static constexpr int32_t CODE_FSM =
    2;
  static constexpr int32_t CODE_TASK =
    3;

  // pointer types
  using RawPtr =
    protocol::srv::VisualProgrammingOperate_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::VisualProgrammingOperate_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::VisualProgrammingOperate_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::VisualProgrammingOperate_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::VisualProgrammingOperate_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::VisualProgrammingOperate_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::VisualProgrammingOperate_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::VisualProgrammingOperate_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::VisualProgrammingOperate_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::VisualProgrammingOperate_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__VisualProgrammingOperate_Response
    std::shared_ptr<protocol::srv::VisualProgrammingOperate_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__VisualProgrammingOperate_Response
    std::shared_ptr<protocol::srv::VisualProgrammingOperate_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisualProgrammingOperate_Response_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    if (this->json != other.json) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisualProgrammingOperate_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisualProgrammingOperate_Response_

// alias to use template instance with default allocator
using VisualProgrammingOperate_Response =
  protocol::srv::VisualProgrammingOperate_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t VisualProgrammingOperate_Response_<ContainerAllocator>::CODE_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t VisualProgrammingOperate_Response_<ContainerAllocator>::CODE_CATHC;
template<typename ContainerAllocator>
constexpr int32_t VisualProgrammingOperate_Response_<ContainerAllocator>::CODE_FSM;
template<typename ContainerAllocator>
constexpr int32_t VisualProgrammingOperate_Response_<ContainerAllocator>::CODE_TASK;

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct VisualProgrammingOperate
{
  using Request = protocol::srv::VisualProgrammingOperate_Request;
  using Response = protocol::srv::VisualProgrammingOperate_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__VISUAL_PROGRAMMING_OPERATE__STRUCT_HPP_
