// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/LedExecute.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__LED_EXECUTE__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__LED_EXECUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LOWPOWER'.
static const char * const protocol__srv__LedExecute_Request__LOWPOWER = "lowpower";

/// Constant 'BMS'.
static const char * const protocol__srv__LedExecute_Request__BMS = "bms";

/// Constant 'CONNECTOR'.
static const char * const protocol__srv__LedExecute_Request__CONNECTOR = "connector";

/// Constant 'VP'.
static const char * const protocol__srv__LedExecute_Request__VP = "vp";

/// Constant 'TRACKING'.
static const char * const protocol__srv__LedExecute_Request__TRACKING = "tracking";

/// Constant 'SYSTEM'.
static const char * const protocol__srv__LedExecute_Request__SYSTEM = "system";

/// Constant 'HEAD_LED'.
enum
{
  protocol__srv__LedExecute_Request__HEAD_LED = 1
};

/// Constant 'TAIL_LED'.
enum
{
  protocol__srv__LedExecute_Request__TAIL_LED = 2
};

/// Constant 'MINI_LED'.
enum
{
  protocol__srv__LedExecute_Request__MINI_LED = 3
};

/// Constant 'SYSTEM_PREDEFINED'.
enum
{
  protocol__srv__LedExecute_Request__SYSTEM_PREDEFINED = 1
};

/// Constant 'USER_DEFINED'.
enum
{
  protocol__srv__LedExecute_Request__USER_DEFINED = 2
};

/// Constant 'RGB_ON'.
enum
{
  protocol__srv__LedExecute_Request__RGB_ON = 1
};

/// Constant 'BLINK'.
enum
{
  protocol__srv__LedExecute_Request__BLINK = 2
};

/// Constant 'BLINK_FAST'.
enum
{
  protocol__srv__LedExecute_Request__BLINK_FAST = 3
};

/// Constant 'BREATH'.
enum
{
  protocol__srv__LedExecute_Request__BREATH = 4
};

/// Constant 'BREATH_FAST'.
enum
{
  protocol__srv__LedExecute_Request__BREATH_FAST = 5
};

/// Constant 'ONE_BY_ONE'.
enum
{
  protocol__srv__LedExecute_Request__ONE_BY_ONE = 6
};

/// Constant 'ONE_BY_ONE_FAST'.
enum
{
  protocol__srv__LedExecute_Request__ONE_BY_ONE_FAST = 7
};

/// Constant 'BACK_AND_FORTH'.
enum
{
  protocol__srv__LedExecute_Request__BACK_AND_FORTH = 8
};

/// Constant 'TRAILING_RACE'.
enum
{
  protocol__srv__LedExecute_Request__TRAILING_RACE = 9
};

/// Constant 'RGB_OFF'.
enum
{
  protocol__srv__LedExecute_Request__RGB_OFF = 160
};

/// Constant 'RED_ON'.
enum
{
  protocol__srv__LedExecute_Request__RED_ON = 161
};

/// Constant 'RED_BLINK'.
enum
{
  protocol__srv__LedExecute_Request__RED_BLINK = 162
};

/// Constant 'RED_BLINK_FAST'.
enum
{
  protocol__srv__LedExecute_Request__RED_BLINK_FAST = 163
};

/// Constant 'RED_BREATH'.
enum
{
  protocol__srv__LedExecute_Request__RED_BREATH = 164
};

/// Constant 'RED_BREATH_FAST'.
enum
{
  protocol__srv__LedExecute_Request__RED_BREATH_FAST = 165
};

/// Constant 'RED_ONE_BY_ONE'.
enum
{
  protocol__srv__LedExecute_Request__RED_ONE_BY_ONE = 166
};

/// Constant 'RED_ONE_BY_ONE_FAST'.
enum
{
  protocol__srv__LedExecute_Request__RED_ONE_BY_ONE_FAST = 167
};

/// Constant 'BLUE_ON'.
enum
{
  protocol__srv__LedExecute_Request__BLUE_ON = 168
};

/// Constant 'BLUE_BLINK'.
enum
{
  protocol__srv__LedExecute_Request__BLUE_BLINK = 169
};

/// Constant 'BLUE_BLINK_FAST'.
enum
{
  protocol__srv__LedExecute_Request__BLUE_BLINK_FAST = 170
};

/// Constant 'BLUE_BREATH'.
enum
{
  protocol__srv__LedExecute_Request__BLUE_BREATH = 171
};

/// Constant 'BLUE_BREATH_FAST'.
enum
{
  protocol__srv__LedExecute_Request__BLUE_BREATH_FAST = 172
};

