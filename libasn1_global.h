#ifndef LIBASN1_GLOBAL_H
#define LIBASN1_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBASN1_LIBRARY)
#  define LIBASN1SHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBASN1SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBASN1_GLOBAL_H
