//Write a C program to find second largest element in an array
#include <stdio.h>  // Required for input and output operations

int main() {
    int n, i, largest, secondLargest;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if the array has at least two elements
    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 1;  // Exit the program if less than two elements
    }

    int array[n];  // Declare an array of size 'n'

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Initialize largest and secondLargest to minimum possible values
    largest = secondLargest = -2147483648;  // INT_MIN

    // Traverse the array to find the largest and second largest
    for (i = 0; i < n; i++) {
        if (array[i] > largest) {
            secondLargest = largest;  // Update secondLargest before changing largest
            largest = array[i];  // Update largest
        } else if (array[i] > secondLargest && array[i] != largest) {
            secondLargest = array[i];  // Update secondLargest if conditions are met
        }
    }

    // Check if secondLargest was updated (handle case where all elements are the same)
    if (secondLargest == -2147483648) {
        printf("There is no distinct second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;  // Indicating successful program termination
}

