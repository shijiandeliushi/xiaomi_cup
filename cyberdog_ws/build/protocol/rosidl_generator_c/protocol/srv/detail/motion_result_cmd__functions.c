// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:srv/MotionResultCmd.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/motion_result_cmd__functions.h"

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
// Member `gait_toml`
// Member `toml_data`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__srv__MotionResultCmd_Request__init(protocol__srv__MotionResultCmd_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motion_id
  // cmd_source
  // vel_des
  if (!rosidl_runtime_c__float__Sequence__init(&msg->vel_des, 0)) {
    protocol__srv__MotionResultCmd_Request__fini(msg);
    return false;
  }
  // rpy_des
  if (!rosidl_runtime_c__float__Sequence__init(&msg->rpy_des, 0)) {
    protocol__srv__MotionResultCmd_Request__fini(msg);
    return false;
  }
  // pos_des
  if (!rosidl_runtime_c__float__Sequence__init(&msg->pos_des, 0)) {
    protocol__srv__MotionResultCmd_Request__fini(msg);
    return false;
  }
  // acc_des
  if (!rosidl_runtime_c__float__Sequence__init(&msg->acc_des, 0)) {
    protocol__srv__MotionResultCmd_Request__fini(msg);
    return false;
  }
  // ctrl_point
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ctrl_point, 0)) {
    protocol__srv__MotionResultCmd_Request__fini(msg);
    return false;
  }
  // foot_pose
  if (!rosidl_runtime_c__float__Sequence__init(&msg->foot_pose, 0)) {
    protocol__srv__MotionResultCmd_Request__fini(msg);
    return false;
  }
  // step_height
  if (!rosidl_runtime_c__float__Sequence__init(&msg->step_height, 0)) {
    protocol__srv__MotionResultCmd_Request__fini(msg);
    return false;
  }
  // duration
  // value
  // contact
  // gait_toml
  if (!rosidl_runtime_c__String__init(&msg->gait_toml)) {
    protocol__srv__MotionResultCmd_Request__fini(msg);
    return false;
  }
  // toml_data
  if (!rosidl_runtime_c__String__init(&msg->toml_data)) {
    protocol__srv__MotionResultCmd_Request__fini(msg);
    return false;
  }
  return true;
}

void
protocol__srv__MotionResultCmd_Request__fini(protocol__srv__MotionResultCmd_Request * msg)
{
  if (!msg) {
    return;
  }
  // motion_id
  // cmd_source
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
  // duration
  // value
  // contact
  // gait_toml
  rosidl_runtime_c__String__fini(&msg->gait_toml);
  // toml_data
  rosidl_runtime_c__String__fini(&msg->toml_data);
}

bool
protocol__srv__MotionResultCmd_Request__are_equal(const protocol__srv__MotionResultCmd_Request * lhs, const protocol__srv__MotionResultCmd_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motion_id
  if (lhs->motion_id != rhs->motion_id) {
    return false;
  }
  // cmd_source
  if (lhs->cmd_source != rhs->cmd_source) {
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
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // contact
  if (lhs->contact != rhs->contact) {
    return false;
  }
  // gait_toml
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gait_toml), &(rhs->gait_toml)))
  {
    return false;
  }
  // toml_data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->toml_data), &(rhs->toml_data)))
  {
    return false;
  }
  return true;
}

bool
protocol__srv__MotionResultCmd_Request__copy(
  const protocol__srv__MotionResultCmd_Request * input,
  protocol__srv__MotionResultCmd_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motion_id
  output->motion_id = input->motion_id;
  // cmd_source
  output->cmd_source = input->cmd_source;
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
  // duration
  output->duration = input->duration;
  // value
  output->value = input->value;
  // contact
  output->contact = input->contact;
  // gait_toml
  if (!rosidl_runtime_c__String__copy(
      &(input->gait_toml), &(output->gait_toml)))
  {
    return false;
  }
  // toml_data
  if (!rosidl_runtime_c__String__copy(
      &(input->toml_data), &(output->toml_data)))
  {
    return false;
  }
  return true;
}

