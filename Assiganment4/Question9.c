//Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition
#include <stdio.h>
int main() {
    float unit, bill, surcharge;
    
    // Input the number of units
    printf("Enter the number of units: ");
    scanf("%f", &unit);
    
    // Calculate the bill using ternary operators
    bill = (unit <= 50) ? (unit * 0.50) :
           (unit <= 150) ? (50 * 0.50 + (unit - 50) * 0.75) :
           (unit <= 250) ? (50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20) :
           (50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50);
    
    // Add surcharge
    surcharge = bill * 0.20;
    bill += surcharge;
    
    // Print the total bill
    printf("Total electricity bill: Rs. %.2f\n", bill);
    
    return 0;
}

