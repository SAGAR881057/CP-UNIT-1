// P2b.c - C program for Input and Display Various Data Types
#include <stdio.h>

int main() {
    int num_int;
    float num_float;
    double num_double;
    char char_val;
    
    // Input for int
    printf("Enter an integer: ");
    scanf("%d", &num_int);
    
    // Input for float
    printf("Enter a floating-point number (float): ");
    scanf("%f", &num_float);
    
    // Input for double
    printf("Enter a larger floating-point number (double): ");
    scanf("%lf", &num_double);
    
    // Input for char (Need a space before %c to consume potential newline)
    printf("Enter a character: ");
    scanf(" %c", &char_val);
    
    // Display the inputs
    printf("\n--- Displaying Entered Values ---\n");
    printf("Integer: %d\n", num_int);
    printf("Float: %.2f\n", num_float);
    printf("Double: %lf\n", num_double);
    printf("Character: %c\n", char_val);
    
    return 0;
}