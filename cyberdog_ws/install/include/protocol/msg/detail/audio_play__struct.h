// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/AudioPlay.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__AUDIO_PLAY__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__AUDIO_PLAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PID_WIFI_ENTER_CONNECTION_MODE_0'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_ENTER_CONNECTION_MODE_0 = 1
};

/// Constant 'PID_WIFI_ENTER_CONNECTION_MODE_1'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_ENTER_CONNECTION_MODE_1 = 2
};

/// Constant 'PID_WIFI_WAIT_FOR_SCAN_CODE_0'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_WAIT_FOR_SCAN_CODE_0 = 3
};

/// Constant 'PID_WIFI_SCAN_CODE_SUCCEEDED_0'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_SCAN_CODE_SUCCEEDED_0 = 4
};

/// Constant 'PID_WIFI_CONNECTION_SUCCEEDED_0'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_CONNECTION_SUCCEEDED_0 = 2001
};

/// Constant 'PID_WIFI_CONNECTION_SUCCEEDED_1'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_CONNECTION_SUCCEEDED_1 = 6
};

/// Constant 'PID_WIFI_CONNECTION_FAILED_0'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_CONNECTION_FAILED_0 = 7
};

/// Constant 'PID_WIFI_CONNECTION_FAILED_1'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_CONNECTION_FAILED_1 = 8
};

/// Constant 'PID_WIFI_CONNECTION_FAILED_2'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_CONNECTION_FAILED_2 = 9
};

/// Constant 'PID_WIFI_EXIT_CONNECTION_MODE_0'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_EXIT_CONNECTION_MODE_0 = 10
};

/// Constant 'PID_WIFI_OFFLINE'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_OFFLINE = 11
};

/// Constant 'PID_WIFI_COMMUNICATION'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_COMMUNICATION = 12
};

/// Constant 'PID_WIFI_SCAN_CODE_IP_ERROR'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_SCAN_CODE_IP_ERROR = 13
};

/// Constant 'PID_WIFI_SCAN_CODE_INFO_ERROR'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_SCAN_CODE_INFO_ERROR = 14
};

/// Constant 'PID_WIFI_REQUEST_OPEN_CAMERA_SUCCESS'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_REQUEST_OPEN_CAMERA_SUCCESS = 15
};

/// Constant 'PID_WIFI_REQUEST_OPEN_CAMERA_FAIL'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_REQUEST_OPEN_CAMERA_FAIL = 16
};

/// Constant 'PID_WIFI_REQUEST_CLOSE_CAMERA_SUCCESS'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_REQUEST_CLOSE_CAMERA_SUCCESS = 17
};

/// Constant 'PID_WIFI_REQUEST_CLOSE_CAMERA_FAIL'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_REQUEST_CLOSE_CAMERA_FAIL = 18
};

/// Constant 'PID_FACE_ENTRY_ADD_FACE'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_ADD_FACE = 21
};

/// Constant 'PID_FACE_ENTRY_CANCLE_ADD_FACE'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_CANCLE_ADD_FACE = 22
};

/// Constant 'PID_FACE_ENTRY_CONFIRM_LAST_FACE'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_CONFIRM_LAST_FACE = 23
};

/// Constant 'PID_FACE_ENTRY_UPDATE_FACE_ID'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_UPDATE_FACE_ID = 24
};

/// Constant 'PID_FACE_ENTRY_DELETE_FACE'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_DELETE_FACE = 25
};

/// Constant 'PID_FACE_ENTRY_GET_ALL_FACES'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_GET_ALL_FACES = 26
};

/// Constant 'PID_FACE_ENTRY_FIX_POSE'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_FIX_POSE = 27
};

/// Constant 'PID_FACE_ENTRY_FIX_POSE_LEFT'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_FIX_POSE_LEFT = 28
};

/// Constant 'PID_FACE_ENTRY_FIX_POSE_RIGHT'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_FIX_POSE_RIGHT = 29
};

/// Constant 'PID_FACE_ENTRY_FIX_POSE_UP'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_FIX_POSE_UP = 30
};

/// Constant 'PID_FACE_ENTRY_FIX_POSE_DOWN'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_FIX_POSE_DOWN = 31
};