protocol__srv__MotionResultCmd_Request *
protocol__srv__MotionResultCmd_Request__create()
{
  protocol__srv__MotionResultCmd_Request * msg = (protocol__srv__MotionResultCmd_Request *)malloc(sizeof(protocol__srv__MotionResultCmd_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__MotionResultCmd_Request));
  bool success = protocol__srv__MotionResultCmd_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__MotionResultCmd_Request__destroy(protocol__srv__MotionResultCmd_Request * msg)
{
  if (msg) {
    protocol__srv__MotionResultCmd_Request__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__MotionResultCmd_Request__Sequence__init(protocol__srv__MotionResultCmd_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__MotionResultCmd_Request * data = NULL;
  if (size) {
    data = (protocol__srv__MotionResultCmd_Request *)calloc(size, sizeof(protocol__srv__MotionResultCmd_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__MotionResultCmd_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__MotionResultCmd_Request__fini(&data[i - 1]);
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
protocol__srv__MotionResultCmd_Request__Sequence__fini(protocol__srv__MotionResultCmd_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__MotionResultCmd_Request__fini(&array->data[i]);
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

protocol__srv__MotionResultCmd_Request__Sequence *
protocol__srv__MotionResultCmd_Request__Sequence__create(size_t size)
{
  protocol__srv__MotionResultCmd_Request__Sequence * array = (protocol__srv__MotionResultCmd_Request__Sequence *)malloc(sizeof(protocol__srv__MotionResultCmd_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__MotionResultCmd_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__MotionResultCmd_Request__Sequence__destroy(protocol__srv__MotionResultCmd_Request__Sequence * array)
{
  if (array) {
    protocol__srv__MotionResultCmd_Request__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__MotionResultCmd_Request__Sequence__are_equal(const protocol__srv__MotionResultCmd_Request__Sequence * lhs, const protocol__srv__MotionResultCmd_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__MotionResultCmd_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__MotionResultCmd_Request__Sequence__copy(
  const protocol__srv__MotionResultCmd_Request__Sequence * input,
  protocol__srv__MotionResultCmd_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__MotionResultCmd_Request);
    protocol__srv__MotionResultCmd_Request * data =
      (protocol__srv__MotionResultCmd_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__MotionResultCmd_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__MotionResultCmd_Request__fini(&data[i]);
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
    if (!protocol__srv__MotionResultCmd_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
protocol__srv__MotionResultCmd_Response__init(protocol__srv__MotionResultCmd_Response * msg)
{
  if (!msg) {
    return false;
  }
  // motion_id
  // result
  // code
  return true;
}

void
protocol__srv__MotionResultCmd_Response__fini(protocol__srv__MotionResultCmd_Response * msg)
{
  if (!msg) {
    return;
  }
  // motion_id
  // result
  // code
}

bool
protocol__srv__MotionResultCmd_Response__are_equal(const protocol__srv__MotionResultCmd_Response * lhs, const protocol__srv__MotionResultCmd_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motion_id
  if (lhs->motion_id != rhs->motion_id) {
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
protocol__srv__MotionResultCmd_Response__copy(
  const protocol__srv__MotionResultCmd_Response * input,
  protocol__srv__MotionResultCmd_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // motion_id
  output->motion_id = input->motion_id;
  // result
  output->result = input->result;
  // code
  output->code = input->code;
  return true;
}

protocol__srv__MotionResultCmd_Response *
protocol__srv__MotionResultCmd_Response__create()
{
  protocol__srv__MotionResultCmd_Response * msg = (protocol__srv__MotionResultCmd_Response *)malloc(sizeof(protocol__srv__MotionResultCmd_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__MotionResultCmd_Response));
  bool success = protocol__srv__MotionResultCmd_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__MotionResultCmd_Response__destroy(protocol__srv__MotionResultCmd_Response * msg)
{
  if (msg) {
    protocol__srv__MotionResultCmd_Response__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__MotionResultCmd_Response__Sequence__init(protocol__srv__MotionResultCmd_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__MotionResultCmd_Response * data = NULL;
  if (size) {
    data = (protocol__srv__MotionResultCmd_Response *)calloc(size, sizeof(protocol__srv__MotionResultCmd_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__MotionResultCmd_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__MotionResultCmd_Response__fini(&data[i - 1]);
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
protocol__srv__MotionResultCmd_Response__Sequence__fini(protocol__srv__MotionResultCmd_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__MotionResultCmd_Response__fini(&array->data[i]);
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

protocol__srv__MotionResultCmd_Response__Sequence *
protocol__srv__MotionResultCmd_Response__Sequence__create(size_t size)
{
  protocol__srv__MotionResultCmd_Response__Sequence * array = (protocol__srv__MotionResultCmd_Response__Sequence *)malloc(sizeof(protocol__srv__MotionResultCmd_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__MotionResultCmd_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__MotionResultCmd_Response__Sequence__destroy(protocol__srv__MotionResultCmd_Response__Sequence * array)
{
  if (array) {
    protocol__srv__MotionResultCmd_Response__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__MotionResultCmd_Response__Sequence__are_equal(const protocol__srv__MotionResultCmd_Response__Sequence * lhs, const protocol__srv__MotionResultCmd_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__MotionResultCmd_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__MotionResultCmd_Response__Sequence__copy(
  const protocol__srv__MotionResultCmd_Response__Sequence * input,
  protocol__srv__MotionResultCmd_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__MotionResultCmd_Response);
    protocol__srv__MotionResultCmd_Response * data =
      (protocol__srv__MotionResultCmd_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__MotionResultCmd_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__MotionResultCmd_Response__fini(&data[i]);
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
    if (!protocol__srv__MotionResultCmd_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
