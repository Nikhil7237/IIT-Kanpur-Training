//Write a C program to swap two numbers using bitwise operator
#include<stdio.h>
int main(){
	//Variable Declarating
    int num1;
    int num2;
	//Get input from USER 
    printf("Enter a number value of X :- ");
    scanf("%d",&num1);
    printf("Enter a number value of Y :- ");
    scanf("%d",&num2);
	//Calculation of data 
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	//Show calculeted data
	printf("X :- %d\n",num1);
	printf("Y :- %d",num2);
	return 0;
}
