// P3c.c - Increment/Decrement Operator
#include <stdio.h>

int main() {
    int a = 10;
    int b = 10;
    int c, d;
    
    printf("Initial value of a: %d\n", a); // a is 10
    printf("Initial value of b: %d\n", b); // b is 10
    
    // Post-increment: c gets the value of 'a' BEFORE increment, then 'a' increments
    c = a++; 
    printf("\nPost-increment (c = a++): c = %d, a = %d\n", c, a); // c is 10, a is 11
    
    // Pre-increment: 'a' increments FIRST, then d gets the new value of 'a'
    d = ++a; 
    printf("Pre-increment (d = ++a): d = %d, a = %d\n", d, a); // d is 12, a is 12
    
    // Post-decrement: prints the value of 'b' BEFORE decrement, then 'b' decrements
    printf("\nPost-decrement print (b--): %d (Now b is decremented)\n", b--); // Prints 10, b becomes 9
    printf("New value of b: %d\n", b);
    
    // Pre-decrement: 'b' decrements FIRST, then prints the new value
    printf("Pre-decrement print (--b): %d\n", --b); // b becomes 8, Prints 8
    
    return 0;
}