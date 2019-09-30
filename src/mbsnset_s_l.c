/***
*mbsnset_s_l.c - Sets first n characters of string to given character (MBCS)
*
*       Copyright (c) Microsoft Corporation.  All rights reserved.
*
*Purpose:
*       Sets first n characters of string to given character (MBCS)
*
*******************************************************************************/

#ifdef _MBCS

#include <mbstring.h>
#include <internal_securecrt.h>
#include <mtdll.h>
#include <setlocal.h>

#define _FUNC_PROLOGUE
#define _FUNC_NAME _mbsnset_s_l
#define _SB_FUNC_NAME _strnset_s
#define _DEST _Dst
#define _COUNT _CountInChars
#define _COUNT_IN_BYTES 0

#include <mbsnset_s.inl>

#endif  /* _MBCS */