/// Constant 'PID_FACE_ENTRY_FIX_DISTANCE_CLOSE'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_FIX_DISTANCE_CLOSE = 32
};

/// Constant 'PID_FACE_ENTRY_FIX_DISTANCE_NEAR'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_FIX_DISTANCE_NEAR = 33
};

/// Constant 'PID_FACE_ENTRY_FIX_STABLE'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_FIX_STABLE = 34
};

/// Constant 'PID_FACE_ENTRY_MUTIPLE_FACES'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_MUTIPLE_FACES = 35
};

/// Constant 'PID_FACE_ENTRY_NONE_FACES'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_NONE_FACES = 36
};

/// Constant 'PID_FACE_ENTRY_TIMEOUT'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_TIMEOUT = 37
};

/// Constant 'PID_FACE_ENTRY_FINISH'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_FINISH = 38
};

/// Constant 'PID_FACE_RECOGNITION_REQUEST'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_RECOGNITION_REQUEST = 39
};

/// Constant 'PID_FACE_DEGREE_HEAD_TILT'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_DEGREE_HEAD_TILT = 40
};

/// Constant 'PID_FACE_RECGONITION_FINISH'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_RECGONITION_FINISH = 41
};

/// Constant 'PID_FACE_RECGONITION_TIMEOUT'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_RECGONITION_TIMEOUT = 42
};

/// Constant 'PID_FACE_ALREADY_EXIST'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ALREADY_EXIST = 43
};

/// Constant 'PID_CAMERA_START_PIC_TRANSFER'.
enum
{
  protocol__msg__AudioPlay__PID_CAMERA_START_PIC_TRANSFER = 50
};

/// Constant 'PID_CAMERA_START_PHOTOS'.
enum
{
  protocol__msg__AudioPlay__PID_CAMERA_START_PHOTOS = 51
};

/// Constant 'PID_CAMERA_TAKE_VIDEOS'.
enum
{
  protocol__msg__AudioPlay__PID_CAMERA_TAKE_VIDEOS = 52
};

/// Constant 'PID_CAMERA_VIDEO_RECORDING'.
enum
{
  protocol__msg__AudioPlay__PID_CAMERA_VIDEO_RECORDING = 53
};

/// Constant 'PID_SELF_CHECK_SUCCESS'.
enum
{
  protocol__msg__AudioPlay__PID_SELF_CHECK_SUCCESS = 60
};

/// Constant 'PID_SELF_CHECK_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_SELF_CHECK_FAILED = 61
};

/// Constant 'PID_BATTERY_CAPICITY_LOW'.
enum
{
  protocol__msg__AudioPlay__PID_BATTERY_CAPICITY_LOW = 101
};

/// Constant 'PID_BATTERY_IN_CHARGING'.
enum
{
  protocol__msg__AudioPlay__PID_BATTERY_IN_CHARGING = 102
};

/// Constant 'PID_FACE_ENTRY_START'.
enum
{
  protocol__msg__AudioPlay__PID_FACE_ENTRY_START = 103
};

/// Constant 'PID_BATTERY_CHARGE_COMPELETE'.
enum
{
  protocol__msg__AudioPlay__PID_BATTERY_CHARGE_COMPELETE = 104
};

/// Constant 'PID_AI_PLEASE_ENABLE'.
enum
{
  protocol__msg__AudioPlay__PID_AI_PLEASE_ENABLE = 124
};

/// Constant 'PID_AI_ENABLE_SUCCESS'.
enum
{
  protocol__msg__AudioPlay__PID_AI_ENABLE_SUCCESS = 125
};

/// Constant 'PID_AI_SERVICE_EXPIRED'.
enum
{
  protocol__msg__AudioPlay__PID_AI_SERVICE_EXPIRED = 127
};

/// Constant 'PID_TEST_HARDWARE_AUDIO'.
enum
{
  protocol__msg__AudioPlay__PID_TEST_HARDWARE_AUDIO = 3000
};

/// Constant 'PID_TEST_STAGE_ONE'.
enum
{
  protocol__msg__AudioPlay__PID_TEST_STAGE_ONE = 3001
};

/// Constant 'PID_TEST_STAGE_THREE'.
enum
{
  protocol__msg__AudioPlay__PID_TEST_STAGE_THREE = 3003
};

