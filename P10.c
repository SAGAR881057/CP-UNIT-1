// P10.c - C Program to print multiplication Table
#include <stdio.h>

int main() {
    int n, i;
    const int RANGE = 10; // Table up to 10
    
    printf("Enter an integer to display its multiplication table: ");
    scanf("%d", &n);
    
    printf("\n--- Multiplication Table for %d ---\n", n);
    
    // Loop from 1 to 10
    for (i = 1; i <= RANGE; ++i) {
        // Output format: n * i = (n * i)
        printf("%d * %d = %d\n", n, i, n * i);
    }
    
    return 0;
}