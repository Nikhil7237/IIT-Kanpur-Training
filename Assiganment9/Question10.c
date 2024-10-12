//Write a C program to delete an element from an array at specified position.
#include <stdio.h>  // Required for input and output operations

int main() {
    int n, i, position;  // Variables for number of elements and position of the element to delete

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];  // Declare an array of size 'n'

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Input the position to delete
    printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position >= n) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", n - 1);
        return 1;  // Exit the program if the position is invalid
    }

    // Shift elements to the left to delete the specified element
    for (i = position; i < n - 1; i++) {
        array[i] = array[i + 1];  // Move elements to the left
    }

    // Decrease the size of the array
    n--;

    // Display the updated array
    printf("Updated array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");  // Newline for better formatting

    return 0;  // Indicating successful program termination
}

