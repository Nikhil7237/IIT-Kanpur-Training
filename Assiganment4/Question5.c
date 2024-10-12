//Write a C program to enter month number and print total number of days in month. (Excluding Leap Year)
#include<stdio.h>
int main(){
	//Variable Declarating
    int num;
	//Get input from USER 
    printf("Enter a month number to print total number of days in month :-\n");
    scanf("%d",&num);
	//Calculation of data 
	num==2?printf("28/29"):num%2==0?printf("30"):printf("31");
	//Show calculeted data

	return 0;
}
