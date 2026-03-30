// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:msg/MotionSequenceParam.idl
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
#include "protocol/msg/detail/motion_sequence_param__struct.h"
#include "protocol/msg/detail/motion_sequence_param__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool protocol__msg__motion_sequence_param__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("protocol.msg._motion_sequence_param.MotionSequenceParam", full_classname_dest, 55) == 0);
  }
  protocol__msg__MotionSequenceParam * ros_message = _ros_message;
  {  // twist
    PyObject * field = PyObject_GetAttrString(_pymsg, "twist");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist__convert_from_py(field, &ros_message->twist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // centroid_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "centroid_height");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->centroid_height)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right_forefoot
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_forefoot");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->right_forefoot)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // left_forefoot
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_forefoot");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->left_forefoot)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right_hindfoot
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_hindfoot");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->right_hindfoot)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // left_hindfoot
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_hindfoot");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->left_hindfoot)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // forefoot_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "forefoot_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->forefoot_height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hindfoot_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "hindfoot_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hindfoot_height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // friction_coefficient
    PyObject * field = PyObject_GetAttrString(_pymsg, "friction_coefficient");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->friction_coefficient = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // duration_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->duration_ms = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__msg__motion_sequence_param__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotionSequenceParam */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.msg._motion_sequence_param");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotionSequenceParam");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__msg__MotionSequenceParam * ros_message = (protocol__msg__MotionSequenceParam *)raw_ros_message;
  {  // twist
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist__convert_to_py(&ros_message->twist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "twist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // centroid_height
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->centroid_height);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "centroid_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_forefoot
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->right_forefoot);
    if (!field) {
      return NULL;
    }
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
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->left_forefoot);
    if (!field) {
      return NULL;
    }
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
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->right_hindfoot);
    if (!field) {
      return NULL;
    }
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
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->left_hindfoot);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_hindfoot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forefoot_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->forefoot_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "forefoot_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hindfoot_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hindfoot_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hindfoot_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // friction_coefficient
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->friction_coefficient);
    {
      int rc = PyObject_SetAttrString(_pymessage, "friction_coefficient", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration_ms
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->duration_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
