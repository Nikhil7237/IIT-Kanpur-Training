//. Write a C program to count total number of negative elements in an array.  
#include <stdio.h>  // Required for input and output operations

int main() {
    int n, i, negativeCount = 0;  // Variables for number of elements, loop index, and count of negative elements

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];  // Declare an array of size 'n'

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Traverse the array to count negative elements
    for (i = 0; i < n; i++) {
        if (array[i] < 0) {
            negativeCount++;  // Increment negativeCount if the element is negative
        }
    }

    // Display the count of negative elements
    printf("Total negative elements: %d\n", negativeCount);

    return 0;  // Indicating successful program termination
}

