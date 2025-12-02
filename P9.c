// P9.c - C Program to Compute Student Grade based on total marks and display result (Pass/Fail).
#include <stdio.h>

int main() {
    int total_marks;
    char grade;
    const int PASS_THRESHOLD = 40; // Example pass mark
    
    printf("Enter the total marks (out of 100): ");
    scanf("%d", &total_marks);
    
    printf("\n--- Result ---\n");
    
    // Check Pass/Fail
    if (total_marks >= PASS_THRESHOLD) {
        printf("Status: PASS\n");
        
        // Determine Grade based on marks (example grading scheme)
        if (total_marks >= 90) {
            grade = 'A';
        } else if (total_marks >= 75) {
            grade = 'B';
        } else if (total_marks >= 60) {
            grade = 'C';
        } else if (total_marks >= PASS_THRESHOLD) {
            grade = 'D';
        }
        
        printf("Grade: %c\n", grade);
        
    } else {
        // Less than PASS_THRESHOLD
        printf("Status: FAIL\n");
        printf("Grade: F\n");
    }
    
    return 0;
}