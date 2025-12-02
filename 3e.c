// P3e.c - Logical Operator
#include <stdio.h>

int main() {
    int age = 20;
    int has_license = 1; // 1 for True, 0 for False
    
    printf("Age = %d, Has License = %d\n", age, has_license);
    printf("Note: 1 means TRUE, 0 means FALSE\n\n");
    
    // Logical AND (&&): True if BOTH operands are true
    // Can drive legally: age >= 18 AND has_license == 1
    printf("Logical AND (age >= 18 && has_license): %d\n", (age >= 18 && has_license));
    
    // Logical OR (||): True if AT LEAST ONE operand is true
    // Eligible for discount: age < 10 OR age > 60
    printf("Logical OR (age < 10 || age > 60): %d\n", (age < 10 || age > 60)); 
    
    // Logical NOT (!): Reverses the logical state
    printf("Logical NOT (!has_license): %d\n", (!has_license));
    
    return 0;
}