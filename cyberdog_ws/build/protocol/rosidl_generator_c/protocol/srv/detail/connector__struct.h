// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:srv/Connector.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__SRV__DETAIL__CONNECTOR__STRUCT_H_
#define PROTOCOL__SRV__DETAIL__CONNECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'wifi_name'
// Member 'wifi_password'
// Member 'provider_ip'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Connector in the package protocol.
typedef struct protocol__srv__Connector_Request
{
  rosidl_runtime_c__String wifi_name;
  rosidl_runtime_c__String wifi_password;
  rosidl_runtime_c__String provider_ip;
} protocol__srv__Connector_Request;

// Struct for a sequence of protocol__srv__Connector_Request.
typedef struct protocol__srv__Connector_Request__Sequence
{
  protocol__srv__Connector_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__Connector_Request__Sequence;


// Constants defined in the message

/// Constant 'CODE_SUCCESS'.
enum
{
  protocol__srv__Connector_Response__CODE_SUCCESS = 0l
};

/// Constant 'CODE_WIFI_NAME_FAIL'.
enum
{
  protocol__srv__Connector_Response__CODE_WIFI_NAME_FAIL = 8121l
};

/// Constant 'CODE_WIFI_PASSWORD_FAIL'.
enum
{
  protocol__srv__Connector_Response__CODE_WIFI_PASSWORD_FAIL = 8122l
};

/// Constant 'CODE_WIFI_PROVIDER_IP_FAIL'.
enum
{
  protocol__srv__Connector_Response__CODE_WIFI_PROVIDER_IP_FAIL = 8123l
};

/// Constant 'CODE_CONNECTION_TIMEOUT_FAIL'.
enum
{
  protocol__srv__Connector_Response__CODE_CONNECTION_TIMEOUT_FAIL = 8124l
};

// Struct defined in srv/Connector in the package protocol.
typedef struct protocol__srv__Connector_Response
{
  bool connected;
  int32_t code;
} protocol__srv__Connector_Response;

// Struct for a sequence of protocol__srv__Connector_Response.
typedef struct protocol__srv__Connector_Response__Sequence
{
  protocol__srv__Connector_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__srv__Connector_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__SRV__DETAIL__CONNECTOR__STRUCT_H_
