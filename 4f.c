// P4f.c - Program to calculate the sum of first n natural numbers - for loop
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter a positive integer 'n': ");
    scanf("%d", &n);
    
    // Check if n is positive
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    
    // Loop from 1 to n, accumulating the sum
    for (i = 1; i <= n; ++i) {
        sum += i; // sum = sum + i;
    }
    
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}