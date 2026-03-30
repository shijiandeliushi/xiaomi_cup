// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from protocol:srv/RebootMachine.idl
// generated code does not contain a copyright notice
#include "protocol/srv/detail/reboot_machine__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
protocol__srv__RebootMachine_Request__init(protocol__srv__RebootMachine_Request * msg)
{
  if (!msg) {
    return false;
  }
  // rebootmachine
  return true;
}

void
protocol__srv__RebootMachine_Request__fini(protocol__srv__RebootMachine_Request * msg)
{
  if (!msg) {
    return;
  }
  // rebootmachine
}

bool
protocol__srv__RebootMachine_Request__are_equal(const protocol__srv__RebootMachine_Request * lhs, const protocol__srv__RebootMachine_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rebootmachine
  if (lhs->rebootmachine != rhs->rebootmachine) {
    return false;
  }
  return true;
}

bool
protocol__srv__RebootMachine_Request__copy(
  const protocol__srv__RebootMachine_Request * input,
  protocol__srv__RebootMachine_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // rebootmachine
  output->rebootmachine = input->rebootmachine;
  return true;
}

protocol__srv__RebootMachine_Request *
protocol__srv__RebootMachine_Request__create()
{
  protocol__srv__RebootMachine_Request * msg = (protocol__srv__RebootMachine_Request *)malloc(sizeof(protocol__srv__RebootMachine_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__RebootMachine_Request));
  bool success = protocol__srv__RebootMachine_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__RebootMachine_Request__destroy(protocol__srv__RebootMachine_Request * msg)
{
  if (msg) {
    protocol__srv__RebootMachine_Request__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__RebootMachine_Request__Sequence__init(protocol__srv__RebootMachine_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__RebootMachine_Request * data = NULL;
  if (size) {
    data = (protocol__srv__RebootMachine_Request *)calloc(size, sizeof(protocol__srv__RebootMachine_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__RebootMachine_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__RebootMachine_Request__fini(&data[i - 1]);
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
protocol__srv__RebootMachine_Request__Sequence__fini(protocol__srv__RebootMachine_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__RebootMachine_Request__fini(&array->data[i]);
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

protocol__srv__RebootMachine_Request__Sequence *
protocol__srv__RebootMachine_Request__Sequence__create(size_t size)
{
  protocol__srv__RebootMachine_Request__Sequence * array = (protocol__srv__RebootMachine_Request__Sequence *)malloc(sizeof(protocol__srv__RebootMachine_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__RebootMachine_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__RebootMachine_Request__Sequence__destroy(protocol__srv__RebootMachine_Request__Sequence * array)
{
  if (array) {
    protocol__srv__RebootMachine_Request__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__RebootMachine_Request__Sequence__are_equal(const protocol__srv__RebootMachine_Request__Sequence * lhs, const protocol__srv__RebootMachine_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__RebootMachine_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__RebootMachine_Request__Sequence__copy(
  const protocol__srv__RebootMachine_Request__Sequence * input,
  protocol__srv__RebootMachine_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__RebootMachine_Request);
    protocol__srv__RebootMachine_Request * data =
      (protocol__srv__RebootMachine_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__RebootMachine_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__RebootMachine_Request__fini(&data[i]);
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
    if (!protocol__srv__RebootMachine_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
protocol__srv__RebootMachine_Response__init(protocol__srv__RebootMachine_Response * msg)
{
  if (!msg) {
    return false;
  }
  // rebootresult
  return true;
}

void
protocol__srv__RebootMachine_Response__fini(protocol__srv__RebootMachine_Response * msg)
{
  if (!msg) {
    return;
  }
  // rebootresult
}

bool
protocol__srv__RebootMachine_Response__are_equal(const protocol__srv__RebootMachine_Response * lhs, const protocol__srv__RebootMachine_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rebootresult
  if (lhs->rebootresult != rhs->rebootresult) {
    return false;
  }
  return true;
}

bool
protocol__srv__RebootMachine_Response__copy(
  const protocol__srv__RebootMachine_Response * input,
  protocol__srv__RebootMachine_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // rebootresult
  output->rebootresult = input->rebootresult;
  return true;
}

protocol__srv__RebootMachine_Response *
protocol__srv__RebootMachine_Response__create()
{
  protocol__srv__RebootMachine_Response * msg = (protocol__srv__RebootMachine_Response *)malloc(sizeof(protocol__srv__RebootMachine_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(protocol__srv__RebootMachine_Response));
  bool success = protocol__srv__RebootMachine_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
protocol__srv__RebootMachine_Response__destroy(protocol__srv__RebootMachine_Response * msg)
{
  if (msg) {
    protocol__srv__RebootMachine_Response__fini(msg);
  }
  free(msg);
}


bool
protocol__srv__RebootMachine_Response__Sequence__init(protocol__srv__RebootMachine_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  protocol__srv__RebootMachine_Response * data = NULL;
  if (size) {
    data = (protocol__srv__RebootMachine_Response *)calloc(size, sizeof(protocol__srv__RebootMachine_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = protocol__srv__RebootMachine_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        protocol__srv__RebootMachine_Response__fini(&data[i - 1]);
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
protocol__srv__RebootMachine_Response__Sequence__fini(protocol__srv__RebootMachine_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      protocol__srv__RebootMachine_Response__fini(&array->data[i]);
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

protocol__srv__RebootMachine_Response__Sequence *
protocol__srv__RebootMachine_Response__Sequence__create(size_t size)
{
  protocol__srv__RebootMachine_Response__Sequence * array = (protocol__srv__RebootMachine_Response__Sequence *)malloc(sizeof(protocol__srv__RebootMachine_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = protocol__srv__RebootMachine_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
protocol__srv__RebootMachine_Response__Sequence__destroy(protocol__srv__RebootMachine_Response__Sequence * array)
{
  if (array) {
    protocol__srv__RebootMachine_Response__Sequence__fini(array);
  }
  free(array);
}

bool
protocol__srv__RebootMachine_Response__Sequence__are_equal(const protocol__srv__RebootMachine_Response__Sequence * lhs, const protocol__srv__RebootMachine_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!protocol__srv__RebootMachine_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
protocol__srv__RebootMachine_Response__Sequence__copy(
  const protocol__srv__RebootMachine_Response__Sequence * input,
  protocol__srv__RebootMachine_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(protocol__srv__RebootMachine_Response);
    protocol__srv__RebootMachine_Response * data =
      (protocol__srv__RebootMachine_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!protocol__srv__RebootMachine_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          protocol__srv__RebootMachine_Response__fini(&data[i]);
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
    if (!protocol__srv__RebootMachine_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
