/*
  Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics        and 
  Computer.   
  Calculate percentage and grade according to following
*/
#include <stdio.h>
int main() {
    float physics, chemistry, biology, mathematics, computer;
    float total, percentage;
    char grade;

    // Input marks of five subjects
    printf("Enter marks of Physics: ");
    scanf("%f", &physics);
    printf("Enter marks of Chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter marks of Biology: ");
    scanf("%f", &biology);
    printf("Enter marks of Mathematics: ");
    scanf("%f", &mathematics);
    printf("Enter marks of Computer: ");
    scanf("%f", &computer);

    // Calculate total and percentage
    total = physics + chemistry + biology + mathematics + computer;
    percentage = total / 5.0;

    // Determine grade using ternary operators
    grade = (percentage >= 90) ? 'A' :
            (percentage >= 80) ? 'B' :
            (percentage >= 70) ? 'C' :
            (percentage >= 60) ? 'D' :
            (percentage >= 40) ? 'E' : 'F';

    // Print percentage and grade
    printf("Percentage = %.2f\n", percentage);
    printf("Grade = %c\n", grade);

    return 0;
}

