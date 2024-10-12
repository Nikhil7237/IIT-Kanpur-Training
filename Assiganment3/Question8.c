//Write a C program to check whether a number is positive, negative, or zero using conditional operator. 
#include<stdio.h>
int main(){
	//Variable Declarating
    int num1;
	//Get input from USER 
	printf("Enter a number :- ");
    scanf("%d",&num1);
	//Calculation of data & Show calculeted data
	 if(num1==0)
	   printf("%d is equal to zero",num1);
	 else
	 if(num1<0)
	   printf("%d is a negative number",num1);
	 else
	   printf("%d is a positive number",num1);
	return 0;
}
