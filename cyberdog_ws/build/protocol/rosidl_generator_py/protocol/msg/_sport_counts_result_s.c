// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:msg/SportCountsResult.idl
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
#include "protocol/msg/detail/sport_counts_result__struct.h"
#include "protocol/msg/detail/sport_counts_result__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool protocol__msg__sport_counts_result__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("protocol.msg._sport_counts_result.SportCountsResult", full_classname_dest, 51) == 0);
  }
  protocol__msg__SportCountsResult * ros_message = _ros_message;
  {  // algo_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "algo_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->algo_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sport_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "sport_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sport_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // counts
    PyObject * field = PyObject_GetAttrString(_pymsg, "counts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->counts = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->duration = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__msg__sport_counts_result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SportCountsResult */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.msg._sport_counts_result");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SportCountsResult");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__msg__SportCountsResult * ros_message = (protocol__msg__SportCountsResult *)raw_ros_message;
  {  // algo_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->algo_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "algo_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sport_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sport_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sport_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // counts
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->counts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "counts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
