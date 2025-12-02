// P1b.c - C Program for output statement (printf)
#include <stdio.h>

int main() {
    int age = 25;
    float pi = 3.14159;
    char grade = 'A';
    char greeting[] = "Hello, C Programming!";
    printf("1. Simple text output.\n");
    
    // Print different data types using format specifiers
    printf("2. Integer (%%d): %d\n", age);
    printf("3. Float (%%f, 2 decimal places): %.2f\n", pi);
    printf("4. Character (%%c): %c\n", grade);
    printf("5. String (%%s): %s\n", greeting);
    
    // Print multiple variables in one statement
    printf("6. I am %d years old and my grade is %c.\n", age, grade);
    
    return 0;
}

