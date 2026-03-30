// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:msg/MotionServoCmd.idl
// generated code does not contain a copyright notice
#include "protocol/msg/detail/motion_servo_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `vel_des`
// Member `rpy_des`
// Member `pos_des`
// Member `acc_des`
// Member `ctrl_point`
// Member `foot_pose`
// Member `step_height`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
protocol__msg__MotionServoCmd__init(protocol__msg__MotionServoCmd * msg)
{
  if (!msg) {
    return false;
  }
  // motion_id
  // cmd_type
  // cmd_source
  // value
  // vel_des
  if (!rosidl_runtime_c__float__Sequence__init(&msg->vel_des, 0)) {
    protocol__msg__MotionServoCmd__fini(msg);
    return false;
  }
  // rpy_des
  if (!rosidl_runtime_c__float__Sequence__init(&msg->rpy_des, 0)) {
    protocol__msg__MotionServoCmd__fini(msg);
    return false;
  }
  // pos_des
  if (!rosidl_runtime_c__float__Sequence__init(&msg->pos_des, 0)) {
    protocol__msg__MotionServoCmd__fini(msg);
    return false;
  }
  // acc_des
  if (!rosidl_runtime_c__float__Sequence__init(&msg->acc_des, 0)) {
    protocol__msg__MotionServoCmd__fini(msg);
    return false;
  }
  // ctrl_point
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ctrl_point, 0)) {
    protocol__msg__MotionServoCmd__fini(msg);
    return false;
  }
  // foot_pose
  if (!rosidl_runtime_c__float__Sequence__init(&msg->foot_pose, 0)) {
    protocol__msg__MotionServoCmd__fini(msg);
    return false;
  }
  // step_height
  if (!rosidl_runtime_c__float__Sequence__init(&msg->step_height, 0)) {
    protocol__msg__MotionServoCmd__fini(msg);
    return false;
  }
  return true;
}

void
protocol__msg__MotionServoCmd__fini(protocol__msg__MotionServoCmd * msg)
{
  if (!msg) {
    return;
  }
  // motion_id
  // cmd_type
  // cmd_source
  // value
  // vel_des
  rosidl_runtime_c__float__Sequence__fini(&msg->vel_des);
  // rpy_des
  rosidl_runtime_c__float__Sequence__fini(&msg->rpy_des);
  // pos_des
  rosidl_runtime_c__float__Sequence__fini(&msg->pos_des);
  // acc_des
  rosidl_runtime_c__float__Sequence__fini(&msg->acc_des);
  // ctrl_point
  rosidl_runtime_c__float__Sequence__fini(&msg->ctrl_point);
  // foot_pose
  rosidl_runtime_c__float__Sequence__fini(&msg->foot_pose);
  // step_height
  rosidl_runtime_c__float__Sequence__fini(&msg->step_height);
}

bool
protocol__msg__MotionServoCmd__are_equal(const protocol__msg__MotionServoCmd * lhs, const protocol__msg__MotionServoCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motion_id
  if (lhs->motion_id != rhs->motion_id) {
    return false;
  }
  // cmd_type
  if (lhs->cmd_type != rhs->cmd_type) {
    return false;
  }
  // cmd_source
  if (lhs->cmd_source != rhs->cmd_source) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // vel_des
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->vel_des), &(rhs->vel_des)))
  {
    return false;
  }
  // rpy_des
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->rpy_des), &(rhs->rpy_des)))
  {
    return false;
  }
  // pos_des
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->pos_des), &(rhs->pos_des)))
  {
    return false;
  }
  // acc_des
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->acc_des), &(rhs->acc_des)))
  {
    return false;
  }
  // ctrl_point
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->ctrl_point), &(rhs->ctrl_point)))
  {
    return false;
  }
  // foot_pose
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->foot_pose), &(rhs->foot_pose)))
  {
    return false;
  }
  // step_height
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->step_height), &(rhs->step_height)))
  {
    return false;
  }
  return true;
}

bool
protocol__msg__MotionServoCmd__copy(
  const protocol__msg__MotionServoCmd * input,
  protocol__msg__MotionServoCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // motion_id
  output->motion_id = input->motion_id;
  // cmd_type
  output->cmd_type = input->cmd_type;
  // cmd_source
  output->cmd_source = input->cmd_source;
  // value
  output->value = input->value;
  // vel_des
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->vel_des), &(output->vel_des)))
  {
    return false;
  }
  // rpy_des
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->rpy_des), &(output->rpy_des)))
  {
    return false;
  }
  // pos_des
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->pos_des), &(output->pos_des)))
  {
    return false;
  }
  // acc_des
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->acc_des), &(output->acc_des)))
  {
    return false;
  }
  // ctrl_point
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->ctrl_point), &(output->ctrl_point)))
  {
    return false;
  }
  // foot_pose
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->foot_pose), &(output->foot_pose)))
  {
    return false;
  }
  // step_height
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->step_height), &(output->step_height)))
  {
    return false;
  }
  return true;
}

protocol__msg__MotionServoCmd *
protocol__msg__MotionServoCmd__create()
{
  protocol__msg__MotionServoCmd * msg = (protocol__msg__MotionServoCmd *)malloc(sizeof(protocol__msg__MotionServoCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__msg__MotionServoCmd));
  bool success = protocol__msg__MotionServoCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__msg__MotionServoCmd__destroy(protocol__msg__MotionServoCmd * msg)
{
  if (msg) {
    protocol__msg__MotionServoCmd__fini(msg);
  }
  free(msg);
}


bool
protocol__msg__MotionServoCmd__Sequence__init(protocol__msg__MotionServoCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__msg__MotionServoCmd * data = NULL;
  if (size) {
    data = (protocol__msg__MotionServoCmd *)calloc(size, sizeof(protocol__msg__MotionServoCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__msg__MotionServoCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__msg__MotionServoCmd__fini(&data[i - 1]);
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
protocol__msg__MotionServoCmd__Sequence__fini(protocol__msg__MotionServoCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__msg__MotionServoCmd__fini(&array->data[i]);
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

protocol__msg__MotionServoCmd__Sequence *
protocol__msg__MotionServoCmd__Sequence__create(size_t size)
{
  protocol__msg__MotionServoCmd__Sequence * array = (protocol__msg__MotionServoCmd__Sequence *)malloc(sizeof(protocol__msg__MotionServoCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__msg__MotionServoCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__msg__MotionServoCmd__Sequence__destroy(protocol__msg__MotionServoCmd__Sequence * array)
{
  if (array) {
    protocol__msg__MotionServoCmd__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__msg__MotionServoCmd__Sequence__are_equal(const protocol__msg__MotionServoCmd__Sequence * lhs, const protocol__msg__MotionServoCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__msg__MotionServoCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__msg__MotionServoCmd__Sequence__copy(
  const protocol__msg__MotionServoCmd__Sequence * input,
  protocol__msg__MotionServoCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__msg__MotionServoCmd);
    protocol__msg__MotionServoCmd * data =
      (protocol__msg__MotionServoCmd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__msg__MotionServoCmd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__msg__MotionServoCmd__fini(&data[i]);
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
    if (!protocol__msg__MotionServoCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
