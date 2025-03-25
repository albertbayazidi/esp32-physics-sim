#pragma once
#include <stdint.h>

// LINALG MACROS
#define DEFINE_VEC2D_STRUCT(TYPE) \
    typedef struct {              \
        TYPE x;                   \
        TYPE y;                   \
    } vec2D_##TYPE;

#define DEFINE_VEC2D_OPERATORS(TYPE)                                   \
                                                                       \
    vec2D_##TYPE TYPE##_ADD(vec2D_##TYPE a, vec2D_##TYPE b) {          \
        vec2D_##TYPE res;                                              \
        res.x = a.x + b.x;                                             \
        res.y = a.y + b.y;                                             \
        return res;                                                    \
    }                                                                  \
                                                                       \
    vec2D_##TYPE TYPE##_SUB(vec2D_##TYPE a, vec2D_##TYPE b) {          \
        vec2D_##TYPE res;                                              \
        res.x = a.x - b.x;                                             \
        res.y = a.y - b.y;                                             \
        return res;                                                    \
    }                                                                  \
                                                                       \
    void vec2D_##TYPE##_ADD_UPDATE(vec2D_##TYPE* a, vec2D_##TYPE* b) { \
        a->x = a->x + b->x;                                            \
        a->y = a->y + b->y;                                            \
    }                                                                  \
                                                                       \
    void vec2D_##TYPE##_SUB_UPDATE(vec2D_##TYPE* a, vec2D_##TYPE* b) { \
        a->x = a->x - b->x;                                            \
        a->y = a->y - b->y;                                            \
    }                                                                  \
                                                                       \
    TYPE vec2D_##TYPE##_DOT_PRODUCT(vec2D_##TYPE a, vec2D_##TYPE b) {  \
        TYPE sum = a.x * b.x + a.y * b.y;                              \
        return sum;                                                    \
    }
