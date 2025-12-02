// P5.c - C program to perform all Arithmetic Operations ( + , - , * , / )
#include <stdio.h>

int main() {
    double num1, num2;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    printf("\n--- Results of Arithmetic Operations ---\n");
    
    // Addition
    printf("Addition (%.2lf + %.2lf) = %.2lf\n", num1, num2, num1 + num2);
    
    // Subtraction
    printf("Subtraction (%.2lf - %.2lf) = %.2lf\n", num1, num2, num1 - num2);
    
    // Multiplication
    printf("Multiplication (%.2lf * %.2lf) = %.2lf\n", num1, num2, num1 * num2);
    
    // Division
    if (num2 != 0) {
        printf("Division (%.2lf / %.2lf) = %.2lf\n", num1, num2, num1 / num2);
    } else {
        printf("Division: Cannot divide by zero.\n");
    }
    
    // Modulo (Only works for integers, casting is needed)
    int int_num1 = (int)num1;
    int int_num2 = (int)num2;
    if (int_num2 != 0) {
        printf("Modulo (%%) (using integer parts %d %% %d) = %d\n", 
               int_num1, int_num2, int_num1 % int_num2);
    } else {
        printf("Modulo: Cannot perform modulo with zero.\n");
    }
    
    return 0;
}