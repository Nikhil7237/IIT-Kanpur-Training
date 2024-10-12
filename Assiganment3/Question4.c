//Write a C program to check whether year is leap year or not using conditional operator.   
#include<stdio.h>
int main(){
	//Variable Declarating
    int year;
	//Get input from USER 
    printf("Enter a year check whether year is leap year or not :- ");
    scanf("%d",&year);
	//Calculation of data & Show calculeted data
    if((year%4==0)&&(year%100!=0||year%400==0))
	  printf("%d is leap year !",year);
	else
	  printf("%d is not leap year !",year);  
	return 0;
}
