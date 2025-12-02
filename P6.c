// P6.c - Number Comparison (find biggest number)
#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("The biggest number is: %d (num1)\n", num1);
    } else if (num2 > num1) {
        printf("The biggest number is: %d (num2)\n", num2);
    } else {
        printf("Both numbers are equal: %d\n", num1);
    }
    
    return 0;
}