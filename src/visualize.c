#include "visualize.h"

void printVecFloat(vec2D_float vec) {
    printf("x = %.2f, y = %.2f \n", vec.x, vec.y);
}

void printVecInt(vec2D_int32_t vec) {
    printf("x = %d, y = %d \n", vec.x, vec.y);
}

void printFloat(float val) { printf("float = %.2f \n", val); }

void printInt(int32_t val) { printf("int = %d \n", val); }
