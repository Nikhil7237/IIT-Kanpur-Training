//Write a C program to find roots of a quadratic equation using switch case
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, imaginary;

    // Input coefficients of the quadratic equation
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = (b * b) - (4 * a * c);

    // Switch to check the nature of the discriminant
    switch (discriminant > 0) {
        case 1:
            // If discriminant is positive
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two distinct real roots exist: root1 = %.2f and root2 = %.2f\n", root1, root2);
            break;
        case 0:
            // Nested switch to check if discriminant is zero or negative
            switch (discriminant < 0) {
                case 1:
                    // If discriminant is negative
                    root1 = root2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);
                    printf("Two distinct complex roots exist: root1 = %.2f + %.2fi and root2 = %.2f - %.2fi\n", root1, imaginary, root2, imaginary);
                    break;
                case 0:
                    // If discriminant is zero
                    root1 = root2 = -b / (2 * a);
                    printf("Two equal and real roots exist: root1 = root2 = %.2f\n", root1);
                    break;
            }
            break;
    }

    return 0;
}

