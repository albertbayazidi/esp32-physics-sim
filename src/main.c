#include "common.h"
#include "linalg.h"
#include "visualize.h"

int main() {
    vec2D_float a = {1.0, 2.0};

    vec2D_int32_t b = FLOAT_ARRAY_TO_FIXED(2.6, 3.0);
    vec2D_int32_t c = {10, 1};

    //    TESTING
    //    printVecFloat(a);
    //
    //    printVecInt(b);
    //    printVecInt(c);
    //
    //    printFloat(vecLenFixed(b));
    //    printFloat(vecLenFloat(a));

    //    printFixedAsFloat(b.x);
    //
    //    printFixedAsFloat(FIXED_MUL(b.x, b.y));
    //    printFloat(FIXED_TO_FLOAT(b.x) * FIXED_TO_FLOAT(b.y));
    //
    //    printFixedAsFloat(FIXED_DIV(b.x, b.y));
    //    printFloat(FIXED_TO_FLOAT(b.x) / FIXED_TO_FLOAT(b.y));

    return 0;
}
