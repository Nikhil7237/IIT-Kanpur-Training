 //Write a C program to find HCF (GCD) of two numbers.  
 
 #include <stdio.h>
int main() {
    int num1, num2, i, hcf;

    // Input two numbers from user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Loop to find HCF
    for(i = 1; i <= num1 && i <= num2; ++i) {
        // Checks if i is factor of both integers
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    printf("HCF of %d and %d is %d", num1, num2, hcf);
    return 0;
}

