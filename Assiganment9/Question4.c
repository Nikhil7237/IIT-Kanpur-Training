//Write a C program to find maximum and minimum element in an array.
#include <stdio.h>  // Required for input and output operations

int main() {
    int n, i, max, min;  // Variables for number of elements, loop index, max and min

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];  // Declare an array of size 'n'

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Initialize max and min to the first element of the array
    max = min = array[0];

    // Traverse the array to find max and min
    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];  // Update max if current element is greater
        }
        if (array[i] < min) {
            min = array[i];  // Update min if current element is smaller
        }
    }

    // Display the maximum and minimum elements
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;  // Indicating successful program termination
}

