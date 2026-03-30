// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:msg/MotionServoResponse.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "protocol/msg/detail/motion_servo_response__struct.h"
#include "protocol/msg/detail/motion_servo_response__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool protocol__msg__motion_servo_response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("protocol.msg._motion_servo_response.MotionServoResponse", full_classname_dest, 55) == 0);
  }
  protocol__msg__MotionServoResponse * ros_message = _ros_message;
  {  // motion_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motion_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cmd_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cmd_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // order_process_bar
    PyObject * field = PyObject_GetAttrString(_pymsg, "order_process_bar");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->order_process_bar = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->result = (Py_True == field);
    Py_DECREF(field);
  }
  {  // code
    PyObject * field = PyObject_GetAttrString(_pymsg, "code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->code = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__msg__motion_servo_response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotionServoResponse */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.msg._motion_servo_response");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotionServoResponse");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__msg__MotionServoResponse * ros_message = (protocol__msg__MotionServoResponse *)raw_ros_message;
  {  // motion_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motion_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cmd_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // order_process_bar
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->order_process_bar);
    {
      int rc = PyObject_SetAttrString(_pymessage, "order_process_bar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->result ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // code
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
