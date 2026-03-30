// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from protocol:msg/MotionServoCmd.idl
// generated code does not contain a copyright notice

#ifndef PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__FUNCTIONS_H_
#define PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "protocol/msg/rosidl_generator_c__visibility_control.h"

#include "protocol/msg/detail/motion_servo_cmd__struct.h"

/// Initialize msg/MotionServoCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * protocol__msg__MotionServoCmd
 * )) before or use
 * protocol__msg__MotionServoCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__MotionServoCmd__init(protocol__msg__MotionServoCmd * msg);

/// Finalize msg/MotionServoCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__msg__MotionServoCmd__fini(protocol__msg__MotionServoCmd * msg);

/// Create msg/MotionServoCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * protocol__msg__MotionServoCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
protocol__msg__MotionServoCmd *
protocol__msg__MotionServoCmd__create();

/// Destroy msg/MotionServoCmd message.
/**
 * It calls
 * protocol__msg__MotionServoCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__msg__MotionServoCmd__destroy(protocol__msg__MotionServoCmd * msg);

/// Check for msg/MotionServoCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__MotionServoCmd__are_equal(const protocol__msg__MotionServoCmd * lhs, const protocol__msg__MotionServoCmd * rhs);

/// Copy a msg/MotionServoCmd message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__MotionServoCmd__copy(
  const protocol__msg__MotionServoCmd * input,
  protocol__msg__MotionServoCmd * output);

/// Initialize array of msg/MotionServoCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * protocol__msg__MotionServoCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__MotionServoCmd__Sequence__init(protocol__msg__MotionServoCmd__Sequence * array, size_t size);

/// Finalize array of msg/MotionServoCmd messages.
/**
 * It calls
 * protocol__msg__MotionServoCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__msg__MotionServoCmd__Sequence__fini(protocol__msg__MotionServoCmd__Sequence * array);

/// Create array of msg/MotionServoCmd messages.
/**
 * It allocates the memory for the array and calls
 * protocol__msg__MotionServoCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
protocol__msg__MotionServoCmd__Sequence *
protocol__msg__MotionServoCmd__Sequence__create(size_t size);

/// Destroy array of msg/MotionServoCmd messages.
/**
 * It calls
 * protocol__msg__MotionServoCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
void
protocol__msg__MotionServoCmd__Sequence__destroy(protocol__msg__MotionServoCmd__Sequence * array);

/// Check for msg/MotionServoCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__MotionServoCmd__Sequence__are_equal(const protocol__msg__MotionServoCmd__Sequence * lhs, const protocol__msg__MotionServoCmd__Sequence * rhs);

/// Copy an array of msg/MotionServoCmd messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_protocol
bool
protocol__msg__MotionServoCmd__Sequence__copy(
  const protocol__msg__MotionServoCmd__Sequence * input,
  protocol__msg__MotionServoCmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PROTOCOL__MSG__DETAIL__MOTION_SERVO_CMD__FUNCTIONS_H_
