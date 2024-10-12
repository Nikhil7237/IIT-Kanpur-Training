//Write a C program to find the absolute value of a number using conditional operator.  
#include<stdio.h>
int main(){
	//Variable Declarating
    int num1;
	//Get input from USER 
    printf("Enter a number to find absolute value of a number :- ");
	scanf("%d",&num1);  
	//Calculation of data & Show calculeted data
	if(num1<0)
	  printf("Absolute value is :- %d",-(num1));
	else
	  printf("Absolute value is :- %d",(num1));
	return 0;
}
