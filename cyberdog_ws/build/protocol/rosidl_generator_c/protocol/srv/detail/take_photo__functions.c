// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:srv/TakePhoto.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/take_photo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
protocol__srv__TakePhoto_Request__init(protocol__srv__TakePhoto_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
protocol__srv__TakePhoto_Request__fini(protocol__srv__TakePhoto_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
protocol__srv__TakePhoto_Request__are_equal(const protocol__srv__TakePhoto_Request * lhs, const protocol__srv__TakePhoto_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
protocol__srv__TakePhoto_Request__copy(
  const protocol__srv__TakePhoto_Request * input,
  protocol__srv__TakePhoto_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

protocol__srv__TakePhoto_Request *
protocol__srv__TakePhoto_Request__create()
{
  protocol__srv__TakePhoto_Request * msg = (protocol__srv__TakePhoto_Request *)malloc(sizeof(protocol__srv__TakePhoto_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__TakePhoto_Request));
  bool success = protocol__srv__TakePhoto_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__TakePhoto_Request__destroy(protocol__srv__TakePhoto_Request * msg)
{
  if (msg) {
    protocol__srv__TakePhoto_Request__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__TakePhoto_Request__Sequence__init(protocol__srv__TakePhoto_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__TakePhoto_Request * data = NULL;
  if (size) {
    data = (protocol__srv__TakePhoto_Request *)calloc(size, sizeof(protocol__srv__TakePhoto_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__TakePhoto_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__TakePhoto_Request__fini(&data[i - 1]);
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
protocol__srv__TakePhoto_Request__Sequence__fini(protocol__srv__TakePhoto_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__TakePhoto_Request__fini(&array->data[i]);
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

protocol__srv__TakePhoto_Request__Sequence *
protocol__srv__TakePhoto_Request__Sequence__create(size_t size)
{
  protocol__srv__TakePhoto_Request__Sequence * array = (protocol__srv__TakePhoto_Request__Sequence *)malloc(sizeof(protocol__srv__TakePhoto_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__TakePhoto_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__TakePhoto_Request__Sequence__destroy(protocol__srv__TakePhoto_Request__Sequence * array)
{
  if (array) {
    protocol__srv__TakePhoto_Request__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__TakePhoto_Request__Sequence__are_equal(const protocol__srv__TakePhoto_Request__Sequence * lhs, const protocol__srv__TakePhoto_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__TakePhoto_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__TakePhoto_Request__Sequence__copy(
  const protocol__srv__TakePhoto_Request__Sequence * input,
  protocol__srv__TakePhoto_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__TakePhoto_Request);
    protocol__srv__TakePhoto_Request * data =
      (protocol__srv__TakePhoto_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__TakePhoto_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__TakePhoto_Request__fini(&data[i]);
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
    if (!protocol__srv__TakePhoto_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `img`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
protocol__srv__TakePhoto_Response__init(protocol__srv__TakePhoto_Response * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    protocol__srv__TakePhoto_Response__fini(msg);
    return false;
  }
  // result
  // img
  if (!sensor_msgs__msg__Image__init(&msg->img)) {
    protocol__srv__TakePhoto_Response__fini(msg);
    return false;
  }
  // code
  return true;
}

void
protocol__srv__TakePhoto_Response__fini(protocol__srv__TakePhoto_Response * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // result
  // img
  sensor_msgs__msg__Image__fini(&msg->img);
  // code
}

bool
protocol__srv__TakePhoto_Response__are_equal(const protocol__srv__TakePhoto_Response * lhs, const protocol__srv__TakePhoto_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->img), &(rhs->img)))
  {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  return true;
}

bool
protocol__srv__TakePhoto_Response__copy(
  const protocol__srv__TakePhoto_Response * input,
  protocol__srv__TakePhoto_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // result
  output->result = input->result;
  // img
  if (!sensor_msgs__msg__Image__copy(
      &(input->img), &(output->img)))
  {
    return false;
  }
  // code
  output->code = input->code;
  return true;
}

protocol__srv__TakePhoto_Response *
protocol__srv__TakePhoto_Response__create()
{
  protocol__srv__TakePhoto_Response * msg = (protocol__srv__TakePhoto_Response *)malloc(sizeof(protocol__srv__TakePhoto_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__TakePhoto_Response));
  bool success = protocol__srv__TakePhoto_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__TakePhoto_Response__destroy(protocol__srv__TakePhoto_Response * msg)
{
  if (msg) {
    protocol__srv__TakePhoto_Response__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__TakePhoto_Response__Sequence__init(protocol__srv__TakePhoto_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__TakePhoto_Response * data = NULL;
  if (size) {
    data = (protocol__srv__TakePhoto_Response *)calloc(size, sizeof(protocol__srv__TakePhoto_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__TakePhoto_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__TakePhoto_Response__fini(&data[i - 1]);
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
protocol__srv__TakePhoto_Response__Sequence__fini(protocol__srv__TakePhoto_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__TakePhoto_Response__fini(&array->data[i]);
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

protocol__srv__TakePhoto_Response__Sequence *
protocol__srv__TakePhoto_Response__Sequence__create(size_t size)
{
  protocol__srv__TakePhoto_Response__Sequence * array = (protocol__srv__TakePhoto_Response__Sequence *)malloc(sizeof(protocol__srv__TakePhoto_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__TakePhoto_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__TakePhoto_Response__Sequence__destroy(protocol__srv__TakePhoto_Response__Sequence * array)
{
  if (array) {
    protocol__srv__TakePhoto_Response__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__TakePhoto_Response__Sequence__are_equal(const protocol__srv__TakePhoto_Response__Sequence * lhs, const protocol__srv__TakePhoto_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__TakePhoto_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__TakePhoto_Response__Sequence__copy(
  const protocol__srv__TakePhoto_Response__Sequence * input,
  protocol__srv__TakePhoto_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__TakePhoto_Response);
    protocol__srv__TakePhoto_Response * data =
      (protocol__srv__TakePhoto_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__TakePhoto_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__TakePhoto_Response__fini(&data[i]);
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
    if (!protocol__srv__TakePhoto_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
