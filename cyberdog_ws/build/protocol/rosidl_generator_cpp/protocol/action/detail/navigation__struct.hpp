// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:action/Navigation.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__ACTION__DETAIL__NAVIGATION__STRUCT_HPP_
#define PROTOCOL__ACTION__DETAIL__NAVIGATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'tracking_roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__Navigation_Goal __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__Navigation_Goal __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigation_Goal_
{
  using Type = Navigation_Goal_<ContainerAllocator>;

  explicit Navigation_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tracking_roi(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nav_type = 0;
      this->label_id = "";
      this->map_name = "";
      this->relative_pos = 0;
      this->keep_distance = 0.0f;
      this->outdoor = false;
      this->object_tracking = false;
    }
  }

  explicit Navigation_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label_id(_alloc),
    map_name(_alloc),
    tracking_roi(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nav_type = 0;
      this->label_id = "";
      this->map_name = "";
      this->relative_pos = 0;
      this->keep_distance = 0.0f;
      this->outdoor = false;
      this->object_tracking = false;
    }
  }

  // field types and members
  using _nav_type_type =
    uint8_t;
  _nav_type_type nav_type;
  using _poses_type =
    std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>>;
  _poses_type poses;
  using _label_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_id_type label_id;
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _tracking_roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _tracking_roi_type tracking_roi;
  using _relative_pos_type =
    uint8_t;
  _relative_pos_type relative_pos;
  using _keep_distance_type =
    float;
  _keep_distance_type keep_distance;
  using _outdoor_type =
    bool;
  _outdoor_type outdoor;
  using _object_tracking_type =
    bool;
  _object_tracking_type object_tracking;

  // setters for named parameter idiom
  Type & set__nav_type(
    const uint8_t & _arg)
  {
    this->nav_type = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__label_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label_id = _arg;
    return *this;
  }
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__tracking_roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->tracking_roi = _arg;
    return *this;
  }
  Type & set__relative_pos(
    const uint8_t & _arg)
  {
    this->relative_pos = _arg;
    return *this;
  }
  Type & set__keep_distance(
    const float & _arg)
  {
    this->keep_distance = _arg;
    return *this;
  }
  Type & set__outdoor(
    const bool & _arg)
  {
    this->outdoor = _arg;
    return *this;
  }
  Type & set__object_tracking(
    const bool & _arg)
  {
    this->object_tracking = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NAVIGATION_TYPE_UNKNWON =
    0u;
  static constexpr uint8_t NAVIGATION_TYPE_START_AB =
    1u;
  static constexpr uint8_t NAVIGATION_TYPE_STOP_AB =
    2u;
  static constexpr uint8_t NAVIGATION_TYPE_START_FOLLOW =
    3u;
  static constexpr uint8_t NAVIGATION_TYPE_STOP_FOLLOW =
    4u;
  static constexpr uint8_t NAVIGATION_TYPE_START_MAPPING =
    5u;
  static constexpr uint8_t NAVIGATION_TYPE_STOP_MAPPING =
    6u;
  static constexpr uint8_t NAVIGATION_TYPE_START_LOCALIZATION =
    7u;
  static constexpr uint8_t NAVIGATION_TYPE_STOP_LOCALIZATION =
    8u;
  static constexpr uint8_t NAVIGATION_TYPE_START_AUTO_DOCKING =
    9u;
  static constexpr uint8_t NAVIGATION_TYPE_STOP_AUTO_DOCKING =
    10u;
  static constexpr uint8_t NAVIGATION_TYPE_START_UWB_TRACKING =
    11u;
  static constexpr uint8_t NAVIGATION_TYPE_STOP_UWB_TRACKING =
    12u;
  static constexpr uint8_t NAVIGATION_TYPE_START_HUMAN_TRACKING =
    13u;
  static constexpr uint8_t NAVIGATION_TYPE_STOP_HUMAN_TRACKING =
    14u;
  static constexpr uint8_t NAVIGATION_GOAL_TYPE_AB =
    101u;
  static constexpr uint8_t NAVIGATION_GOAL_TYPE_FOLLOW =
    102u;
  static constexpr uint8_t TRACING_AUTO =
    200u;
  static constexpr uint8_t TRACING_BEHIND =
    201u;
  static constexpr uint8_t TRACING_LEFT =
    202u;
  static constexpr uint8_t TRACING_RIGHT =
    203u;

  // pointer types
  using RawPtr =
    protocol::action::Navigation_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::Navigation_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::Navigation_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::Navigation_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::Navigation_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::Navigation_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__Navigation_Goal
    std::shared_ptr<protocol::action::Navigation_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__Navigation_Goal
    std::shared_ptr<protocol::action::Navigation_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigation_Goal_ & other) const
  {
    if (this->nav_type != other.nav_type) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    if (this->label_id != other.label_id) {
      return false;
    }
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->tracking_roi != other.tracking_roi) {
      return false;
    }
    if (this->relative_pos != other.relative_pos) {
      return false;
    }
    if (this->keep_distance != other.keep_distance) {
      return false;
    }
    if (this->outdoor != other.outdoor) {
      return false;
    }
    if (this->object_tracking != other.object_tracking) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigation_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigation_Goal_

