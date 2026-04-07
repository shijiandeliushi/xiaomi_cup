// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cyberdog_msg:msg/YamlParam.idl
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
#include "cyberdog_msg/msg/detail/yaml_param__struct.h"
#include "cyberdog_msg/msg/detail/yaml_param__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool cyberdog_msg__msg__yaml_param__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("cyberdog_msg.msg._yaml_param.YamlParam", full_classname_dest, 38) == 0);
  }
  cyberdog_msg__msg__YamlParam * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // kind
    PyObject * field = PyObject_GetAttrString(_pymsg, "kind");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->kind = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // s64_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "s64_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->s64_value = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // double_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "double_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->double_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vecxd_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "vecxd_value");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 12;
      double * dest = ros_message->vecxd_value;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // is_user
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_user");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_user = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cyberdog_msg__msg__yaml_param__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of YamlParam */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cyberdog_msg.msg._yaml_param");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "YamlParam");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cyberdog_msg__msg__YamlParam * ros_message = (cyberdog_msg__msg__YamlParam *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kind
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->kind);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kind", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s64_value
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->s64_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s64_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // double_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->double_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "double_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vecxd_value
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "vecxd_value");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->vecxd_value[0]);
    memcpy(dst, src, 12 * sizeof(double));
    Py_DECREF(field);
  }
  {  // is_user
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->is_user);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_user", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
