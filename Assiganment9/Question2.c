//Write a C program to print all negative elements in an array
#include <stdio.h>  // Required for input and output operations

int main() {
    int n, i;  // Variables for the number of elements and loop index

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];  // Declare an array of size 'n'

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Display negative elements of the array
    printf("Negative elements in the array are:\n");
    for (i = 0; i < n; i++) {
        if (array[i] < 0) {  // Check if the element is negative
            printf("%d ", array[i]);
        }
    }

    printf("\n");  // Newline for better formatting

    return 0;  // Indicating successful program termination
}

