#ifndef STD_H
#define STD_H

/* This stuff should be included EVERYWHERE */

/* the definition of ARCH */
#include "arch.h"

/* all options and configuration */
#include "configure.h"
#include "options_incl.h"

#ifdef PEDANTIC
#    undef INLINE
#    define INLINE
#elif defined(EDIT_SOURCE)
#    ifndef CONST
#        define CONST
#    endif
#    ifndef INLINE
#        define INLINE
#    endif
#endif

#include "portability.h"
#include "macros.h"
#ifndef _FUNC_SPEC_
#   include "std_incl.h"
#   include "malloc_incl.h"
#   ifndef NO_OPCODES
#      include "opcodes.h"
#   endif
#endif
#include "debug.h"

#ifdef WIN32
#  define outp outptr
#endif

#endif






