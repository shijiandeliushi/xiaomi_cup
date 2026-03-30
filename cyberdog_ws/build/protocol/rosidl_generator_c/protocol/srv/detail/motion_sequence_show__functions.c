// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:srv/MotionSequenceShow.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/motion_sequence_show__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `gait_list`
#include "protocol/msg/detail/motion_sequence_gait__functions.h"
// Member `pace_list`
#include "protocol/msg/detail/motion_sequence_pace__functions.h"
// Member `gait_toml_list`
// Member `pace_toml_list`
// Member `gait_toml`
// Member `pace_toml`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__srv__MotionSequenceShow_Request__init(protocol__srv__MotionSequenceShow_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motion_id
  // cmd_source
  // duration
  // gait_list
  if (!protocol__msg__MotionSequenceGait__Sequence__init(&msg->gait_list, 0)) {
    protocol__srv__MotionSequenceShow_Request__fini(msg);
    return false;
  }
  // pace_list
  if (!protocol__msg__MotionSequencePace__Sequence__init(&msg->pace_list, 0)) {
    protocol__srv__MotionSequenceShow_Request__fini(msg);
    return false;
  }
  // gait_toml_list
  if (!rosidl_runtime_c__String__Sequence__init(&msg->gait_toml_list, 0)) {
    protocol__srv__MotionSequenceShow_Request__fini(msg);
    return false;
  }
  // pace_toml_list
  if (!rosidl_runtime_c__String__Sequence__init(&msg->pace_toml_list, 0)) {
    protocol__srv__MotionSequenceShow_Request__fini(msg);
    return false;
  }
  // gait_toml
  if (!rosidl_runtime_c__String__init(&msg->gait_toml)) {
    protocol__srv__MotionSequenceShow_Request__fini(msg);
    return false;
  }
  // pace_toml
  if (!rosidl_runtime_c__String__init(&msg->pace_toml)) {
    protocol__srv__MotionSequenceShow_Request__fini(msg);
    return false;
  }
  return true;
}

void
protocol__srv__MotionSequenceShow_Request__fini(protocol__srv__MotionSequenceShow_Request * msg)
{
  if (!msg) {
    return;
  }
  // motion_id
  // cmd_source
  // duration
  // gait_list
  protocol__msg__MotionSequenceGait__Sequence__fini(&msg->gait_list);
  // pace_list
  protocol__msg__MotionSequencePace__Sequence__fini(&msg->pace_list);
  // gait_toml_list
  rosidl_runtime_c__String__Sequence__fini(&msg->gait_toml_list);
  // pace_toml_list
  rosidl_runtime_c__String__Sequence__fini(&msg->pace_toml_list);
  // gait_toml
  rosidl_runtime_c__String__fini(&msg->gait_toml);
  // pace_toml
  rosidl_runtime_c__String__fini(&msg->pace_toml);
}

bool
protocol__srv__MotionSequenceShow_Request__are_equal(const protocol__srv__MotionSequenceShow_Request * lhs, const protocol__srv__MotionSequenceShow_Request * rhs)
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
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // gait_list
  if (!protocol__msg__MotionSequenceGait__Sequence__are_equal(
      &(lhs->gait_list), &(rhs->gait_list)))
  {
    return false;
  }
  // pace_list
  if (!protocol__msg__MotionSequencePace__Sequence__are_equal(
      &(lhs->pace_list), &(rhs->pace_list)))
  {
    return false;
  }
  // gait_toml_list
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->gait_toml_list), &(rhs->gait_toml_list)))
  {
    return false;
  }
  // pace_toml_list
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->pace_toml_list), &(rhs->pace_toml_list)))
  {
    return false;
  }
  // gait_toml
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gait_toml), &(rhs->gait_toml)))
  {
    return false;
  }
  // pace_toml
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pace_toml), &(rhs->pace_toml)))
  {
    return false;
  }
  return true;
}

bool
protocol__srv__MotionSequenceShow_Request__copy(
  const protocol__srv__MotionSequenceShow_Request * input,
  protocol__srv__MotionSequenceShow_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motion_id
  output->motion_id = input->motion_id;
  // cmd_source
  output->cmd_source = input->cmd_source;
  // duration
  output->duration = input->duration;
  // gait_list
  if (!protocol__msg__MotionSequenceGait__Sequence__copy(
      &(input->gait_list), &(output->gait_list)))
  {
    return false;
  }
  // pace_list
  if (!protocol__msg__MotionSequencePace__Sequence__copy(
      &(input->pace_list), &(output->pace_list)))
  {
    return false;
  }
  // gait_toml_list
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->gait_toml_list), &(output->gait_toml_list)))
  {
    return false;
  }
  // pace_toml_list
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->pace_toml_list), &(output->pace_toml_list)))
  {
    return false;
  }
  // gait_toml
  if (!rosidl_runtime_c__String__copy(
      &(input->gait_toml), &(output->gait_toml)))
  {
    return false;
  }
  // pace_toml
  if (!rosidl_runtime_c__String__copy(
      &(input->pace_toml), &(output->pace_toml)))
  {
    return false;
  }
  return true;
}

