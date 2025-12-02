// P8.c - Factorial of a number
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1; // Use long long for larger results
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else if (n == 0) {
        printf("Factorial of 0 = 1\n");
    } else {
        // Calculate factorial using a for loop
        for (i = 1; i <= n; ++i) {
            factorial *= i; // factorial = factorial * i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    
    return 0;
}