//Write a C program to check whether a number is even or odd.
#include<stdio.h>
int main(){
	//Variable Declarating
    int num1;
    int num2;
	//Get input from USER 
    printf("Enter two number to check whether a number is even or odd\n");
    scanf("%d %d",&num1,&num2);
	//Calculation of data & Show calculeted data
	num1%2==0?printf("%d is even",num1):printf("%d is odd",num1);
    num2%2==0?printf("\n%d is even",num2):printf("\n%d is odd",num2);
	return 0;
}
