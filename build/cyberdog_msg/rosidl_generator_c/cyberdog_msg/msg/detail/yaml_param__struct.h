// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cyberdog_msg:msg/YamlParam.idl
// generated code does not contain a copyright notice

#ifndef CYBERDOG_MSG__MSG__DETAIL__YAML_PARAM__STRUCT_H_
#define CYBERDOG_MSG__MSG__DETAIL__YAML_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DOUBLE'.
enum
{
  cyberdog_msg__msg__YamlParam__DOUBLE = 1ull
};

/// Constant 'S64'.
enum
{
  cyberdog_msg__msg__YamlParam__S64 = 2ull
};

/// Constant 'VEC_X_DOUBLE'.
enum
{
  cyberdog_msg__msg__YamlParam__VEC_X_DOUBLE = 3ull
};

/// Constant 'MAT_X_DOUBLE'.
enum
{
  cyberdog_msg__msg__YamlParam__MAT_X_DOUBLE = 4ull
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/YamlParam in the package cyberdog_msg.
typedef struct cyberdog_msg__msg__YamlParam
{
  rosidl_runtime_c__String name;
  uint64_t kind;
  int64_t s64_value;
  double double_value;
  double vecxd_value[12];
  int64_t is_user;
} cyberdog_msg__msg__YamlParam;

// Struct for a sequence of cyberdog_msg__msg__YamlParam.
typedef struct cyberdog_msg__msg__YamlParam__Sequence
{
  cyberdog_msg__msg__YamlParam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cyberdog_msg__msg__YamlParam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CYBERDOG_MSG__MSG__DETAIL__YAML_PARAM__STRUCT_H_
