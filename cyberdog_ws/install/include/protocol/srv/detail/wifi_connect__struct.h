// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/WifiConnect.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__WIFI_CONNECT__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__WIFI_CONNECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ssid'
// Member 'pwd'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/WifiConnect in the package protocol.
typedef struct protocol__srv__WifiConnect_Request
{
  rosidl_runtime_c__String ssid;
  rosidl_runtime_c__String pwd;
} protocol__srv__WifiConnect_Request;

// Struct for a sequence of protocol__srv__WifiConnect_Request.
typedef struct protocol__srv__WifiConnect_Request__Sequence
{
  protocol__srv__WifiConnect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__WifiConnect_Request__Sequence;


// Constants defined in the message

/// Constant 'RESULT_NO_SSID'.
enum
{
  protocol__srv__WifiConnect_Response__RESULT_NO_SSID = 4
};

/// Constant 'RESULT_ERR_PWD'.
enum
{
  protocol__srv__WifiConnect_Response__RESULT_ERR_PWD = 5
};

/// Constant 'RESULT_OTHER'.
enum
{
  protocol__srv__WifiConnect_Response__RESULT_OTHER = 6
};

/// Constant 'RESULT_SUCCESS'.
enum
{
  protocol__srv__WifiConnect_Response__RESULT_SUCCESS = 7
};

/// Constant 'RESULT_INTERRUPT'.
enum
{
  protocol__srv__WifiConnect_Response__RESULT_INTERRUPT = 14
};

/// Constant 'RESULT_TIMEOUT'.
enum
{
  protocol__srv__WifiConnect_Response__RESULT_TIMEOUT = 15
};

// Struct defined in srv/WifiConnect in the package protocol.
typedef struct protocol__srv__WifiConnect_Response
{
  uint8_t result;
  int32_t code;
} protocol__srv__WifiConnect_Response;

// Struct for a sequence of protocol__srv__WifiConnect_Response.
typedef struct protocol__srv__WifiConnect_Response__Sequence
{
  protocol__srv__WifiConnect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__WifiConnect_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__WIFI_CONNECT__STRUCT_H_
