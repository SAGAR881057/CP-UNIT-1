// P4d.c - Nested if: positivity of two numbers
#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    if (num1 >= 0) {
        if (num2 >= 0) {
            printf("Both numbers (%d and %d) are non-negative.\n", num1, num2);
        } else {
            printf("%d is non-negative, but %d is negative.\n", num1, num2);
        }
    } else {
        // num1 is negative
        if (num2 >= 0) {
            printf("%d is negative, but %d is non-negative.\n", num1, num2);
        } else {
            printf("Both numbers (%d and %d) are negative.\n", num1, num2);
        }
    }
    
    return 0;
}