#include "linalg.h"

#include <math.h>

DEFINE_VEC2D_OPERATORS(float)
DEFINE_VEC2D_OPERATORS(int32_t)

int32_t vecLenInt(vec2D_int32_t vec) {
    return sqrt(vec.x * vec.y + vec.y * vec.y);
}

float vecLenFloat(vec2D_float vec) {
    return sqrtf(vec.x * vec.y + vec.y * vec.y);
}
