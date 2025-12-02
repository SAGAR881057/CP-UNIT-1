// P3g.c - Comma Operator
#include <stdio.h>

int main() {
    int a = 1, b = 2, c;
    
    // The comma operator evaluates its operands from left to right.
    // The value of the entire expression is the value of the rightmost operand.
    c = (a = a + 5, b = b * 3, a + b); 
    
    // Steps:
    // 1. a = a + 5  => a becomes 1 + 5 = 6
    // 2. b = b * 3  => b becomes 2 * 3 = 6
    // 3. a + b      => The final value is 6 + 6 = 12, which is assigned to c.
    
    printf("After the operation:\n");
    printf("a = %d\n", a); // 6
    printf("b = %d\n", b); // 6
    printf("c = %d\n", c); // 12 (the value of the rightmost expression)
    
    return 0;
}