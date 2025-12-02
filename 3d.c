// P3d.c - Relational Operator
#include <stdio.h>

int main() {
    int x = 15;
    int y = 10;
    
    printf("x = %d, y = %d\n", x, y);
    printf("Note: 1 means TRUE, 0 means FALSE\n\n");
    
    printf("x == y (Equal to): %d\n", x == y);   // 15 == 10 -> 0 (False)
    printf("x != y (Not equal to): %d\n", x != y); // 15 != 10 -> 1 (True)
    printf("x > y (Greater than): %d\n", x > y);   // 15 > 10 -> 1 (True)
    printf("x < y (Less than): %d\n", x < y);    // 15 < 10 -> 0 (False)
    printf("x >= y (Greater than or equal to): %d\n", x >= y); // 15 >= 10 -> 1 (True)
    printf("x <= y (Less than or equal to): %d\n", x <= y);  // 15 <= 10 -> 0 (False)
    
    return 0;
}