#ifndef PYIU_SUCCESSIVE_H
#define PYIU_SUCCESSIVE_H

#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include "helpercompat.h"

typedef struct {
    PyObject_HEAD
    PyObject *iterator;
    Py_ssize_t times;
    PyObject *result;
} PyIUObject_Successive;

extern PyTypeObject PyIUType_Successive;

#endif
