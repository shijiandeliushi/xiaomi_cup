// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from protocol:msg/AudioPlay.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_PLAY__STRUCT_HPP_
#define PROTOCOL__MSG__DETAIL__AUDIO_PLAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__protocol__msg__AudioPlay __attribute__((deprecated))
#else
# define DEPRECATED__protocol__msg__AudioPlay __declspec(deprecated)
#endif

namespace protocol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioPlay_
{
  using Type = AudioPlay_<ContainerAllocator>;

  explicit AudioPlay_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->module_name = "";
      this->play_id = 0;
    }
  }

  explicit AudioPlay_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : module_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->module_name = "";
      this->play_id = 0;
    }
  }

  // field types and members
  using _module_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _module_name_type module_name;
  using _play_id_type =
    uint16_t;
  _play_id_type play_id;

  // setters for named parameter idiom
  Type & set__module_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->module_name = _arg;
    return *this;
  }
  Type & set__play_id(
    const uint16_t & _arg)
  {
    this->play_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t PID_WIFI_ENTER_CONNECTION_MODE_0 =
    1u;
  static constexpr uint16_t PID_WIFI_ENTER_CONNECTION_MODE_1 =
    2u;
  static constexpr uint16_t PID_WIFI_WAIT_FOR_SCAN_CODE_0 =
    3u;
  static constexpr uint16_t PID_WIFI_SCAN_CODE_SUCCEEDED_0 =
    4u;
  static constexpr uint16_t PID_WIFI_CONNECTION_SUCCEEDED_0 =
    2001u;
  static constexpr uint16_t PID_WIFI_CONNECTION_SUCCEEDED_1 =
    6u;
  static constexpr uint16_t PID_WIFI_CONNECTION_FAILED_0 =
    7u;
  static constexpr uint16_t PID_WIFI_CONNECTION_FAILED_1 =
    8u;
  static constexpr uint16_t PID_WIFI_CONNECTION_FAILED_2 =
    9u;
  static constexpr uint16_t PID_WIFI_EXIT_CONNECTION_MODE_0 =
    10u;
  static constexpr uint16_t PID_WIFI_OFFLINE =
    11u;
  static constexpr uint16_t PID_WIFI_COMMUNICATION =
    12u;
  static constexpr uint16_t PID_WIFI_SCAN_CODE_IP_ERROR =
    13u;
  static constexpr uint16_t PID_WIFI_SCAN_CODE_INFO_ERROR =
    14u;
  static constexpr uint16_t PID_WIFI_REQUEST_OPEN_CAMERA_SUCCESS =
    15u;
  static constexpr uint16_t PID_WIFI_REQUEST_OPEN_CAMERA_FAIL =
    16u;
  static constexpr uint16_t PID_WIFI_REQUEST_CLOSE_CAMERA_SUCCESS =
    17u;
  static constexpr uint16_t PID_WIFI_REQUEST_CLOSE_CAMERA_FAIL =
    18u;
  static constexpr uint16_t PID_FACE_ENTRY_ADD_FACE =
    21u;
  static constexpr uint16_t PID_FACE_ENTRY_CANCLE_ADD_FACE =
    22u;
  static constexpr uint16_t PID_FACE_ENTRY_CONFIRM_LAST_FACE =
    23u;
  static constexpr uint16_t PID_FACE_ENTRY_UPDATE_FACE_ID =
    24u;
  static constexpr uint16_t PID_FACE_ENTRY_DELETE_FACE =
    25u;
  static constexpr uint16_t PID_FACE_ENTRY_GET_ALL_FACES =
    26u;
  static constexpr uint16_t PID_FACE_ENTRY_FIX_POSE =
    27u;
  static constexpr uint16_t PID_FACE_ENTRY_FIX_POSE_LEFT =
    28u;
  static constexpr uint16_t PID_FACE_ENTRY_FIX_POSE_RIGHT =
    29u;
  static constexpr uint16_t PID_FACE_ENTRY_FIX_POSE_UP =
    30u;
  static constexpr uint16_t PID_FACE_ENTRY_FIX_POSE_DOWN =
    31u;
  static constexpr uint16_t PID_FACE_ENTRY_FIX_DISTANCE_CLOSE =
    32u;
  static constexpr uint16_t PID_FACE_ENTRY_FIX_DISTANCE_NEAR =
    33u;
  static constexpr uint16_t PID_FACE_ENTRY_FIX_STABLE =
    34u;
  static constexpr uint16_t PID_FACE_ENTRY_MUTIPLE_FACES =
    35u;
  static constexpr uint16_t PID_FACE_ENTRY_NONE_FACES =
    36u;
  static constexpr uint16_t PID_FACE_ENTRY_TIMEOUT =
    37u;
  static constexpr uint16_t PID_FACE_ENTRY_FINISH =
    38u;
  static constexpr uint16_t PID_FACE_RECOGNITION_REQUEST =
    39u;
  static constexpr uint16_t PID_FACE_DEGREE_HEAD_TILT =
    40u;
  static constexpr uint16_t PID_FACE_RECGONITION_FINISH =
    41u;
  static constexpr uint16_t PID_FACE_RECGONITION_TIMEOUT =
    42u;
  static constexpr uint16_t PID_FACE_ALREADY_EXIST =
    43u;
  static constexpr uint16_t PID_CAMERA_START_PIC_TRANSFER =
    50u;
  static constexpr uint16_t PID_CAMERA_START_PHOTOS =
    51u;
  static constexpr uint16_t PID_CAMERA_TAKE_VIDEOS =
    52u;
  static constexpr uint16_t PID_CAMERA_VIDEO_RECORDING =
    53u;
  static constexpr uint16_t PID_SELF_CHECK_SUCCESS =
    60u;
  static constexpr uint16_t PID_SELF_CHECK_FAILED =
    61u;
  static constexpr uint16_t PID_BATTERY_CAPICITY_LOW =
    101u;
  static constexpr uint16_t PID_BATTERY_IN_CHARGING =
    102u;
  static constexpr uint16_t PID_FACE_ENTRY_START =
    103u;
  static constexpr uint16_t PID_BATTERY_CHARGE_COMPELETE =
    104u;
  static constexpr uint16_t PID_AI_PLEASE_ENABLE =
    124u;
  static constexpr uint16_t PID_AI_ENABLE_SUCCESS =
    125u;
  static constexpr uint16_t PID_AI_SERVICE_EXPIRED =
    127u;
  static constexpr uint16_t PID_TEST_HARDWARE_AUDIO =
    3000u;
  static constexpr uint16_t PID_TEST_STAGE_ONE =
    3001u;
  static constexpr uint16_t PID_TEST_STAGE_THREE =
    3003u;
  static constexpr uint16_t PID_SOUND_EFFECT_READY =
    9000u;
  static constexpr uint16_t PID_STOP_AUDIO_PLAY =
    9999u;
  static constexpr uint16_t PID_FOLLOW_TAGS_START =
    31000u;
  static constexpr uint16_t PID_FOLLOW_PERSON_START =
    31001u;
  static constexpr uint16_t PID_FOLLOW_OBJECT_START =
    31002u;
  static constexpr uint16_t PID_FOLLOW_TAGS_STOP =
    31003u;
  static constexpr uint16_t PID_FOLLOW_PERSON_STOP =
    31004u;
  static constexpr uint16_t PID_FOLLOW_OBJECT_STOP =
    31005u;
  static constexpr uint16_t PID_GPS_SELF_CHECK_FAILED =
    31006u;
  static constexpr uint16_t PID_LIDAR_SELF_CHECK_FAILED =
    31007u;
  static constexpr uint16_t PID_TOF_SELF_CHECK_FAILED =
    31008u;
  static constexpr uint16_t PID_ULTRASONIC_SELF_CHECK_FAILED =
    31009u;
  static constexpr uint16_t PID_BMS_SELF_CHECK_FAILED =
    31010u;
  static constexpr uint16_t PID_LED_SELF_CHECK_FAILED =
    31011u;
  static constexpr uint16_t PID_TOUCH_SELF_CHECK_FAILED =
    31012u;
  static constexpr uint16_t PID_UWB_SELF_CHECK_FAILED =
    31013u;
  static constexpr uint16_t PID_AUDIO_SELF_CHECK_FAILED =
    31014u;
  static constexpr uint16_t PID_MOTION_SELF_CHECK_FAILED =
    31015u;
  static constexpr uint16_t PID_GPS_SWITCH_MODE_FAILED =
    31016u;
  static constexpr uint16_t PID_LIDAR_SWITCH_MODE_FAILED =
    31017u;
  static constexpr uint16_t PID_TOF_SWITCH_MODE_FAILED =
    31018u;
  static constexpr uint16_t PID_ULTRASONIC_SWITCH_MODE_FAILED =
    31019u;
  static constexpr uint16_t PID_BMS_SWITCH_MODE_FAILED =
    31020u;
  static constexpr uint16_t PID_LED_SWITCH_MODE_FAILED =
    31021u;
  static constexpr uint16_t PID_TOUCH_SWITCH_MODE_FAILED =
    31022u;
  static constexpr uint16_t PID_UWB_SWITCH_MODE_FAILED =
    31023u;
  static constexpr uint16_t PID_AUDIO_SWITCH_MODE_FAILED =
    31024u;
  static constexpr uint16_t PID_MOTION_SWITCH_MODE_FAILED =
    31025u;
  static constexpr uint16_t PID_SENSOR_SWITCH_MODE_FAILED =
    31026u;
  static constexpr uint16_t PID_DEVICE_SWITCH_MODE_FAILED =
    31027u;
  static constexpr uint16_t PID_BONE_POINT_START =
    31028u;
  static constexpr uint16_t PID_BONE_POINT_DETECTING =
    31029u;
  static constexpr uint16_t PID_BONE_POINT_BACK =
    31030u;
  static constexpr uint16_t PID_BONE_POINT_LEFT =
    31031u;
  static constexpr uint16_t PID_BONE_POINT_RIGHT =
    31032u;
  static constexpr uint16_t PID_MODEL_LOADING_START =
    31033u;
  static constexpr uint16_t PID_MODEL_LOADING_COMPLETE =
    31034u;
  static constexpr uint16_t PID_WIFI_CONNECTED_UNKNOWN_NET =
    31035u;
  static constexpr uint16_t PID_WIFI_FAILED_PLEASE_RETRY =
    31036u;
  static constexpr uint16_t PID_FOLLOW_TAGS_LOST =
    31037u;
  static constexpr uint16_t PID_SELF_CHECK_START =
    31038u;
  static constexpr uint16_t PID_MODEL_VERSION_OLD =
    31050u;
  static constexpr uint16_t PID_MODEL_VERSION_UPDATE_SUCCESS =
    31051u;
  static constexpr uint16_t PID_MODEL_VERSION_UPDATE_FAIL =
    31052u;
  static constexpr uint16_t PID_MOVE_FAILED =
    31053u;
  static constexpr uint16_t PID_CAMERAR_SELF_CHECK_FAILED =
    31054u;
  static constexpr uint16_t PID_POWER =
    1000u;
  static constexpr uint16_t PID_PERCENT_0 =
    10000u;
  static constexpr uint16_t PID_PERCENT_5 =
    10005u;
  static constexpr uint16_t PID_PERCENT_20 =
    10020u;
  static constexpr uint16_t PID_PERCENT_30 =
    10030u;

  // pointer types
  using RawPtr =
    protocol::msg::AudioPlay_<ContainerAllocator> *;
  using ConstRawPtr =
    const protocol::msg::AudioPlay_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<protocol::msg::AudioPlay_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<protocol::msg::AudioPlay_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AudioPlay_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AudioPlay_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      protocol::msg::AudioPlay_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<protocol::msg::AudioPlay_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<protocol::msg::AudioPlay_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<protocol::msg::AudioPlay_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__protocol__msg__AudioPlay
    std::shared_ptr<protocol::msg::AudioPlay_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__protocol__msg__AudioPlay
    std::shared_ptr<protocol::msg::AudioPlay_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioPlay_ & other) const
  {
    if (this->module_name != other.module_name) {
      return false;
    }
    if (this->play_id != other.play_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioPlay_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioPlay_

// alias to use template instance with default allocator
using AudioPlay =
  protocol::msg::AudioPlay_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_ENTER_CONNECTION_MODE_0;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_ENTER_CONNECTION_MODE_1;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_WAIT_FOR_SCAN_CODE_0;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_SCAN_CODE_SUCCEEDED_0;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_CONNECTION_SUCCEEDED_0;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_CONNECTION_SUCCEEDED_1;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_CONNECTION_FAILED_0;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_CONNECTION_FAILED_1;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_CONNECTION_FAILED_2;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_EXIT_CONNECTION_MODE_0;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_OFFLINE;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_COMMUNICATION;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_SCAN_CODE_IP_ERROR;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_SCAN_CODE_INFO_ERROR;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_REQUEST_OPEN_CAMERA_SUCCESS;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_REQUEST_OPEN_CAMERA_FAIL;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_REQUEST_CLOSE_CAMERA_SUCCESS;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_REQUEST_CLOSE_CAMERA_FAIL;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_ADD_FACE;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_CANCLE_ADD_FACE;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_CONFIRM_LAST_FACE;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_UPDATE_FACE_ID;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_DELETE_FACE;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_GET_ALL_FACES;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_FIX_POSE;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_FIX_POSE_LEFT;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_FIX_POSE_RIGHT;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_FIX_POSE_UP;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_FIX_POSE_DOWN;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_FIX_DISTANCE_CLOSE;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_FIX_DISTANCE_NEAR;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_FIX_STABLE;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_MUTIPLE_FACES;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_NONE_FACES;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_FINISH;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_RECOGNITION_REQUEST;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_DEGREE_HEAD_TILT;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_RECGONITION_FINISH;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_RECGONITION_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ALREADY_EXIST;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_CAMERA_START_PIC_TRANSFER;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_CAMERA_START_PHOTOS;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_CAMERA_TAKE_VIDEOS;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_CAMERA_VIDEO_RECORDING;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_SELF_CHECK_SUCCESS;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_SELF_CHECK_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_BATTERY_CAPICITY_LOW;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_BATTERY_IN_CHARGING;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FACE_ENTRY_START;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_BATTERY_CHARGE_COMPELETE;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_AI_PLEASE_ENABLE;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_AI_ENABLE_SUCCESS;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_AI_SERVICE_EXPIRED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_TEST_HARDWARE_AUDIO;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_TEST_STAGE_ONE;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_TEST_STAGE_THREE;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_SOUND_EFFECT_READY;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_STOP_AUDIO_PLAY;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FOLLOW_TAGS_START;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FOLLOW_PERSON_START;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FOLLOW_OBJECT_START;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FOLLOW_TAGS_STOP;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FOLLOW_PERSON_STOP;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FOLLOW_OBJECT_STOP;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_GPS_SELF_CHECK_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_LIDAR_SELF_CHECK_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_TOF_SELF_CHECK_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_ULTRASONIC_SELF_CHECK_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_BMS_SELF_CHECK_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_LED_SELF_CHECK_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_TOUCH_SELF_CHECK_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_UWB_SELF_CHECK_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_AUDIO_SELF_CHECK_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_MOTION_SELF_CHECK_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_GPS_SWITCH_MODE_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_LIDAR_SWITCH_MODE_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_TOF_SWITCH_MODE_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_ULTRASONIC_SWITCH_MODE_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_BMS_SWITCH_MODE_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_LED_SWITCH_MODE_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_TOUCH_SWITCH_MODE_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_UWB_SWITCH_MODE_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_AUDIO_SWITCH_MODE_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_MOTION_SWITCH_MODE_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_SENSOR_SWITCH_MODE_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_DEVICE_SWITCH_MODE_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_BONE_POINT_START;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_BONE_POINT_DETECTING;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_BONE_POINT_BACK;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_BONE_POINT_LEFT;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_BONE_POINT_RIGHT;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_MODEL_LOADING_START;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_MODEL_LOADING_COMPLETE;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_CONNECTED_UNKNOWN_NET;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_WIFI_FAILED_PLEASE_RETRY;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_FOLLOW_TAGS_LOST;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_SELF_CHECK_START;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_MODEL_VERSION_OLD;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_MODEL_VERSION_UPDATE_SUCCESS;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_MODEL_VERSION_UPDATE_FAIL;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_MOVE_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_CAMERAR_SELF_CHECK_FAILED;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_POWER;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_PERCENT_0;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_PERCENT_5;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_PERCENT_20;
template<typename ContainerAllocator>
constexpr uint16_t AudioPlay_<ContainerAllocator>::PID_PERCENT_30;

}  // namespace msg

}  // namespace protocol

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_PLAY__STRUCT_HPP_
