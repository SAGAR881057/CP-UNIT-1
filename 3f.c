// P3f.c - Conditional Operator (Ternary Operator)
#include <stdio.h>

int main() {
    int a = 20, b = 30;
    int max;
    
    // Syntax: (condition) ? expression_if_true : expression_if_false;
    
    // Find the maximum of two numbers
    max = (a > b) ? a : b;
    
    printf("a = %d, b = %d\n", a, b);
    printf("The maximum number is: %d\n", max); // Output: 30
    
    // Example 2: Check for even/odd
    int num = 7;
    char *result = (num % 2 == 0) ? "Even" : "Odd";
    
    printf("%d is an %s number.\n", num, result); // Output: 7 is an Odd number.
    
    return 0;
}