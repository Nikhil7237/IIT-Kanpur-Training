//Write a C program to find sum of all array elements
#include <stdio.h>  // Required for input and output operations

int main() {
    int n, i, sum = 0;  // Variables for number of elements, loop index, and sum

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];  // Declare an array of size 'n'

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];  // Add each element to the sum
    }

    // Display the sum of the array elements
    printf("The sum of all array elements is: %d\n", sum);

    return 0;  // Indicating successful program termination
}

