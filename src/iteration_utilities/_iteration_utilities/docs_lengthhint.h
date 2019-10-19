#ifndef PYIU_DOCSLENGTHHINT_H
#define PYIU_DOCSLENGTHHINT_H

#define PY_SSIZE_T_CLEAN
#include <Python.h>

#if PY_MAJOR_VERSION > 3 || (PY_MAJOR_VERSION == 3 && PY_MINOR_VERSION >= 4)
PyDoc_STRVAR(PYIU_lenhint_doc,
    "__length_hint__(/)\n"
    "--\n\n"
    "Return an *estimate* for the length of the iterator or zero.\n"
);
#endif

#endif
