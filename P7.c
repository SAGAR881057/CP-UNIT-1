// P7.c - C Program to check even or odd
#include <stdio.h>

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // An even number has a remainder of 0 when divided by 2
    if (num % 2 == 0) {
        printf("%d is an EVEN number.\n", num);
    } else {
        printf("%d is an ODD number.\n", num);
    }
    
    return 0;
}