// P4g.c - Program to calculate the sum of first n natural numbers - while loop
#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    
    printf("Enter a positive integer 'n': ");
    scanf("%d", &n);
    
    // Check if n is positive
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    
    // Loop condition: continue as long as 'i' is less than or equal to 'n'
    while (i <= n) {
        sum += i; // Add current number to sum
        i++;      // Increment the counter
    }
    
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}