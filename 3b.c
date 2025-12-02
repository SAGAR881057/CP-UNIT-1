// P3b.c - C Program for swapping of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, temp;
    
    printf("Enter first number (num1): ");
    scanf("%d", &num1);
    printf("Enter second number (num2): ");
    scanf("%d", &num2);
    
    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    // Swapping logic using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}