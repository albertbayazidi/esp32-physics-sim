#include "utils.h"

#include "visualize.h"

void timeFunc(void (*funPtr)(void*), void* args) {
    clock_t begin = clock();

    (*funPtr)(args);

    clock_t end = clock();
    float time_spent = (float)(end - begin) / CLOCKS_PER_SEC;
    printf("This tok %f, sek\n", time_spent);
}
