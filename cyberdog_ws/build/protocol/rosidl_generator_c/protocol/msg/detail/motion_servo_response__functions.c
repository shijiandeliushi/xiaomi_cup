// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/MotionServoResponse.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/motion_servo_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
protocol__msg__MotionServoResponse__init(protocol__msg__MotionServoResponse * msg)
{
  if (!msg) {
    return false;
  }
  // motion_id
  // cmd_id
  // order_process_bar
  // status
  // result
  // code
  return true;
}

void
protocol__msg__MotionServoResponse__fini(protocol__msg__MotionServoResponse * msg)
{
  if (!msg) {
    return;
  }
  // motion_id
  // cmd_id
  // order_process_bar
  // status
  // result
  // code
}

bool
protocol__msg__MotionServoResponse__are_equal(const protocol__msg__MotionServoResponse * lhs, const protocol__msg__MotionServoResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motion_id
  if (lhs->motion_id != rhs->motion_id) {
    return false;
  }
  // cmd_id
  if (lhs->cmd_id != rhs->cmd_id) {
    return false;
  }
  // order_process_bar
  if (lhs->order_process_bar != rhs->order_process_bar) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  return true;
}

bool
protocol__msg__MotionServoResponse__copy(
  const protocol__msg__MotionServoResponse * input,
  protocol__msg__MotionServoResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // motion_id
  output->motion_id = input->motion_id;
  // cmd_id
  output->cmd_id = input->cmd_id;
  // order_process_bar
  output->order_process_bar = input->order_process_bar;
  // status
  output->status = input->status;
  // result
  output->result = input->result;
  // code
  output->code = input->code;
  return true;
}

protocol__msg__MotionServoResponse *
protocol__msg__MotionServoResponse__create()
{
  protocol__msg__MotionServoResponse * msg = (protocol__msg__MotionServoResponse *)malloc(sizeof(protocol__msg__MotionServoResponse));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__MotionServoResponse));
  bool success = protocol__msg__MotionServoResponse__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__MotionServoResponse__destroy(protocol__msg__MotionServoResponse * msg)
{
  if (msg) {
    protocol__msg__MotionServoResponse__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__MotionServoResponse__Sequence__init(protocol__msg__MotionServoResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__MotionServoResponse * data = NULL;
  if (size) {
    data = (protocol__msg__MotionServoResponse *)calloc(size, sizeof(protocol__msg__MotionServoResponse));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__MotionServoResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__MotionServoResponse__fini(&data[i - 1]);
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
protocol__msg__MotionServoResponse__Sequence__fini(protocol__msg__MotionServoResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__MotionServoResponse__fini(&array->data[i]);
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

protocol__msg__MotionServoResponse__Sequence *
protocol__msg__MotionServoResponse__Sequence__create(size_t size)
{
  protocol__msg__MotionServoResponse__Sequence * array = (protocol__msg__MotionServoResponse__Sequence *)malloc(sizeof(protocol__msg__MotionServoResponse__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__MotionServoResponse__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__MotionServoResponse__Sequence__destroy(protocol__msg__MotionServoResponse__Sequence * array)
{
  if (array) {
    protocol__msg__MotionServoResponse__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__MotionServoResponse__Sequence__are_equal(const protocol__msg__MotionServoResponse__Sequence * lhs, const protocol__msg__MotionServoResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__MotionServoResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__MotionServoResponse__Sequence__copy(
  const protocol__msg__MotionServoResponse__Sequence * input,
  protocol__msg__MotionServoResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__MotionServoResponse);
    protocol__msg__MotionServoResponse * data =
      (protocol__msg__MotionServoResponse *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__MotionServoResponse__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__MotionServoResponse__fini(&data[i]);
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
    if (!protocol__msg__MotionServoResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
