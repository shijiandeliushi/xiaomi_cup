// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/MotionID.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_ID__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__MOTION_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ESTOP'.
enum
{
  protocol__msg__MotionID__ESTOP = 0l
};

/// Constant 'GETDOWN'.
enum
{
  protocol__msg__MotionID__GETDOWN = 101l
};

/// Constant 'RECOVERYSTAND'.
enum
{
  protocol__msg__MotionID__RECOVERYSTAND = 111l
};

/// Constant 'WALK_STAND'.
enum
{
  protocol__msg__MotionID__WALK_STAND = 112l
};

/// Constant 'BACK_FLIP'.
enum
{
  protocol__msg__MotionID__BACK_FLIP = 121l
};

/// Constant 'TWO_LEG_STAND'.
enum
{
  protocol__msg__MotionID__TWO_LEG_STAND = 123l
};

/// Constant 'ROLL_OVER'.
enum
{
  protocol__msg__MotionID__ROLL_OVER = 124l
};

/// Constant 'PASSIVE_TROT'.
enum
{
  protocol__msg__MotionID__PASSIVE_TROT = 125l
};

/// Constant 'JUMP_STAIR'.
enum
{
  protocol__msg__MotionID__JUMP_STAIR = 126l
};

/// Constant 'JUMP_UPSTAIR'.
enum
{
  protocol__msg__MotionID__JUMP_UPSTAIR = 126l
};

/// Constant 'JUMP_DOWNSTAIR'.
enum
{
  protocol__msg__MotionID__JUMP_DOWNSTAIR = 137l
};

/// Constant 'JUMP3D_LEFT90DEG'.
enum
{
  protocol__msg__MotionID__JUMP3D_LEFT90DEG = 130l
};

/// Constant 'JUMP3D_RIGHT90DEG'.
enum
{
  protocol__msg__MotionID__JUMP3D_RIGHT90DEG = 131l
};

/// Constant 'JUMP3D_FORWARD60CM'.
enum
{
  protocol__msg__MotionID__JUMP3D_FORWARD60CM = 132l
};

/// Constant 'JUMP3D_FORWARD30CM'.
enum
{
  protocol__msg__MotionID__JUMP3D_FORWARD30CM = 133l
};

/// Constant 'JUMP3D_LEFT20CM'.
enum
{
  protocol__msg__MotionID__JUMP3D_LEFT20CM = 134l
};

/// Constant 'JUMP3D_RIGHT20CM'.
enum
{
  protocol__msg__MotionID__JUMP3D_RIGHT20CM = 135l
};

/// Constant 'JUMP3D_UP30CM'.
enum
{
  protocol__msg__MotionID__JUMP3D_UP30CM = 136l
};

/// Constant 'FORCECONTROL_DEFINITIVELY'.
enum
{
  protocol__msg__MotionID__FORCECONTROL_DEFINITIVELY = 201l
};

/// Constant 'FORCECONTROL_RELATIVEYLY'.
enum
{
  protocol__msg__MotionID__FORCECONTROL_RELATIVEYLY = 202l
};

/// Constant 'POSECONTROL_DEFINITIVELY'.
enum
{
  protocol__msg__MotionID__POSECONTROL_DEFINITIVELY = 211l
};

/// Constant 'POSECONTROL_RELATIVEYLY'.
enum
{
  protocol__msg__MotionID__POSECONTROL_RELATIVEYLY = 212l
};

/// Constant 'JUMP_BOUND'.
enum
{
  protocol__msg__MotionID__JUMP_BOUND = 301l
};

/// Constant 'JUMP_PRONK'.
enum
{
  protocol__msg__MotionID__JUMP_PRONK = 302l
};

/// Constant 'WALK_USERTROT'.
enum
{
  protocol__msg__MotionID__WALK_USERTROT = 303l
};

/// Constant 'WALK_ADAPTIVELY'.
enum
{
  protocol__msg__MotionID__WALK_ADAPTIVELY = 304l
};

/// Constant 'WALK_FLYTROT'.
enum
{
  protocol__msg__MotionID__WALK_FLYTROT = 305l
};

/// Constant 'SEQUENCE_CUSTOM'.
enum
{
  protocol__msg__MotionID__SEQUENCE_CUSTOM = 400l
};

// Struct defined in msg/MotionID in the package protocol.
typedef struct protocol__msg__MotionID
{
  uint8_t structure_needs_at_least_one_member;
} protocol__msg__MotionID;

// Struct for a sequence of protocol__msg__MotionID.
typedef struct protocol__msg__MotionID__Sequence
{
  protocol__msg__MotionID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__MotionID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MOTION_ID__STRUCT_H_
