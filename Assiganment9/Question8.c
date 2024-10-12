//Write a C program to copy all elements from an array to another array
#include <stdio.h>  // Required for input and output operations

int main() {
    int n, i;  // Variables for the number of elements and loop index

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array1[n], array2[n];  // Declare two arrays of size 'n'

    // Input elements into the first array
    printf("Enter %d elements for the first array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }

    // Copy elements from array1 to array2
    for (i = 0; i < n; i++) {
        array2[i] = array1[i];
    }

    // Display the elements of the second array (copied elements)
    printf("Elements of the second array (copied from the first array):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array2[i]);
    }

    printf("\n");  // Newline for better formatting

    return 0;  // Indicating successful program termination
}

