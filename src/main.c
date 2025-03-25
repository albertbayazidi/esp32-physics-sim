#include "common.h"
#include "linalg.h"
#include "visualize.h"

int main() {
    vec2D_float a = {1.0, 2.0};

    vec2D_int32_t b = FLOAT_ARRAY_TO_FIXED(2.0, 1.0);
    vec2D_int32_t c = {10, 1};

    printVecFloat(a);

    printVecInt(b);
    printVecInt(c);

    printInt(vecLenInt(b));
    printFloat(vecLenFloat(a));

    return 0;
}
