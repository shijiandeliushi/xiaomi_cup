// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:srv/AlgoManager.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/algo_manager__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `algo_enable`
// Member `algo_disable`
#include "protocol/msg/detail/algo_list__functions.h"

bool
protocol__srv__AlgoManager_Request__init(protocol__srv__AlgoManager_Request * msg)
{
  if (!msg) {
    return false;
  }
  // algo_enable
  if (!protocol__msg__AlgoList__Sequence__init(&msg->algo_enable, 0)) {
    protocol__srv__AlgoManager_Request__fini(msg);
    return false;
  }
  // algo_disable
  if (!protocol__msg__AlgoList__Sequence__init(&msg->algo_disable, 0)) {
    protocol__srv__AlgoManager_Request__fini(msg);
    return false;
  }
  // open_age
  // open_emotion
  return true;
}

void
protocol__srv__AlgoManager_Request__fini(protocol__srv__AlgoManager_Request * msg)
{
  if (!msg) {
    return;
  }
  // algo_enable
  protocol__msg__AlgoList__Sequence__fini(&msg->algo_enable);
  // algo_disable
  protocol__msg__AlgoList__Sequence__fini(&msg->algo_disable);
  // open_age
  // open_emotion
}

bool
protocol__srv__AlgoManager_Request__are_equal(const protocol__srv__AlgoManager_Request * lhs, const protocol__srv__AlgoManager_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // algo_enable
  if (!protocol__msg__AlgoList__Sequence__are_equal(
      &(lhs->algo_enable), &(rhs->algo_enable)))
  {
    return false;
  }
  // algo_disable
  if (!protocol__msg__AlgoList__Sequence__are_equal(
      &(lhs->algo_disable), &(rhs->algo_disable)))
  {
    return false;
  }
  // open_age
  if (lhs->open_age != rhs->open_age) {
    return false;
  }
  // open_emotion
  if (lhs->open_emotion != rhs->open_emotion) {
    return false;
  }
  return true;
}

bool
protocol__srv__AlgoManager_Request__copy(
  const protocol__srv__AlgoManager_Request * input,
  protocol__srv__AlgoManager_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // algo_enable
  if (!protocol__msg__AlgoList__Sequence__copy(
      &(input->algo_enable), &(output->algo_enable)))
  {
    return false;
  }
  // algo_disable
  if (!protocol__msg__AlgoList__Sequence__copy(
      &(input->algo_disable), &(output->algo_disable)))
  {
    return false;
  }
  // open_age
  output->open_age = input->open_age;
  // open_emotion
  output->open_emotion = input->open_emotion;
  return true;
}