/// Constant 'PID_SOUND_EFFECT_READY'.
enum
{
  protocol__msg__AudioPlay__PID_SOUND_EFFECT_READY = 9000
};

/// Constant 'PID_STOP_AUDIO_PLAY'.
enum
{
  protocol__msg__AudioPlay__PID_STOP_AUDIO_PLAY = 9999
};

/// Constant 'PID_FOLLOW_TAGS_START'.
enum
{
  protocol__msg__AudioPlay__PID_FOLLOW_TAGS_START = 31000
};

/// Constant 'PID_FOLLOW_PERSON_START'.
enum
{
  protocol__msg__AudioPlay__PID_FOLLOW_PERSON_START = 31001
};

/// Constant 'PID_FOLLOW_OBJECT_START'.
enum
{
  protocol__msg__AudioPlay__PID_FOLLOW_OBJECT_START = 31002
};

/// Constant 'PID_FOLLOW_TAGS_STOP'.
enum
{
  protocol__msg__AudioPlay__PID_FOLLOW_TAGS_STOP = 31003
};

/// Constant 'PID_FOLLOW_PERSON_STOP'.
enum
{
  protocol__msg__AudioPlay__PID_FOLLOW_PERSON_STOP = 31004
};

/// Constant 'PID_FOLLOW_OBJECT_STOP'.
enum
{
  protocol__msg__AudioPlay__PID_FOLLOW_OBJECT_STOP = 31005
};

/// Constant 'PID_GPS_SELF_CHECK_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_GPS_SELF_CHECK_FAILED = 31006
};

/// Constant 'PID_LIDAR_SELF_CHECK_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_LIDAR_SELF_CHECK_FAILED = 31007
};

/// Constant 'PID_TOF_SELF_CHECK_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_TOF_SELF_CHECK_FAILED = 31008
};

/// Constant 'PID_ULTRASONIC_SELF_CHECK_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_ULTRASONIC_SELF_CHECK_FAILED = 31009
};

/// Constant 'PID_BMS_SELF_CHECK_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_BMS_SELF_CHECK_FAILED = 31010
};

/// Constant 'PID_LED_SELF_CHECK_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_LED_SELF_CHECK_FAILED = 31011
};

/// Constant 'PID_TOUCH_SELF_CHECK_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_TOUCH_SELF_CHECK_FAILED = 31012
};

/// Constant 'PID_UWB_SELF_CHECK_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_UWB_SELF_CHECK_FAILED = 31013
};

/// Constant 'PID_AUDIO_SELF_CHECK_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_AUDIO_SELF_CHECK_FAILED = 31014
};

/// Constant 'PID_MOTION_SELF_CHECK_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_MOTION_SELF_CHECK_FAILED = 31015
};

/// Constant 'PID_GPS_SWITCH_MODE_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_GPS_SWITCH_MODE_FAILED = 31016
};

/// Constant 'PID_LIDAR_SWITCH_MODE_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_LIDAR_SWITCH_MODE_FAILED = 31017
};

/// Constant 'PID_TOF_SWITCH_MODE_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_TOF_SWITCH_MODE_FAILED = 31018
};

/// Constant 'PID_ULTRASONIC_SWITCH_MODE_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_ULTRASONIC_SWITCH_MODE_FAILED = 31019
};

/// Constant 'PID_BMS_SWITCH_MODE_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_BMS_SWITCH_MODE_FAILED = 31020
};

/// Constant 'PID_LED_SWITCH_MODE_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_LED_SWITCH_MODE_FAILED = 31021
};

/// Constant 'PID_TOUCH_SWITCH_MODE_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_TOUCH_SWITCH_MODE_FAILED = 31022
};

/// Constant 'PID_UWB_SWITCH_MODE_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_UWB_SWITCH_MODE_FAILED = 31023
};

/// Constant 'PID_AUDIO_SWITCH_MODE_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_AUDIO_SWITCH_MODE_FAILED = 31024
};

/// Constant 'PID_MOTION_SWITCH_MODE_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_MOTION_SWITCH_MODE_FAILED = 31025
};

