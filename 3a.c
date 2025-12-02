// P3a.c - C Program to Perform Arithmetic Operation
#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter the first integer (a): ");
    scanf("%d", &a);
    printf("Enter the second integer (b): ");
    scanf("%d", &b);
    
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition (a + b): %d\n", a + b);
    printf("Subtraction (a - b): %d\n", a - b);
    printf("Multiplication (a * b): %d\n", a * b);
    
    // Type casting to get a floating-point division result
    printf("Division (a / b): %.2f\n", (float)a / b);
    
    // Modulo operator (remainder of division)
    printf("Modulo (a %% b): %d\n", a % b); 
    
    return 0;
}