//Write a C program to count total number of even and odd elements in an array
#include <stdio.h>  // Required for input and output operations

int main() {
    int n, i, evenCount = 0, oddCount = 0;  // Variables for number of elements, even count, and odd count

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];  // Declare an array of size 'n'

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Traverse the array to count even and odd elements
    for (i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            evenCount++;  // Increment evenCount if the element is even
        } else {
            oddCount++;  // Increment oddCount if the element is odd
        }
    }

    // Display the counts of even and odd elements
    printf("Total even elements: %d\n", evenCount);
    printf("Total odd elements: %d\n", oddCount);

    return 0;  // Indicating successful program termination
}

