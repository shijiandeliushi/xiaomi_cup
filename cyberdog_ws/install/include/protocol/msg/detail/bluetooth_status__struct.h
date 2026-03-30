// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from protocol:msg/BluetoothStatus.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__BLUETOOTH_STATUS__STRUCT_H_
#define PROTOCOL__MSG__DETAIL__BLUETOOTH_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BluetoothStatus in the package protocol.
typedef struct protocol__msg__BluetoothStatus
{
  int8_t advtiseable;
  int8_t connectable;
} protocol__msg__BluetoothStatus;

// Struct for a sequence of protocol__msg__BluetoothStatus.
typedef struct protocol__msg__BluetoothStatus__Sequence
{
  protocol__msg__BluetoothStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} protocol__msg__BluetoothStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__BLUETOOTH_STATUS__STRUCT_H_
