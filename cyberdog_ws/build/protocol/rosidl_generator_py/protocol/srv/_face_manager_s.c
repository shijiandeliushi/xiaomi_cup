// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from protocol:srv/FaceManager.idl
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
#include "protocol/srv/detail/face_manager__struct.h"
#include "protocol/srv/detail/face_manager__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool protocol__srv__face_manager__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("protocol.srv._face_manager.FaceManager_Request", full_classname_dest, 46) == 0);
  }
  protocol__srv__FaceManager_Request * ros_message = _ros_message;
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // args
    PyObject * field = PyObject_GetAttrString(_pymsg, "args");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->args, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // username
    PyObject * field = PyObject_GetAttrString(_pymsg, "username");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->username, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // oriname
    PyObject * field = PyObject_GetAttrString(_pymsg, "oriname");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->oriname, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // ishost
    PyObject * field = PyObject_GetAttrString(_pymsg, "ishost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ishost = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * protocol__srv__face_manager__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FaceManager_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.srv._face_manager");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FaceManager_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__srv__FaceManager_Request * ros_message = (protocol__srv__FaceManager_Request *)raw_ros_message;
  {  // command
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // args
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->args.data,
      strlen(ros_message->args.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "args", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // username
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->username.data,
      strlen(ros_message->username.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "username", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oriname
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->oriname.data,
      strlen(ros_message->oriname.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "oriname", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ishost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ishost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ishost", field);
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
// #include "protocol/srv/detail/face_manager__struct.h"
// already included above
// #include "protocol/srv/detail/face_manager__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "protocol/msg/detail/compressed_image__functions.h"
// end nested array functions include
bool protocol__msg__compressed_image__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * protocol__msg__compressed_image__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool protocol__srv__face_manager__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("protocol.srv._face_manager.FaceManager_Response", full_classname_dest, 47) == 0);
  }
  protocol__srv__FaceManager_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->result = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->msg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // face_images
    PyObject * field = PyObject_GetAttrString(_pymsg, "face_images");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'face_images'");
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
    if (!protocol__msg__CompressedImage__Sequence__init(&(ros_message->face_images), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create protocol__msg__CompressedImage__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    protocol__msg__CompressedImage * dest = ros_message->face_images.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!protocol__msg__compressed_image__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
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
PyObject * protocol__srv__face_manager__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FaceManager_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("protocol.srv._face_manager");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FaceManager_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  protocol__srv__FaceManager_Response * ros_message = (protocol__srv__FaceManager_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->result);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->msg.data,
      strlen(ros_message->msg.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // face_images
    PyObject * field = NULL;
    size_t size = ros_message->face_images.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    protocol__msg__CompressedImage * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->face_images.data[i]);
      PyObject * pyitem = protocol__msg__compressed_image__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "face_images", field);
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