protocol__srv__AlgoManager_Request *
protocol__srv__AlgoManager_Request__create()
{
  protocol__srv__AlgoManager_Request * msg = (protocol__srv__AlgoManager_Request *)malloc(sizeof(protocol__srv__AlgoManager_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__AlgoManager_Request));
  bool success = protocol__srv__AlgoManager_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__AlgoManager_Request__destroy(protocol__srv__AlgoManager_Request * msg)
{
  if (msg) {
    protocol__srv__AlgoManager_Request__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__AlgoManager_Request__Sequence__init(protocol__srv__AlgoManager_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__AlgoManager_Request * data = NULL;
  if (size) {
    data = (protocol__srv__AlgoManager_Request *)calloc(size, sizeof(protocol__srv__AlgoManager_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__AlgoManager_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__AlgoManager_Request__fini(&data[i - 1]);
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
protocol__srv__AlgoManager_Request__Sequence__fini(protocol__srv__AlgoManager_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__AlgoManager_Request__fini(&array->data[i]);
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

protocol__srv__AlgoManager_Request__Sequence *
protocol__srv__AlgoManager_Request__Sequence__create(size_t size)
{
  protocol__srv__AlgoManager_Request__Sequence * array = (protocol__srv__AlgoManager_Request__Sequence *)malloc(sizeof(protocol__srv__AlgoManager_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__AlgoManager_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__AlgoManager_Request__Sequence__destroy(protocol__srv__AlgoManager_Request__Sequence * array)
{
  if (array) {
    protocol__srv__AlgoManager_Request__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__AlgoManager_Request__Sequence__are_equal(const protocol__srv__AlgoManager_Request__Sequence * lhs, const protocol__srv__AlgoManager_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__AlgoManager_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__AlgoManager_Request__Sequence__copy(
  const protocol__srv__AlgoManager_Request__Sequence * input,
  protocol__srv__AlgoManager_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__AlgoManager_Request);
    protocol__srv__AlgoManager_Request * data =
      (protocol__srv__AlgoManager_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__AlgoManager_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__AlgoManager_Request__fini(&data[i]);
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
    if (!protocol__srv__AlgoManager_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
protocol__srv__AlgoManager_Response__init(protocol__srv__AlgoManager_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result_enable
  // result_disable
  // code
  return true;
}

void
protocol__srv__AlgoManager_Response__fini(protocol__srv__AlgoManager_Response * msg)
{
  if (!msg) {
    return;
  }
  // result_enable
  // result_disable
  // code
}

bool
protocol__srv__AlgoManager_Response__are_equal(const protocol__srv__AlgoManager_Response * lhs, const protocol__srv__AlgoManager_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result_enable
  if (lhs->result_enable != rhs->result_enable) {
    return false;
  }
  // result_disable
  if (lhs->result_disable != rhs->result_disable) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  return true;
}

bool
protocol__srv__AlgoManager_Response__copy(
  const protocol__srv__AlgoManager_Response * input,
  protocol__srv__AlgoManager_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result_enable
  output->result_enable = input->result_enable;
  // result_disable
  output->result_disable = input->result_disable;
  // code
  output->code = input->code;
  return true;
}

protocol__srv__AlgoManager_Response *
protocol__srv__AlgoManager_Response__create()
{
  protocol__srv__AlgoManager_Response * msg = (protocol__srv__AlgoManager_Response *)malloc(sizeof(protocol__srv__AlgoManager_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__AlgoManager_Response));
  bool success = protocol__srv__AlgoManager_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__AlgoManager_Response__destroy(protocol__srv__AlgoManager_Response * msg)
{
  if (msg) {
    protocol__srv__AlgoManager_Response__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__AlgoManager_Response__Sequence__init(protocol__srv__AlgoManager_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__AlgoManager_Response * data = NULL;
  if (size) {
    data = (protocol__srv__AlgoManager_Response *)calloc(size, sizeof(protocol__srv__AlgoManager_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__AlgoManager_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__AlgoManager_Response__fini(&data[i - 1]);
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
protocol__srv__AlgoManager_Response__Sequence__fini(protocol__srv__AlgoManager_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__AlgoManager_Response__fini(&array->data[i]);
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

protocol__srv__AlgoManager_Response__Sequence *
protocol__srv__AlgoManager_Response__Sequence__create(size_t size)
{
  protocol__srv__AlgoManager_Response__Sequence * array = (protocol__srv__AlgoManager_Response__Sequence *)malloc(sizeof(protocol__srv__AlgoManager_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__AlgoManager_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__AlgoManager_Response__Sequence__destroy(protocol__srv__AlgoManager_Response__Sequence * array)
{
  if (array) {
    protocol__srv__AlgoManager_Response__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__AlgoManager_Response__Sequence__are_equal(const protocol__srv__AlgoManager_Response__Sequence * lhs, const protocol__srv__AlgoManager_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__AlgoManager_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__AlgoManager_Response__Sequence__copy(
  const protocol__srv__AlgoManager_Response__Sequence * input,
  protocol__srv__AlgoManager_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__AlgoManager_Response);
    protocol__srv__AlgoManager_Response * data =
      (protocol__srv__AlgoManager_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__AlgoManager_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__AlgoManager_Response__fini(&data[i]);
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
    if (!protocol__srv__AlgoManager_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
