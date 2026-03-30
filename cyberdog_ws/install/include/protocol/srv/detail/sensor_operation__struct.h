// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/SensorOperation.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__SENSOR_OPERATION__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__SENSOR_OPERATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ID_ALL'.
enum
{
  protocol__srv__SensorOperation_Request__ID_ALL = 0
};

/// Constant 'ID_LIDAR'.
enum
{
  protocol__srv__SensorOperation_Request__ID_LIDAR = 1
};

/// Constant 'ID_ULTRA'.
enum
{
  protocol__srv__SensorOperation_Request__ID_ULTRA = 2
};

/// Constant 'ID_TOF'.
enum
{
  protocol__srv__SensorOperation_Request__ID_TOF = 3
};

/// Constant 'ID_GPS'.
enum
{
  protocol__srv__SensorOperation_Request__ID_GPS = 4
};

/// Constant 'OPR_OPEN'.
enum
{
  protocol__srv__SensorOperation_Request__OPR_OPEN = 1
};

/// Constant 'OPR_START'.
enum
{
  protocol__srv__SensorOperation_Request__OPR_START = 2
};

/// Constant 'OPR_STOP'.
enum
{
  protocol__srv__SensorOperation_Request__OPR_STOP = 3
};

/// Constant 'OPR_CLOSE'.
enum
{
  protocol__srv__SensorOperation_Request__OPR_CLOSE = 4
};

// Struct defined in srv/SensorOperation in the package protocol.
typedef struct protocol__srv__SensorOperation_Request
{
  uint16_t sensor_id;
  uint8_t operation;
} protocol__srv__SensorOperation_Request;

// Struct for a sequence of protocol__srv__SensorOperation_Request.
typedef struct protocol__srv__SensorOperation_Request__Sequence
{
  protocol__srv__SensorOperation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__SensorOperation_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SensorOperation in the package protocol.
typedef struct protocol__srv__SensorOperation_Response
{
  bool success;
  int32_t code;
} protocol__srv__SensorOperation_Response;

// Struct for a sequence of protocol__srv__SensorOperation_Response.
typedef struct protocol__srv__SensorOperation_Response__Sequence
{
  protocol__srv__SensorOperation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__SensorOperation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__SENSOR_OPERATION__STRUCT_H_
