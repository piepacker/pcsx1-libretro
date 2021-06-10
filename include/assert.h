#pragma once
#include <stdio.h>

#define PCSX_ASSERT_TRACE2(f,l) f "(" # l "): "
#define PCSX_ASSERT_TRACE1(f,l) PCSX_ASSERT_TRACE2(f,l)
#define PCSX_ASSERT_TRACE       PCSX_ASSERT_TRACE1(__FILE__, __LINE__)

#define assert(cond, ...)		((cond) || (fprintf(stderr, PCSX_ASSERT_TRACE "(assert failed) " # cond ": " __VA_ARGS__ ), abort(), 0))