/// Constant 'BLUE_ONE_BY_ONE'.
enum
{
  protocol__srv__LedExecute_Request__BLUE_ONE_BY_ONE = 173
};

/// Constant 'BLUE_ONE_BY_ONE_FAST'.
enum
{
  protocol__srv__LedExecute_Request__BLUE_ONE_BY_ONE_FAST = 174
};

/// Constant 'YELLOW_ON'.
enum
{
  protocol__srv__LedExecute_Request__YELLOW_ON = 175
};

/// Constant 'YELLOW_BLINK'.
enum
{
  protocol__srv__LedExecute_Request__YELLOW_BLINK = 176
};

/// Constant 'YELLOW_BLINK_FAST'.
enum
{
  protocol__srv__LedExecute_Request__YELLOW_BLINK_FAST = 177
};

/// Constant 'YELLOW_BREATH'.
enum
{
  protocol__srv__LedExecute_Request__YELLOW_BREATH = 178
};

/// Constant 'YELLOW_BREATH_FAST'.
enum
{
  protocol__srv__LedExecute_Request__YELLOW_BREATH_FAST = 179
};

/// Constant 'YELLOW_ONE_BY_ONE'.
enum
{
  protocol__srv__LedExecute_Request__YELLOW_ONE_BY_ONE = 180
};

/// Constant 'YELLOW_ONE_BY_ONE_FAST'.
enum
{
  protocol__srv__LedExecute_Request__YELLOW_ONE_BY_ONE_FAST = 181
};

/// Constant 'CIRCULAR_BREATH'.
enum
{
  protocol__srv__LedExecute_Request__CIRCULAR_BREATH = 48
};

/// Constant 'CIRCULAR_RING'.
enum
{
  protocol__srv__LedExecute_Request__CIRCULAR_RING = 49
};

/// Constant 'MINI_OFF'.
enum
{
  protocol__srv__LedExecute_Request__MINI_OFF = 50
};

/// Constant 'RECTANGLE_COLOR'.
enum
{
  protocol__srv__LedExecute_Request__RECTANGLE_COLOR = 51
};

/// Constant 'CENTRE_COLOR'.
enum
{
  protocol__srv__LedExecute_Request__CENTRE_COLOR = 52
};

/// Constant 'THREE_CIRCULAR'.
enum
{
  protocol__srv__LedExecute_Request__THREE_CIRCULAR = 53
};

/// Constant 'COLOR_ONE_BY_ONE'.
enum
{
  protocol__srv__LedExecute_Request__COLOR_ONE_BY_ONE = 54
};

// Include directives for member types
// Member 'client'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/LedExecute in the package protocol.
typedef struct protocol__srv__LedExecute_Request
{
  bool occupation;
  rosidl_runtime_c__String client;
  uint8_t target;
  uint8_t mode;
  uint8_t effect;
  uint8_t r_value;
  uint8_t g_value;
  uint8_t b_value;
} protocol__srv__LedExecute_Request;

// Struct for a sequence of protocol__srv__LedExecute_Request.
typedef struct protocol__srv__LedExecute_Request__Sequence
{
  protocol__srv__LedExecute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__LedExecute_Request__Sequence;


// Constants defined in the message

/// Constant 'SUCCEED'.
enum
{
  protocol__srv__LedExecute_Response__SUCCEED = 0l
};

/// Constant 'TIMEOUT'.
enum
{
  protocol__srv__LedExecute_Response__TIMEOUT = 1107l
};

/// Constant 'TARGET_ERROR'.
enum
{
  protocol__srv__LedExecute_Response__TARGET_ERROR = 1121l
};

/// Constant 'PRIORITY_ERROR'.
enum
{
  protocol__srv__LedExecute_Response__PRIORITY_ERROR = 1122l
};

/// Constant 'MODE_ERROR'.
enum
{
  protocol__srv__LedExecute_Response__MODE_ERROR = 1123l
};

/// Constant 'EFFECT_ERROR'.
enum
{
  protocol__srv__LedExecute_Response__EFFECT_ERROR = 1124l
};

/// Constant 'LOW_PRIORITY'.
enum
{
  protocol__srv__LedExecute_Response__LOW_PRIORITY = 1125l
};

// Struct defined in srv/LedExecute in the package protocol.
typedef struct protocol__srv__LedExecute_Response
{
  int32_t code;
} protocol__srv__LedExecute_Response;

// Struct for a sequence of protocol__srv__LedExecute_Response.
typedef struct protocol__srv__LedExecute_Response__Sequence
{
  protocol__srv__LedExecute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__LedExecute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__LED_EXECUTE__STRUCT_H_
