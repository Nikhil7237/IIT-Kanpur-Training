//Write a C program to find maximum between two numbers using conditional operator   
#include<stdio.h>
int main(){
	//Variable Declarating
    int num1;
    int num2;
	//Get input from USER 
    printf("Enter a number :- ");
	scanf("%d",&num1);
	printf("Again Enter a number :- ");
	scanf("%d",&num2);
	//Calculation of data & Show calculeted data
    if(num1>num2)
      printf("%d is maximum between two numbers",num1);
    else
      printf("%d is maximum between two numbers",num2);
	return 0;
}
