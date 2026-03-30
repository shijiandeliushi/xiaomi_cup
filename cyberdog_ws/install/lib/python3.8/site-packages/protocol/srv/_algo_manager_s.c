// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:srv/AlgoManager.idl
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
#include "protocol/srv/detail/algo_manager__struct.h"
#include "protocol/srv/detail/algo_manager__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "protocol/msg/detail/algo_list__functions.h"
// end nested array functions include
bool protocol__msg__algo_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * protocol__msg__algo_list__convert_to_py(void * raw_ros_message);
bool protocol__msg__algo_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * protocol__msg__algo_list__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool protocol__srv__algo_manager__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("protocol.srv._algo_manager.AlgoManager_Request", full_classname_dest, 46) == 0);
  }
  protocol__srv__AlgoManager_Request * ros_message = _ros_message;
  {  // algo_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "algo_enable");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'algo_enable'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!protocol__msg__AlgoList__Sequence__init(&(ros_message->algo_enable), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create protocol__msg__AlgoList__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    protocol__msg__AlgoList * dest = ros_message->algo_enable.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!protocol__msg__algo_list__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // algo_disable
    PyObject * field = PyObject_GetAttrString(_pymsg, "algo_disable");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'algo_disable'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!protocol__msg__AlgoList__Sequence__init(&(ros_message->algo_disable), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create protocol__msg__AlgoList__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    protocol__msg__AlgoList * dest = ros_message->algo_disable.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!protocol__msg__algo_list__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // open_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "open_age");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->open_age = (Py_True == field);
    Py_DECREF(field);
  }
  {  // open_emotion
    PyObject * field = PyObject_GetAttrString(_pymsg, "open_emotion");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->open_emotion = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__srv__algo_manager__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AlgoManager_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.srv._algo_manager");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AlgoManager_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__srv__AlgoManager_Request * ros_message = (protocol__srv__AlgoManager_Request *)raw_ros_message;
  {  // algo_enable
    PyObject * field = NULL;
    size_t size = ros_message->algo_enable.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    protocol__msg__AlgoList * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->algo_enable.data[i]);
      PyObject * pyitem = protocol__msg__algo_list__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "algo_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // algo_disable
    PyObject * field = NULL;
    size_t size = ros_message->algo_disable.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    protocol__msg__AlgoList * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->algo_disable.data[i]);
      PyObject * pyitem = protocol__msg__algo_list__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "algo_disable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // open_age
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->open_age ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "open_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // open_emotion
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->open_emotion ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "open_emotion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "protocol/srv/detail/algo_manager__struct.h"
// already included above
// #include "protocol/srv/detail/algo_manager__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool protocol__srv__algo_manager__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("protocol.srv._algo_manager.AlgoManager_Response", full_classname_dest, 47) == 0);
  }
  protocol__srv__AlgoManager_Response * ros_message = _ros_message;
  {  // result_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "result_enable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->result_enable = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // result_disable
    PyObject * field = PyObject_GetAttrString(_pymsg, "result_disable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->result_disable = (uint8_t)PyLong_AsUnsignedLong(field);
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
PyObject * protocol__srv__algo_manager__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AlgoManager_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.srv._algo_manager");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AlgoManager_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__srv__AlgoManager_Response * ros_message = (protocol__srv__AlgoManager_Response *)raw_ros_message;
  {  // result_enable
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->result_enable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result_disable
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->result_disable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result_disable", field);
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
