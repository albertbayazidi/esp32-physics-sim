#pragma once
#include <stdint.h>
#include <stdio.h>

#include "macro.h"

#define FIXED_SCALE (1 << 16)
#define FLOAT_TO_FIXED(x) ((int32_t)((x) * FIXED_SCALE))
#define FIXED_TO_FLOAT(x) ((float)(x) / FIXED_SCALE)

#define FLOAT_ARRAY_TO_FIXED(a, b) {FLOAT_TO_FIXED(a), FLOAT_TO_FIXED(b)}

DEFINE_VEC2D_STRUCT(float)
DEFINE_VEC2D_STRUCT(int32_t)
