use bear -- make 


## Known Limitations  

- Multiplication MUST BE AVOIDED in the fixed-point number system, as it is likely to cause overflow.  
- Because of this limitation, vector lengths cannot be computed directly in the fixed-point system. Instead, values must first be converted to floating-point numbers before performing such calculations.


## Code Tasks  
- [x] Add macro for converting fixed-point to float before computing vector length  
- [x] Implement timing function for measuring procedure execution  
- [x] Add fixed-point (multiplication)
- [x] Add fixed-point (division)
- [ ] Implement symplectic integrator (3 or 4 orther)

## ESP32 Tasks  
- [ ] Evaluate the feasibility of using a Taylor or Padé approximation for square root
- [x] Test if FIXED_MUL/DIV is fater then just MUL/DIV
    - normal multiplication was [faster](#Timing-results-pc-fixed-vs-float-system) on pc, still needs to be checked on ESP32


### Timing results pc fixed vs float system (only multiplication)
```c
void FIXED_MULWrapper(void* args) {
    void** ptrs = (void**)args;
    int32_t x = *(int32_t*)ptrs[0];
    int32_t y = *(int32_t*)ptrs[1];
    for (int i = 0; i < 100; i++) {
        (FIXED_MUL(x, y));
    }
}

void MULWrapper(void* args) {
    void** ptrs = (void**)args;
    int32_t x = *(int32_t*)ptrs[0];
    int32_t y = *(int32_t*)ptrs[1];
    for (int i = 0; i < 100; i++) {
        (MUL(x, y));
    }

int main(){
    ...
    // use them like this inside of main

    void* temp[2] = {&b.x, &b.y};

    timeFunc(MULWrapper, temp);
    timeFunc(FIXED_MULWrapper, temp);

    return 0;
}
```

### Wrapper examples
```c
void printVecFloatWrapper(void* arg) {
    vec2D_float* vec = (vec2D_float*)arg;
    printVecFloat(*vec);
}

void vecLenFixedWrapper(void* arg) {
    vec2D_int32_t* vec = (vec2D_int32_t*)arg;

    for (int i = 0; i < 999; i++) {
        vecLenFixed(*vec);
    }
}
int main(){
    ...
    // use them like this inside of main
    timeFunc(printVecFloatWrapper, &a);
    timeFunc(vecLenFixedWrapper, &b);
    timeFunc(vecLenFloatWrapper, &a);

    return 0
}

