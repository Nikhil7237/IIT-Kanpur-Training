/*
  Write a C program to demonstrate the use of logical operators by checking whether a given 
  number lies within a specified range (e.g., between 10 and 20).
*/
#include<stdio.h>
int main(){
	//Variable Declarating
    int num1;
	//Get input from USER 
	printf("Enter a number between 10 to 20 range :- ");
    scanf("%d",&num1);
	//Calculation of data & Show calculeted data
    if(num1>=10&&num1<=20)
       printf("%d is in range between 10 to 20 ",num1);
    else
       printf("%d is out of range",num1);
	return 0;
}
