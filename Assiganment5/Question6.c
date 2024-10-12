// Write a C program to check whether a number is positive, negative or zero using switch case
#include<stdio.h>
int main(){
	//Variable Declarating
    int num;
	//Get input from USER 
    printf("Enter a number check whether a number is positive, negative or zero :-\n");
    scanf("%d",&num);
	// Switch to check if number is positive, negative, or zero
    switch (num > 0) {
        case 1:
            printf("%d is positive.\n", num);
            break;
        case 0:
            switch (num < 0) {
                case 1:
                    printf("%d is negative.\n", num);
                    break;
                case 0:
                    printf("%d is zero.\n", num);
                    break;
            }
            break;
    }
	return 0;
}
