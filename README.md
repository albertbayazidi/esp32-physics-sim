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
- [ ] Test if FIXED_MUL/DIV is fater then just MUL/DIV

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

```
