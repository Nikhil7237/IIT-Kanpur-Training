//Write a C program to insert an element in an array.
#include <stdio.h>  // Required for input and output operations

int main() {
    int n, i, element, position;  // Variables for number of elements, element to insert, and position

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n + 1];  // Declare an array of size 'n + 1' to accommodate the new element

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Input the element to insert and its position
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position > n) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", n);
        return 1;  // Exit the program if the position is invalid
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i > position; i--) {
        array[i] = array[i - 1];  // Move elements to the right
    }

    // Insert the new element at the specified position
    array[position] = element;

    // Display the updated array
    printf("Updated array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");  // Newline for better formatting

    return 0;  // Indicating successful program termination
}

