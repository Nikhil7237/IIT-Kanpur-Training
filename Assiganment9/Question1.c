// Write a C program to read and print elements of array
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
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Display the elements of the array
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");  // Newline for better formatting

    return 0;  // Indicating successful program termination
}

