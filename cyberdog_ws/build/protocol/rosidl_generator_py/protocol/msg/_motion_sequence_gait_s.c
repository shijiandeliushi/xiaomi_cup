// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:msg/MotionSequenceGait.idl
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
#include "protocol/msg/detail/motion_sequence_gait__struct.h"
#include "protocol/msg/detail/motion_sequence_gait__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool protocol__msg__motion_sequence_gait__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("protocol.msg._motion_sequence_gait.MotionSequenceGait", full_classname_dest, 53) == 0);
  }
  protocol__msg__MotionSequenceGait * ros_message = _ros_message;
  {  // right_forefoot
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_forefoot");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_forefoot = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_forefoot
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_forefoot");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_forefoot = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_hindfoot
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_hindfoot");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_hindfoot = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_hindfoot
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_hindfoot");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_hindfoot = (Py_True == field);
    Py_DECREF(field);
  }
  {  // duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->duration = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__msg__motion_sequence_gait__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotionSequenceGait */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.msg._motion_sequence_gait");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotionSequenceGait");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__msg__MotionSequenceGait * ros_message = (protocol__msg__MotionSequenceGait *)raw_ros_message;
  {  // right_forefoot
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_forefoot ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_forefoot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_forefoot
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_forefoot ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_forefoot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_hindfoot
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_hindfoot ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_hindfoot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_hindfoot
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_hindfoot ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_hindfoot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->duration);
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
