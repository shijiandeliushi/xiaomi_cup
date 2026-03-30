// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:srv/LedExecute.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__LED_EXECUTE__STRUCT_HPP_
#define PROTOCOL__SRV__DETAIL__LED_EXECUTE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__srv__LedExecute_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__LedExecute_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedExecute_Request_
{
  using Type = LedExecute_Request_<ContainerAllocator>;

  explicit LedExecute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->occupation = false;
      this->client = "";
      this->target = 0;
      this->mode = 0;
      this->effect = 0;
      this->r_value = 0;
      this->g_value = 0;
      this->b_value = 0;
    }
  }

  explicit LedExecute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : client(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->occupation = false;
      this->client = "";
      this->target = 0;
      this->mode = 0;
      this->effect = 0;
      this->r_value = 0;
      this->g_value = 0;
      this->b_value = 0;
    }
  }

  // field types and members
  using _occupation_type =
    bool;
  _occupation_type occupation;
  using _client_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _client_type client;
  using _target_type =
    uint8_t;
  _target_type target;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _effect_type =
    uint8_t;
  _effect_type effect;
  using _r_value_type =
    uint8_t;
  _r_value_type r_value;
  using _g_value_type =
    uint8_t;
  _g_value_type g_value;
  using _b_value_type =
    uint8_t;
  _b_value_type b_value;

  // setters for named parameter idiom
  Type & set__occupation(
    const bool & _arg)
  {
    this->occupation = _arg;
    return *this;
  }
  Type & set__client(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->client = _arg;
    return *this;
  }
  Type & set__target(
    const uint8_t & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__effect(
    const uint8_t & _arg)
  {
    this->effect = _arg;
    return *this;
  }
  Type & set__r_value(
    const uint8_t & _arg)
  {
    this->r_value = _arg;
    return *this;
  }
  Type & set__g_value(
    const uint8_t & _arg)
  {
    this->g_value = _arg;
    return *this;
  }
  Type & set__b_value(
    const uint8_t & _arg)
  {
    this->b_value = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LOWPOWER;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> BMS;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONNECTOR;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> VP;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TRACKING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SYSTEM;
  static constexpr uint8_t HEAD_LED =
    1u;
  static constexpr uint8_t TAIL_LED =
    2u;
  static constexpr uint8_t MINI_LED =
    3u;
  static constexpr uint8_t SYSTEM_PREDEFINED =
    1u;
  static constexpr uint8_t USER_DEFINED =
    2u;
  static constexpr uint8_t RGB_ON =
    1u;
  static constexpr uint8_t BLINK =
    2u;
  static constexpr uint8_t BLINK_FAST =
    3u;
  static constexpr uint8_t BREATH =
    4u;
  static constexpr uint8_t BREATH_FAST =
    5u;
  static constexpr uint8_t ONE_BY_ONE =
    6u;
  static constexpr uint8_t ONE_BY_ONE_FAST =
    7u;
  static constexpr uint8_t BACK_AND_FORTH =
    8u;
  static constexpr uint8_t TRAILING_RACE =
    9u;
  static constexpr uint8_t RGB_OFF =
    160u;
  static constexpr uint8_t RED_ON =
    161u;
  static constexpr uint8_t RED_BLINK =
    162u;
  static constexpr uint8_t RED_BLINK_FAST =
    163u;
  static constexpr uint8_t RED_BREATH =
    164u;
  static constexpr uint8_t RED_BREATH_FAST =
    165u;
  static constexpr uint8_t RED_ONE_BY_ONE =
    166u;
  static constexpr uint8_t RED_ONE_BY_ONE_FAST =
    167u;
  static constexpr uint8_t BLUE_ON =
    168u;
  static constexpr uint8_t BLUE_BLINK =
    169u;
  static constexpr uint8_t BLUE_BLINK_FAST =
    170u;
  static constexpr uint8_t BLUE_BREATH =
    171u;
  static constexpr uint8_t BLUE_BREATH_FAST =
    172u;
  static constexpr uint8_t BLUE_ONE_BY_ONE =
    173u;
  static constexpr uint8_t BLUE_ONE_BY_ONE_FAST =
    174u;
  static constexpr uint8_t YELLOW_ON =
    175u;
  static constexpr uint8_t YELLOW_BLINK =
    176u;
  static constexpr uint8_t YELLOW_BLINK_FAST =
    177u;
  static constexpr uint8_t YELLOW_BREATH =
    178u;
  static constexpr uint8_t YELLOW_BREATH_FAST =
    179u;
  static constexpr uint8_t YELLOW_ONE_BY_ONE =
    180u;
  static constexpr uint8_t YELLOW_ONE_BY_ONE_FAST =
    181u;
  static constexpr uint8_t CIRCULAR_BREATH =
    48u;
  static constexpr uint8_t CIRCULAR_RING =
    49u;
  static constexpr uint8_t MINI_OFF =
    50u;
  static constexpr uint8_t RECTANGLE_COLOR =
    51u;
  static constexpr uint8_t CENTRE_COLOR =
    52u;
  static constexpr uint8_t THREE_CIRCULAR =
    53u;
  static constexpr uint8_t COLOR_ONE_BY_ONE =
    54u;

  // pointer types
  using RawPtr =
    protocol::srv::LedExecute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::LedExecute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::LedExecute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::LedExecute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::LedExecute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::LedExecute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::LedExecute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::LedExecute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::LedExecute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::LedExecute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__LedExecute_Request
    std::shared_ptr<protocol::srv::LedExecute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__LedExecute_Request
    std::shared_ptr<protocol::srv::LedExecute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedExecute_Request_ & other) const
  {
    if (this->occupation != other.occupation) {
      return false;
    }
    if (this->client != other.client) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->effect != other.effect) {
      return false;
    }
    if (this->r_value != other.r_value) {
      return false;
    }
    if (this->g_value != other.g_value) {
      return false;
    }
    if (this->b_value != other.b_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedExecute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedExecute_Request_

// alias to use template instance with default allocator
using LedExecute_Request =
  protocol::srv::LedExecute_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
LedExecute_Request_<ContainerAllocator>::LOWPOWER = "lowpower";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
LedExecute_Request_<ContainerAllocator>::BMS = "bms";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
LedExecute_Request_<ContainerAllocator>::CONNECTOR = "connector";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
LedExecute_Request_<ContainerAllocator>::VP = "vp";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
LedExecute_Request_<ContainerAllocator>::TRACKING = "tracking";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
LedExecute_Request_<ContainerAllocator>::SYSTEM = "system";
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::HEAD_LED;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::TAIL_LED;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::MINI_LED;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::SYSTEM_PREDEFINED;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::USER_DEFINED;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::RGB_ON;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::BLINK;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::BLINK_FAST;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::BREATH;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::BREATH_FAST;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::ONE_BY_ONE;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::ONE_BY_ONE_FAST;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::BACK_AND_FORTH;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::TRAILING_RACE;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::RGB_OFF;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::RED_ON;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::RED_BLINK;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::RED_BLINK_FAST;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::RED_BREATH;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::RED_BREATH_FAST;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::RED_ONE_BY_ONE;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::RED_ONE_BY_ONE_FAST;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::BLUE_ON;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::BLUE_BLINK;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::BLUE_BLINK_FAST;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::BLUE_BREATH;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::BLUE_BREATH_FAST;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::BLUE_ONE_BY_ONE;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::BLUE_ONE_BY_ONE_FAST;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::YELLOW_ON;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::YELLOW_BLINK;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::YELLOW_BLINK_FAST;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::YELLOW_BREATH;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::YELLOW_BREATH_FAST;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::YELLOW_ONE_BY_ONE;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::YELLOW_ONE_BY_ONE_FAST;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::CIRCULAR_BREATH;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::CIRCULAR_RING;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::MINI_OFF;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::RECTANGLE_COLOR;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::CENTRE_COLOR;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::THREE_CIRCULAR;
template<typename ContainerAllocator>
constexpr uint8_t LedExecute_Request_<ContainerAllocator>::COLOR_ONE_BY_ONE;

}  // namespace srv

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__srv__LedExecute_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__srv__LedExecute_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LedExecute_Response_
{
  using Type = LedExecute_Response_<ContainerAllocator>;

  explicit LedExecute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  explicit LedExecute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int32_t SUCCEED =
    0;
  static constexpr int32_t TIMEOUT =
    1107;
  static constexpr int32_t TARGET_ERROR =
    1121;
  static constexpr int32_t PRIORITY_ERROR =
    1122;
  static constexpr int32_t MODE_ERROR =
    1123;
  static constexpr int32_t EFFECT_ERROR =
    1124;
  static constexpr int32_t LOW_PRIORITY =
    1125;

  // pointer types
  using RawPtr =
    protocol::srv::LedExecute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::srv::LedExecute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::srv::LedExecute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::srv::LedExecute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::srv::LedExecute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::LedExecute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::srv::LedExecute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::srv::LedExecute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::srv::LedExecute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::srv::LedExecute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__srv__LedExecute_Response
    std::shared_ptr<protocol::srv::LedExecute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__srv__LedExecute_Response
    std::shared_ptr<protocol::srv::LedExecute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedExecute_Response_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedExecute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedExecute_Response_

// alias to use template instance with default allocator
using LedExecute_Response =
  protocol::srv::LedExecute_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t LedExecute_Response_<ContainerAllocator>::SUCCEED;
template<typename ContainerAllocator>
constexpr int32_t LedExecute_Response_<ContainerAllocator>::TIMEOUT;
template<typename ContainerAllocator>
constexpr int32_t LedExecute_Response_<ContainerAllocator>::TARGET_ERROR;
template<typename ContainerAllocator>
constexpr int32_t LedExecute_Response_<ContainerAllocator>::PRIORITY_ERROR;
template<typename ContainerAllocator>
constexpr int32_t LedExecute_Response_<ContainerAllocator>::MODE_ERROR;
template<typename ContainerAllocator>
constexpr int32_t LedExecute_Response_<ContainerAllocator>::EFFECT_ERROR;
template<typename ContainerAllocator>
constexpr int32_t LedExecute_Response_<ContainerAllocator>::LOW_PRIORITY;

}  // namespace srv

}  // namespace protocol

namespace protocol
{

namespace srv
{

struct LedExecute
{
  using Request = protocol::srv::LedExecute_Request;
  using Response = protocol::srv::LedExecute_Response;
};

}  // namespace srv

}  // namespace protocol

#endif  // PROTOCOL__SRV__DETAIL__LED_EXECUTE__STRUCT_HPP_
