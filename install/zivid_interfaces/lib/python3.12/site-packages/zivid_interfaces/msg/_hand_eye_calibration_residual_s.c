// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from zivid_interfaces:msg/HandEyeCalibrationResidual.idl
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
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__struct.h"
#include "zivid_interfaces/msg/detail/hand_eye_calibration_residual__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool zivid_interfaces__msg__hand_eye_calibration_residual__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[79];
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
    assert(strncmp("zivid_interfaces.msg._hand_eye_calibration_residual.HandEyeCalibrationResidual", full_classname_dest, 78) == 0);
  }
  zivid_interfaces__msg__HandEyeCalibrationResidual * ros_message = _ros_message;
  {  // rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // translation
    PyObject * field = PyObject_GetAttrString(_pymsg, "translation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->translation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * zivid_interfaces__msg__hand_eye_calibration_residual__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HandEyeCalibrationResidual */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("zivid_interfaces.msg._hand_eye_calibration_residual");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HandEyeCalibrationResidual");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  zivid_interfaces__msg__HandEyeCalibrationResidual * ros_message = (zivid_interfaces__msg__HandEyeCalibrationResidual *)raw_ros_message;
  {  // rotation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // translation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->translation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "translation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
