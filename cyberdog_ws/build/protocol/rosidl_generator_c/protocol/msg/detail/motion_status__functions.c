// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/MotionStatus.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/motion_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `motor_error`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
protocol__msg__MotionStatus__init(protocol__msg__MotionStatus * msg)
{
  if (!msg) {
    return false;
  }
  // motion_id
  // contact
  // order_process_bar
  // switch_status
  // ori_error
  // footpos_error
  // motor_error
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->motor_error, 0)) {
    protocol__msg__MotionStatus__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__MotionStatus__fini(protocol__msg__MotionStatus * msg)
{
  if (!msg) {
    return;
  }
  // motion_id
  // contact
  // order_process_bar
  // switch_status
  // ori_error
  // footpos_error
  // motor_error
  rosidl_runtime_c__int32__Sequence__fini(&msg->motor_error);
}

bool
protocol__msg__MotionStatus__are_equal(const protocol__msg__MotionStatus * lhs, const protocol__msg__MotionStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motion_id
  if (lhs->motion_id != rhs->motion_id) {
    return false;
  }
  // contact
  if (lhs->contact != rhs->contact) {
    return false;
  }
  // order_process_bar
  if (lhs->order_process_bar != rhs->order_process_bar) {
    return false;
  }
  // switch_status
  if (lhs->switch_status != rhs->switch_status) {
    return false;
  }
  // ori_error
  if (lhs->ori_error != rhs->ori_error) {
    return false;
  }
  // footpos_error
  if (lhs->footpos_error != rhs->footpos_error) {
    return false;
  }
  // motor_error
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->motor_error), &(rhs->motor_error)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__MotionStatus__copy(
  const protocol__msg__MotionStatus * input,
  protocol__msg__MotionStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // motion_id
  output->motion_id = input->motion_id;
  // contact
  output->contact = input->contact;
  // order_process_bar
  output->order_process_bar = input->order_process_bar;
  // switch_status
  output->switch_status = input->switch_status;
  // ori_error
  output->ori_error = input->ori_error;
  // footpos_error
  output->footpos_error = input->footpos_error;
  // motor_error
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->motor_error), &(output->motor_error)))
  {
    return false;
  }
  return true;
}

protocol__msg__MotionStatus *
protocol__msg__MotionStatus__create()
{
  protocol__msg__MotionStatus * msg = (protocol__msg__MotionStatus *)malloc(sizeof(protocol__msg__MotionStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__MotionStatus));
  bool success = protocol__msg__MotionStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__MotionStatus__destroy(protocol__msg__MotionStatus * msg)
{
  if (msg) {
    protocol__msg__MotionStatus__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__MotionStatus__Sequence__init(protocol__msg__MotionStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__MotionStatus * data = NULL;
  if (size) {
    data = (protocol__msg__MotionStatus *)calloc(size, sizeof(protocol__msg__MotionStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__MotionStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__MotionStatus__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
protocol__msg__MotionStatus__Sequence__fini(protocol__msg__MotionStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__MotionStatus__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

protocol__msg__MotionStatus__Sequence *
protocol__msg__MotionStatus__Sequence__create(size_t size)
{
  protocol__msg__MotionStatus__Sequence * array = (protocol__msg__MotionStatus__Sequence *)malloc(sizeof(protocol__msg__MotionStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__MotionStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__MotionStatus__Sequence__destroy(protocol__msg__MotionStatus__Sequence * array)
{
  if (array) {
    protocol__msg__MotionStatus__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__MotionStatus__Sequence__are_equal(const protocol__msg__MotionStatus__Sequence * lhs, const protocol__msg__MotionStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__MotionStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__MotionStatus__Sequence__copy(
  const protocol__msg__MotionStatus__Sequence * input,
  protocol__msg__MotionStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__MotionStatus);
    protocol__msg__MotionStatus * data =
      (protocol__msg__MotionStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__MotionStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__MotionStatus__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!protocol__msg__MotionStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
