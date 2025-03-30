use bear -- make 


## Known Limitations  

- Multiplication MUST BE AVOIDED in the fixed-point number system, as it is likely to cause overflow.  
- Because of this limitation, vector lengths cannot be computed directly in the fixed-point system. Instead, values must first be converted to floating-point numbers before performing such calculations.


## Code Tasks  
- [x] Add macro for converting fixed-point to float before computing vector length  
- [ ] Implement timing function for measuring procedure execution  
- [x] Add fixed-point (multiplication)
- [x] Add fixed-point (division)
- [ ] Implement symplectic integrator (3 or 4 orther)

## ESP32 Tasks  
- [ ] Evaluate the feasibility of using a Taylor or Padé approximation for square root
- [ ] Test if FIXED_MUL/DIV is fater then just MUL/DIV
