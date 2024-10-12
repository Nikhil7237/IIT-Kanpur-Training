//Write a C program to categorize a grade based on marks using switch case.
#include <stdio.h>

int main() {
    int marks;

    // Input marks from user
    printf("Enter the marks (0-100): ");
    scanf("%d", &marks);

    // Check if marks are within valid range
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
    } else {
        // Switch to categorize grade based on marks
        switch (marks / 10) {
            case 10:
            case 9:
                printf("Grade: A\n");
                break;
            case 8:
                printf("Grade: B\n");
                break;
            case 7:
                printf("Grade: C\n");
                break;
            case 6:
                printf("Grade: D\n");
                break;
            case 5:
                printf("Grade: E\n");
                break;
            default:
                printf("Grade: F\n");
        }
    }
    return 0;
}

