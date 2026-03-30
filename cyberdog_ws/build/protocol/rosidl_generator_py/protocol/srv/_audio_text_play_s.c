// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:srv/AudioTextPlay.idl
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
#include "protocol/srv/detail/audio_text_play__struct.h"
#include "protocol/srv/detail/audio_text_play__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool protocol__msg__audio_play__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * protocol__msg__audio_play__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool protocol__srv__audio_text_play__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("protocol.srv._audio_text_play.AudioTextPlay_Request", full_classname_dest, 51) == 0);
  }
  protocol__srv__AudioTextPlay_Request * ros_message = _ros_message;
  {  // module_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "module_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->module_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // is_online
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_online");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_online = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speech
    PyObject * field = PyObject_GetAttrString(_pymsg, "speech");
    if (!field) {
      return false;
    }
    if (!protocol__msg__audio_play__convert_from_py(field, &ros_message->speech)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // text
    PyObject * field = PyObject_GetAttrString(_pymsg, "text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__srv__audio_text_play__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AudioTextPlay_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.srv._audio_text_play");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AudioTextPlay_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__srv__AudioTextPlay_Request * ros_message = (protocol__srv__AudioTextPlay_Request *)raw_ros_message;
  {  // module_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->module_name.data,
      strlen(ros_message->module_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "module_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_online
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_online ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_online", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speech
    PyObject * field = NULL;
    field = protocol__msg__audio_play__convert_to_py(&ros_message->speech);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speech", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->text.data,
      strlen(ros_message->text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "text", field);
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
// #include "protocol/srv/detail/audio_text_play__struct.h"
// already included above
// #include "protocol/srv/detail/audio_text_play__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool protocol__srv__audio_text_play__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("protocol.srv._audio_text_play.AudioTextPlay_Response", full_classname_dest, 52) == 0);
  }
  protocol__srv__AudioTextPlay_Response * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
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
PyObject * protocol__srv__audio_text_play__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AudioTextPlay_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.srv._audio_text_play");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AudioTextPlay_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__srv__AudioTextPlay_Response * ros_message = (protocol__srv__AudioTextPlay_Response *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
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
