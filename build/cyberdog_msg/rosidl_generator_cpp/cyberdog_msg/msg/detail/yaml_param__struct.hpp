// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cyberdog_msg:msg/YamlParam.idl
// generated code does not contain a copyright notice

#ifndef CYBERDOG_MSG__MSG__DETAIL__YAML_PARAM__STRUCT_HPP_
#define CYBERDOG_MSG__MSG__DETAIL__YAML_PARAM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cyberdog_msg__msg__YamlParam __attribute__((deprecated))
#else
# define DEPRECATED__cyberdog_msg__msg__YamlParam __declspec(deprecated)
#endif

namespace cyberdog_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YamlParam_
{
  using Type = YamlParam_<ContainerAllocator>;

  explicit YamlParam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->kind = 0ull;
      this->s64_value = 0ll;
      this->double_value = 0.0;
      std::fill<typename std::array<double, 12>::iterator, double>(this->vecxd_value.begin(), this->vecxd_value.end(), 0.0);
      this->is_user = 0ll;
    }
  }

  explicit YamlParam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    vecxd_value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->kind = 0ull;
      this->s64_value = 0ll;
      this->double_value = 0.0;
      std::fill<typename std::array<double, 12>::iterator, double>(this->vecxd_value.begin(), this->vecxd_value.end(), 0.0);
      this->is_user = 0ll;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _kind_type =
    uint64_t;
  _kind_type kind;
  using _s64_value_type =
    int64_t;
  _s64_value_type s64_value;
  using _double_value_type =
    double;
  _double_value_type double_value;
  using _vecxd_value_type =
    std::array<double, 12>;
  _vecxd_value_type vecxd_value;
  using _is_user_type =
    int64_t;
  _is_user_type is_user;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__kind(
    const uint64_t & _arg)
  {
    this->kind = _arg;
    return *this;
  }
  Type & set__s64_value(
    const int64_t & _arg)
  {
    this->s64_value = _arg;
    return *this;
  }
  Type & set__double_value(
    const double & _arg)
  {
    this->double_value = _arg;
    return *this;
  }
  Type & set__vecxd_value(
    const std::array<double, 12> & _arg)
  {
    this->vecxd_value = _arg;
    return *this;
  }
  Type & set__is_user(
    const int64_t & _arg)
  {
    this->is_user = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint64_t DOUBLE =
    1u;
  static constexpr uint64_t S64 =
    2u;
  static constexpr uint64_t VEC_X_DOUBLE =
    3u;
  static constexpr uint64_t MAT_X_DOUBLE =
    4u;

  // pointer types
  using RawPtr =
    cyberdog_msg::msg::YamlParam_<ContainerAllocator> *;
  using ConstRawPtr =
    const cyberdog_msg::msg::YamlParam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cyberdog_msg::msg::YamlParam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cyberdog_msg::msg::YamlParam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cyberdog_msg::msg::YamlParam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cyberdog_msg::msg::YamlParam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cyberdog_msg::msg::YamlParam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cyberdog_msg::msg::YamlParam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cyberdog_msg::msg::YamlParam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cyberdog_msg::msg::YamlParam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cyberdog_msg__msg__YamlParam
    std::shared_ptr<cyberdog_msg::msg::YamlParam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cyberdog_msg__msg__YamlParam
    std::shared_ptr<cyberdog_msg::msg::YamlParam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YamlParam_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->kind != other.kind) {
      return false;
    }
    if (this->s64_value != other.s64_value) {
      return false;
    }
    if (this->double_value != other.double_value) {
      return false;
    }
    if (this->vecxd_value != other.vecxd_value) {
      return false;
    }
    if (this->is_user != other.is_user) {
      return false;
    }
    return true;
  }
  bool operator!=(const YamlParam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YamlParam_

// alias to use template instance with default allocator
using YamlParam =
  cyberdog_msg::msg::YamlParam_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint64_t YamlParam_<ContainerAllocator>::DOUBLE;
template<typename ContainerAllocator>
constexpr uint64_t YamlParam_<ContainerAllocator>::S64;
template<typename ContainerAllocator>
constexpr uint64_t YamlParam_<ContainerAllocator>::VEC_X_DOUBLE;
template<typename ContainerAllocator>
constexpr uint64_t YamlParam_<ContainerAllocator>::MAT_X_DOUBLE;

}  // namespace msg

}  // namespace cyberdog_msg

#endif  // CYBERDOG_MSG__MSG__DETAIL__YAML_PARAM__STRUCT_HPP_
