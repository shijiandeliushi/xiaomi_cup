// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:srv/LedExecute.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/led_execute__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `client`
#include "rosidl_runtime_c/string_functions.h"

bool
protocol__srv__LedExecute_Request__init(protocol__srv__LedExecute_Request * msg)
{
  if (!msg) {
    return false;
  }
  // occupation
  // client
  if (!rosidl_runtime_c__String__init(&msg->client)) {
    protocol__srv__LedExecute_Request__fini(msg);
    return false;
  }
  // target
  // mode
  // effect
  // r_value
  // g_value
  // b_value
  return true;
}

void
protocol__srv__LedExecute_Request__fini(protocol__srv__LedExecute_Request * msg)
{
  if (!msg) {
    return;
  }
  // occupation
  // client
  rosidl_runtime_c__String__fini(&msg->client);
  // target
  // mode
  // effect
  // r_value
  // g_value
  // b_value
}

bool
protocol__srv__LedExecute_Request__are_equal(const protocol__srv__LedExecute_Request * lhs, const protocol__srv__LedExecute_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // occupation
  if (lhs->occupation != rhs->occupation) {
    return false;
  }
  // client
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->client), &(rhs->client)))
  {
    return false;
  }
  // target
  if (lhs->target != rhs->target) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // effect
  if (lhs->effect != rhs->effect) {
    return false;
  }
  // r_value
  if (lhs->r_value != rhs->r_value) {
    return false;
  }
  // g_value
  if (lhs->g_value != rhs->g_value) {
    return false;
  }
  // b_value
  if (lhs->b_value != rhs->b_value) {
    return false;
  }
  return true;
}

bool
protocol__srv__LedExecute_Request__copy(
  const protocol__srv__LedExecute_Request * input,
  protocol__srv__LedExecute_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // occupation
  output->occupation = input->occupation;
  // client
  if (!rosidl_runtime_c__String__copy(
      &(input->client), &(output->client)))
  {
    return false;
  }
  // target
  output->target = input->target;
  // mode
  output->mode = input->mode;
  // effect
  output->effect = input->effect;
  // r_value
  output->r_value = input->r_value;
  // g_value
  output->g_value = input->g_value;
  // b_value
  output->b_value = input->b_value;
  return true;
}

protocol__srv__LedExecute_Request *
protocol__srv__LedExecute_Request__create()
{
  protocol__srv__LedExecute_Request * msg = (protocol__srv__LedExecute_Request *)malloc(sizeof(protocol__srv__LedExecute_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__LedExecute_Request));
  bool success = protocol__srv__LedExecute_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__LedExecute_Request__destroy(protocol__srv__LedExecute_Request * msg)
{
  if (msg) {
    protocol__srv__LedExecute_Request__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__LedExecute_Request__Sequence__init(protocol__srv__LedExecute_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__LedExecute_Request * data = NULL;
  if (size) {
    data = (protocol__srv__LedExecute_Request *)calloc(size, sizeof(protocol__srv__LedExecute_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__LedExecute_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__LedExecute_Request__fini(&data[i - 1]);
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
protocol__srv__LedExecute_Request__Sequence__fini(protocol__srv__LedExecute_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__LedExecute_Request__fini(&array->data[i]);
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

protocol__srv__LedExecute_Request__Sequence *
protocol__srv__LedExecute_Request__Sequence__create(size_t size)
{
  protocol__srv__LedExecute_Request__Sequence * array = (protocol__srv__LedExecute_Request__Sequence *)malloc(sizeof(protocol__srv__LedExecute_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__LedExecute_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__LedExecute_Request__Sequence__destroy(protocol__srv__LedExecute_Request__Sequence * array)
{
  if (array) {
    protocol__srv__LedExecute_Request__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__LedExecute_Request__Sequence__are_equal(const protocol__srv__LedExecute_Request__Sequence * lhs, const protocol__srv__LedExecute_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__LedExecute_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__LedExecute_Request__Sequence__copy(
  const protocol__srv__LedExecute_Request__Sequence * input,
  protocol__srv__LedExecute_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__LedExecute_Request);
    protocol__srv__LedExecute_Request * data =
      (protocol__srv__LedExecute_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__LedExecute_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__LedExecute_Request__fini(&data[i]);
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
    if (!protocol__srv__LedExecute_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
protocol__srv__LedExecute_Response__init(protocol__srv__LedExecute_Response * msg)
{
  if (!msg) {
    return false;
  }
  // code
  return true;
}

void
protocol__srv__LedExecute_Response__fini(protocol__srv__LedExecute_Response * msg)
{
  if (!msg) {
    return;
  }
  // code
}

bool
protocol__srv__LedExecute_Response__are_equal(const protocol__srv__LedExecute_Response * lhs, const protocol__srv__LedExecute_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  return true;
}

bool
protocol__srv__LedExecute_Response__copy(
  const protocol__srv__LedExecute_Response * input,
  protocol__srv__LedExecute_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // code
  output->code = input->code;
  return true;
}

protocol__srv__LedExecute_Response *
protocol__srv__LedExecute_Response__create()
{
  protocol__srv__LedExecute_Response * msg = (protocol__srv__LedExecute_Response *)malloc(sizeof(protocol__srv__LedExecute_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__LedExecute_Response));
  bool success = protocol__srv__LedExecute_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__LedExecute_Response__destroy(protocol__srv__LedExecute_Response * msg)
{
  if (msg) {
    protocol__srv__LedExecute_Response__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__LedExecute_Response__Sequence__init(protocol__srv__LedExecute_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__LedExecute_Response * data = NULL;
  if (size) {
    data = (protocol__srv__LedExecute_Response *)calloc(size, sizeof(protocol__srv__LedExecute_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__LedExecute_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__LedExecute_Response__fini(&data[i - 1]);
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
protocol__srv__LedExecute_Response__Sequence__fini(protocol__srv__LedExecute_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__LedExecute_Response__fini(&array->data[i]);
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

protocol__srv__LedExecute_Response__Sequence *
protocol__srv__LedExecute_Response__Sequence__create(size_t size)
{
  protocol__srv__LedExecute_Response__Sequence * array = (protocol__srv__LedExecute_Response__Sequence *)malloc(sizeof(protocol__srv__LedExecute_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__LedExecute_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__LedExecute_Response__Sequence__destroy(protocol__srv__LedExecute_Response__Sequence * array)
{
  if (array) {
    protocol__srv__LedExecute_Response__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__LedExecute_Response__Sequence__are_equal(const protocol__srv__LedExecute_Response__Sequence * lhs, const protocol__srv__LedExecute_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__LedExecute_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__LedExecute_Response__Sequence__copy(
  const protocol__srv__LedExecute_Response__Sequence * input,
  protocol__srv__LedExecute_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__LedExecute_Response);
    protocol__srv__LedExecute_Response * data =
      (protocol__srv__LedExecute_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__LedExecute_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__LedExecute_Response__fini(&data[i]);
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
    if (!protocol__srv__LedExecute_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