// alias to use template instance with default allocator
using Navigation_Goal =
  protocol::action::Navigation_Goal_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_UNKNWON;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_START_AB;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_STOP_AB;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_START_FOLLOW;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_STOP_FOLLOW;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_START_MAPPING;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_STOP_MAPPING;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_START_LOCALIZATION;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_STOP_LOCALIZATION;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_START_AUTO_DOCKING;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_STOP_AUTO_DOCKING;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_START_UWB_TRACKING;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_STOP_UWB_TRACKING;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_START_HUMAN_TRACKING;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_TYPE_STOP_HUMAN_TRACKING;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_GOAL_TYPE_AB;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::NAVIGATION_GOAL_TYPE_FOLLOW;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::TRACING_AUTO;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::TRACING_BEHIND;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::TRACING_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Goal_<ContainerAllocator>::TRACING_RIGHT;

}  // namespace action

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__action__Navigation_Result __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__Navigation_Result __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigation_Result_
{
  using Type = Navigation_Result_<ContainerAllocator>;

  explicit Navigation_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit Navigation_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _result_type =
    uint8_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NAVIGATION_RESULT_TYPE_SUCCESS =
    0u;
  static constexpr uint8_t NAVIGATION_RESULT_TYPE_ACCEPT =
    1u;
  static constexpr uint8_t NAVIGATION_RESULT_TYPE_UNAVALIBLE =
    2u;
  static constexpr uint8_t NAVIGATION_RESULT_TYPE_FAILED =
    3u;
  static constexpr uint8_t NAVIGATION_RESULT_TYPE_REJECT =
    4u;
  static constexpr uint8_t NAVIGATION_RESULT_TYPE_CANCEL =
    5u;

  // pointer types
  using RawPtr =
    protocol::action::Navigation_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::Navigation_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::Navigation_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::Navigation_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::Navigation_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::Navigation_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__Navigation_Result
    std::shared_ptr<protocol::action::Navigation_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__Navigation_Result
    std::shared_ptr<protocol::action::Navigation_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigation_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigation_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigation_Result_

// alias to use template instance with default allocator
using Navigation_Result =
  protocol::action::Navigation_Result_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Result_<ContainerAllocator>::NAVIGATION_RESULT_TYPE_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Result_<ContainerAllocator>::NAVIGATION_RESULT_TYPE_ACCEPT;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Result_<ContainerAllocator>::NAVIGATION_RESULT_TYPE_UNAVALIBLE;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Result_<ContainerAllocator>::NAVIGATION_RESULT_TYPE_FAILED;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Result_<ContainerAllocator>::NAVIGATION_RESULT_TYPE_REJECT;
template<typename ContainerAllocator>
constexpr uint8_t Navigation_Result_<ContainerAllocator>::NAVIGATION_RESULT_TYPE_CANCEL;

}  // namespace action

}  // namespace protocol