protocol__srv__MotionSequenceShow_Request *
protocol__srv__MotionSequenceShow_Request__create()
{
  protocol__srv__MotionSequenceShow_Request * msg = (protocol__srv__MotionSequenceShow_Request *)malloc(sizeof(protocol__srv__MotionSequenceShow_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__MotionSequenceShow_Request));
  bool success = protocol__srv__MotionSequenceShow_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__MotionSequenceShow_Request__destroy(protocol__srv__MotionSequenceShow_Request * msg)
{
  if (msg) {
    protocol__srv__MotionSequenceShow_Request__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__MotionSequenceShow_Request__Sequence__init(protocol__srv__MotionSequenceShow_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__MotionSequenceShow_Request * data = NULL;
  if (size) {
    data = (protocol__srv__MotionSequenceShow_Request *)calloc(size, sizeof(protocol__srv__MotionSequenceShow_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__MotionSequenceShow_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__MotionSequenceShow_Request__fini(&data[i - 1]);
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
protocol__srv__MotionSequenceShow_Request__Sequence__fini(protocol__srv__MotionSequenceShow_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__MotionSequenceShow_Request__fini(&array->data[i]);
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

protocol__srv__MotionSequenceShow_Request__Sequence *
protocol__srv__MotionSequenceShow_Request__Sequence__create(size_t size)
{
  protocol__srv__MotionSequenceShow_Request__Sequence * array = (protocol__srv__MotionSequenceShow_Request__Sequence *)malloc(sizeof(protocol__srv__MotionSequenceShow_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__MotionSequenceShow_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__MotionSequenceShow_Request__Sequence__destroy(protocol__srv__MotionSequenceShow_Request__Sequence * array)
{
  if (array) {
    protocol__srv__MotionSequenceShow_Request__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__MotionSequenceShow_Request__Sequence__are_equal(const protocol__srv__MotionSequenceShow_Request__Sequence * lhs, const protocol__srv__MotionSequenceShow_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__MotionSequenceShow_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__MotionSequenceShow_Request__Sequence__copy(
  const protocol__srv__MotionSequenceShow_Request__Sequence * input,
  protocol__srv__MotionSequenceShow_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__MotionSequenceShow_Request);
    protocol__srv__MotionSequenceShow_Request * data =
      (protocol__srv__MotionSequenceShow_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__MotionSequenceShow_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__MotionSequenceShow_Request__fini(&data[i]);
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
    if (!protocol__srv__MotionSequenceShow_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `describe`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
protocol__srv__MotionSequenceShow_Response__init(protocol__srv__MotionSequenceShow_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  // code
  // describe
  if (!rosidl_runtime_c__String__init(&msg->describe)) {
    protocol__srv__MotionSequenceShow_Response__fini(msg);
    return false;
  }
  // motion_id
  return true;
}

void
protocol__srv__MotionSequenceShow_Response__fini(protocol__srv__MotionSequenceShow_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  // code
  // describe
  rosidl_runtime_c__String__fini(&msg->describe);
  // motion_id
}

bool
protocol__srv__MotionSequenceShow_Response__are_equal(const protocol__srv__MotionSequenceShow_Response * lhs, const protocol__srv__MotionSequenceShow_Response * rhs)
{
  if (!lhs || !rhs) {
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
  // describe
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->describe), &(rhs->describe)))
  {
    return false;
  }
  // motion_id
  if (lhs->motion_id != rhs->motion_id) {
    return false;
  }
  return true;
}

bool
protocol__srv__MotionSequenceShow_Response__copy(
  const protocol__srv__MotionSequenceShow_Response * input,
  protocol__srv__MotionSequenceShow_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  // code
  output->code = input->code;
  // describe
  if (!rosidl_runtime_c__String__copy(
      &(input->describe), &(output->describe)))
  {
    return false;
  }
  // motion_id
  output->motion_id = input->motion_id;
  return true;
}

protocol__srv__MotionSequenceShow_Response *
protocol__srv__MotionSequenceShow_Response__create()
{
  protocol__srv__MotionSequenceShow_Response * msg = (protocol__srv__MotionSequenceShow_Response *)malloc(sizeof(protocol__srv__MotionSequenceShow_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__MotionSequenceShow_Response));
  bool success = protocol__srv__MotionSequenceShow_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__MotionSequenceShow_Response__destroy(protocol__srv__MotionSequenceShow_Response * msg)
{
  if (msg) {
    protocol__srv__MotionSequenceShow_Response__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__MotionSequenceShow_Response__Sequence__init(protocol__srv__MotionSequenceShow_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__MotionSequenceShow_Response * data = NULL;
  if (size) {
    data = (protocol__srv__MotionSequenceShow_Response *)calloc(size, sizeof(protocol__srv__MotionSequenceShow_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__MotionSequenceShow_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__MotionSequenceShow_Response__fini(&data[i - 1]);
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
protocol__srv__MotionSequenceShow_Response__Sequence__fini(protocol__srv__MotionSequenceShow_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__MotionSequenceShow_Response__fini(&array->data[i]);
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

protocol__srv__MotionSequenceShow_Response__Sequence *
protocol__srv__MotionSequenceShow_Response__Sequence__create(size_t size)
{
  protocol__srv__MotionSequenceShow_Response__Sequence * array = (protocol__srv__MotionSequenceShow_Response__Sequence *)malloc(sizeof(protocol__srv__MotionSequenceShow_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__MotionSequenceShow_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__MotionSequenceShow_Response__Sequence__destroy(protocol__srv__MotionSequenceShow_Response__Sequence * array)
{
  if (array) {
    protocol__srv__MotionSequenceShow_Response__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__MotionSequenceShow_Response__Sequence__are_equal(const protocol__srv__MotionSequenceShow_Response__Sequence * lhs, const protocol__srv__MotionSequenceShow_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__MotionSequenceShow_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__MotionSequenceShow_Response__Sequence__copy(
  const protocol__srv__MotionSequenceShow_Response__Sequence * input,
  protocol__srv__MotionSequenceShow_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__MotionSequenceShow_Response);
    protocol__srv__MotionSequenceShow_Response * data =
      (protocol__srv__MotionSequenceShow_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__MotionSequenceShow_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__MotionSequenceShow_Response__fini(&data[i]);
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
    if (!protocol__srv__MotionSequenceShow_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