/// Constant 'PID_SENSOR_SWITCH_MODE_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_SENSOR_SWITCH_MODE_FAILED = 31026
};

/// Constant 'PID_DEVICE_SWITCH_MODE_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_DEVICE_SWITCH_MODE_FAILED = 31027
};

/// Constant 'PID_BONE_POINT_START'.
enum
{
  protocol__msg__AudioPlay__PID_BONE_POINT_START = 31028
};

/// Constant 'PID_BONE_POINT_DETECTING'.
enum
{
  protocol__msg__AudioPlay__PID_BONE_POINT_DETECTING = 31029
};

/// Constant 'PID_BONE_POINT_BACK'.
enum
{
  protocol__msg__AudioPlay__PID_BONE_POINT_BACK = 31030
};

/// Constant 'PID_BONE_POINT_LEFT'.
enum
{
  protocol__msg__AudioPlay__PID_BONE_POINT_LEFT = 31031
};

/// Constant 'PID_BONE_POINT_RIGHT'.
enum
{
  protocol__msg__AudioPlay__PID_BONE_POINT_RIGHT = 31032
};

/// Constant 'PID_MODEL_LOADING_START'.
enum
{
  protocol__msg__AudioPlay__PID_MODEL_LOADING_START = 31033
};

/// Constant 'PID_MODEL_LOADING_COMPLETE'.
enum
{
  protocol__msg__AudioPlay__PID_MODEL_LOADING_COMPLETE = 31034
};

/// Constant 'PID_WIFI_CONNECTED_UNKNOWN_NET'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_CONNECTED_UNKNOWN_NET = 31035
};

/// Constant 'PID_WIFI_FAILED_PLEASE_RETRY'.
enum
{
  protocol__msg__AudioPlay__PID_WIFI_FAILED_PLEASE_RETRY = 31036
};

/// Constant 'PID_FOLLOW_TAGS_LOST'.
enum
{
  protocol__msg__AudioPlay__PID_FOLLOW_TAGS_LOST = 31037
};

/// Constant 'PID_SELF_CHECK_START'.
enum
{
  protocol__msg__AudioPlay__PID_SELF_CHECK_START = 31038
};

/// Constant 'PID_MODEL_VERSION_OLD'.
enum
{
  protocol__msg__AudioPlay__PID_MODEL_VERSION_OLD = 31050
};

/// Constant 'PID_MODEL_VERSION_UPDATE_SUCCESS'.
enum
{
  protocol__msg__AudioPlay__PID_MODEL_VERSION_UPDATE_SUCCESS = 31051
};

/// Constant 'PID_MODEL_VERSION_UPDATE_FAIL'.
enum
{
  protocol__msg__AudioPlay__PID_MODEL_VERSION_UPDATE_FAIL = 31052
};

/// Constant 'PID_MOVE_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_MOVE_FAILED = 31053
};

/// Constant 'PID_CAMERAR_SELF_CHECK_FAILED'.
enum
{
  protocol__msg__AudioPlay__PID_CAMERAR_SELF_CHECK_FAILED = 31054
};

/// Constant 'PID_POWER'.
enum
{
  protocol__msg__AudioPlay__PID_POWER = 1000
};

/// Constant 'PID_PERCENT_0'.
enum
{
  protocol__msg__AudioPlay__PID_PERCENT_0 = 10000
};

/// Constant 'PID_PERCENT_5'.
enum
{
  protocol__msg__AudioPlay__PID_PERCENT_5 = 10005
};

/// Constant 'PID_PERCENT_20'.
enum
{
  protocol__msg__AudioPlay__PID_PERCENT_20 = 10020
};

/// Constant 'PID_PERCENT_30'.
enum
{
  protocol__msg__AudioPlay__PID_PERCENT_30 = 10030
};

// Include directives for member types
// Member 'module_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/AudioPlay in the package protocol.
typedef struct protocol__msg__AudioPlay
{
  rosidl_runtime_c__String module_name;
  uint16_t play_id;
} protocol__msg__AudioPlay;

// Struct for a sequence of protocol__msg__AudioPlay.
typedef struct protocol__msg__AudioPlay__Sequence
{
  protocol__msg__AudioPlay * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__AudioPlay__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__AUDIO_PLAY__STRUCT_H_