#ifndef _WIN32
# define DEPRECATED__protocol__action__Navigation_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__Navigation_Feedback __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigation_Feedback_
{
  using Type = Navigation_Feedback_<ContainerAllocator>;

  explicit Navigation_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback_code = 0l;
      this->feedback_msg = "";
    }
  }

  explicit Navigation_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback_code = 0l;
      this->feedback_msg = "";
    }
  }

  // field types and members
  using _feedback_code_type =
    int32_t;
  _feedback_code_type feedback_code;
  using _feedback_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_msg_type feedback_msg;

  // setters for named parameter idiom
  Type & set__feedback_code(
    const int32_t & _arg)
  {
    this->feedback_code = _arg;
    return *this;
  }
  Type & set__feedback_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback_msg = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t NAVIGATION_FEEDBACK_RELOCING_SUCCESS =
    0;
  static constexpr int32_t NAVIGATION_FEEDBACK_RELOCING_RETRYING =
    100;
  static constexpr int32_t NAVIGATION_FEEDBACK_RELOCING_FAILED =
    200;
  static constexpr int32_t NAVIGATION_FEEDBACK_NAVIGATING_AB =
    1;
  static constexpr int32_t NAVIGATION_FEEDBACK_NAVIGATING_AB_SUCCESS =
    2;
  static constexpr int32_t NAVIGATION_FEEDBACK_NAVIGATING_AB_FAILURE =
    3;
  static constexpr int32_t NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_SUCCESS =
    4;
  static constexpr int32_t NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_FAILURE =
    5;
  static constexpr int32_t NAVIGATION_FEEDBACK_NAVIGATING_AB_RUNNING =
    20;
  static constexpr int32_t NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_SUCCESS =
    6;
  static constexpr int32_t NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_FAILURE =
    7;
  static constexpr int32_t NAVIGATION_FEEDBACK_SLAM_RELOCATION_SUCCESS =
    8;
  static constexpr int32_t NAVIGATION_FEEDBACK_SLAM_RELOCATION_FAILURE =
    9;
  static constexpr int32_t NAVIGATION_FEEDBACK_BASE_TRACKING_NOEXCEPTION =
    10;
  static constexpr int32_t NAVIGATION_FEEDBACK_BASE_TRACKING_DETECOTOREXCEPTION =
    11;
  static constexpr int32_t NAVIGATION_FEEDBACK_BASE_TRACKING_TFEXCEPTION =
    12;
  static constexpr int32_t NAVIGATION_FEEDBACK_BASE_TRACKING_PLANNNEREXCEPTION =
    13;
  static constexpr int32_t NAVIGATION_FEEDBACK_BASE_TRACKING_CONTROLLEREXCEPTION =
    14;
  static constexpr int32_t NAVIGATION_FEEDBACK_BASE_TRACKING_EMPTY_TARGET =
    15;
  static constexpr int32_t NAVIGATION_FEEDBACK_BASE_TRACKING_STAIRJUMPING =
    16;
  static constexpr int32_t NAVIGATION_FEEDBACK_BASE_TRACKING_AUTOTRACKING =
    17;
  static constexpr int32_t NAVIGATION_FEEDBACK_BASE_TRACKING_BEHAVIORABNORM =
    18;
  static constexpr int32_t TASK_PREPARATION_EXECUTING =
    1000;
  static constexpr int32_t TASK_PREPARATION_SUCCESS =
    1001;
  static constexpr int32_t TASK_PREPARATION_FAILED =
    1002;
  static constexpr int32_t NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING =
    500;
  static constexpr int32_t NAVIGATION_FEEDBACK_VISION_TRACKING_READY =
    501;
  static constexpr int32_t NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED =
    502;
  static constexpr int32_t NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_FOLLOWING =
    503;
  static constexpr int32_t NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_DISAPPEAR =
    504;
  static constexpr int32_t NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_LOSE =
    505;
  static constexpr int32_t NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING_FAILED =
    506;
  static constexpr int32_t NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED_FAILED =
    507;
  static constexpr int32_t NAVIGATION_FEEDBACK_VISION_TRACKING_RESET_FAILED =
    508;
  static constexpr int32_t NAVIGATION_FEEDBACK_VISION_TRACKING_TARGET_EMPTY =
    509;

  // pointer types
  using RawPtr =
    protocol::action::Navigation_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::Navigation_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::Navigation_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::Navigation_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::Navigation_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::Navigation_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__Navigation_Feedback
    std::shared_ptr<protocol::action::Navigation_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__Navigation_Feedback
    std::shared_ptr<protocol::action::Navigation_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigation_Feedback_ & other) const
  {
    if (this->feedback_code != other.feedback_code) {
      return false;
    }
    if (this->feedback_msg != other.feedback_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigation_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigation_Feedback_

// alias to use template instance with default allocator
using Navigation_Feedback =
  protocol::action::Navigation_Feedback_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_RELOCING_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_RELOCING_RETRYING;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_RELOCING_FAILED;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_NAVIGATING_AB;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_NAVIGATING_AB_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_NAVIGATING_AB_FAILURE;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_NAVIGATING_AB_PATH_PLAN_FAILURE;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_NAVIGATING_AB_RUNNING;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_SLAM_BUILD_MAPPING_FAILURE;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_SLAM_RELOCATION_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_SLAM_RELOCATION_FAILURE;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_BASE_TRACKING_NOEXCEPTION;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_BASE_TRACKING_DETECOTOREXCEPTION;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_BASE_TRACKING_TFEXCEPTION;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_BASE_TRACKING_PLANNNEREXCEPTION;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_BASE_TRACKING_CONTROLLEREXCEPTION;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_BASE_TRACKING_EMPTY_TARGET;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_BASE_TRACKING_STAIRJUMPING;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_BASE_TRACKING_AUTOTRACKING;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_BASE_TRACKING_BEHAVIORABNORM;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::TASK_PREPARATION_EXECUTING;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::TASK_PREPARATION_SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::TASK_PREPARATION_FAILED;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_VISION_TRACKING_READY;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_FOLLOWING;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_DISAPPEAR;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_LOSE;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_VISION_TRACKING_STARTING_FAILED;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_VISION_TRACKING_OBJECT_SELECTED_FAILED;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_VISION_TRACKING_RESET_FAILED;
template<typename ContainerAllocator>
constexpr int32_t Navigation_Feedback_<ContainerAllocator>::NAVIGATION_FEEDBACK_VISION_TRACKING_TARGET_EMPTY;

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "protocol/action/detail/navigation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__Navigation_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__Navigation_SendGoal_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigation_SendGoal_Request_
{
  using Type = Navigation_SendGoal_Request_<ContainerAllocator>;

  explicit Navigation_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Navigation_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    protocol::action::Navigation_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const protocol::action::Navigation_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::Navigation_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::Navigation_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::Navigation_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::Navigation_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::Navigation_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::Navigation_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__Navigation_SendGoal_Request
    std::shared_ptr<protocol::action::Navigation_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__Navigation_SendGoal_Request
    std::shared_ptr<protocol::action::Navigation_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigation_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigation_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigation_SendGoal_Request_

// alias to use template instance with default allocator
using Navigation_SendGoal_Request =
  protocol::action::Navigation_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__Navigation_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__Navigation_SendGoal_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigation_SendGoal_Response_
{
  using Type = Navigation_SendGoal_Response_<ContainerAllocator>;

  explicit Navigation_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Navigation_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::Navigation_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::Navigation_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::Navigation_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::Navigation_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::Navigation_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::Navigation_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__Navigation_SendGoal_Response
    std::shared_ptr<protocol::action::Navigation_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__Navigation_SendGoal_Response
    std::shared_ptr<protocol::action::Navigation_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigation_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigation_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigation_SendGoal_Response_

// alias to use template instance with default allocator
using Navigation_SendGoal_Response =
  protocol::action::Navigation_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol

namespace protocol
{

namespace action
{

struct Navigation_SendGoal
{
  using Request = protocol::action::Navigation_SendGoal_Request;
  using Response = protocol::action::Navigation_SendGoal_Response;
};

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__Navigation_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__Navigation_GetResult_Request __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigation_GetResult_Request_
{
  using Type = Navigation_GetResult_Request_<ContainerAllocator>;

  explicit Navigation_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Navigation_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::Navigation_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::Navigation_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::Navigation_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::Navigation_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::Navigation_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::Navigation_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__Navigation_GetResult_Request
    std::shared_ptr<protocol::action::Navigation_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__Navigation_GetResult_Request
    std::shared_ptr<protocol::action::Navigation_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigation_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigation_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigation_GetResult_Request_

// alias to use template instance with default allocator
using Navigation_GetResult_Request =
  protocol::action::Navigation_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'result'
// already included above
// #include "protocol/action/detail/navigation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__Navigation_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__Navigation_GetResult_Response __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigation_GetResult_Response_
{
  using Type = Navigation_GetResult_Response_<ContainerAllocator>;

  explicit Navigation_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Navigation_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    protocol::action::Navigation_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const protocol::action::Navigation_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::Navigation_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::Navigation_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::Navigation_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::Navigation_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::Navigation_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::Navigation_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__Navigation_GetResult_Response
    std::shared_ptr<protocol::action::Navigation_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__Navigation_GetResult_Response
    std::shared_ptr<protocol::action::Navigation_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigation_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigation_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigation_GetResult_Response_

// alias to use template instance with default allocator
using Navigation_GetResult_Response =
  protocol::action::Navigation_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol

namespace protocol
{

namespace action
{

struct Navigation_GetResult
{
  using Request = protocol::action::Navigation_GetResult_Request;
  using Response = protocol::action::Navigation_GetResult_Response;
};

}  // namespace action

}  // namespace protocol


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "protocol/action/detail/navigation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__protocol__action__Navigation_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__protocol__action__Navigation_FeedbackMessage __declspec(deprecated)
#endif

namespace protocol
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Navigation_FeedbackMessage_
{
  using Type = Navigation_FeedbackMessage_<ContainerAllocator>;

  explicit Navigation_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Navigation_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    protocol::action::Navigation_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const protocol::action::Navigation_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    protocol::action::Navigation_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::action::Navigation_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::action::Navigation_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::action::Navigation_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::action::Navigation_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::action::Navigation_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::action::Navigation_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::action::Navigation_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__action__Navigation_FeedbackMessage
    std::shared_ptr<protocol::action::Navigation_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__action__Navigation_FeedbackMessage
    std::shared_ptr<protocol::action::Navigation_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigation_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigation_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigation_FeedbackMessage_

// alias to use template instance with default allocator
using Navigation_FeedbackMessage =
  protocol::action::Navigation_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace protocol

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace protocol
{

namespace action
{

struct Navigation
{
  /// The goal message defined in the action definition.
  using Goal = protocol::action::Navigation_Goal;
  /// The result message defined in the action definition.
  using Result = protocol::action::Navigation_Result;
  /// The feedback message defined in the action definition.
  using Feedback = protocol::action::Navigation_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = protocol::action::Navigation_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = protocol::action::Navigation_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = protocol::action::Navigation_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Navigation Navigation;

}  // namespace action

}  // namespace protocol

#endif  // PROTOCOL__ACTION__DETAIL__NAVIGATION__STRUCT_HPP_
