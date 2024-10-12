//Write a C program to check whether a number is even or odd using conditional operator.   
#include<stdio.h>
int main(){
	//Variable Declarating
    int num;
	//Get input from USER 
    printf("Enter a Number check whether a number is even or odd :- ");
    scanf("%d",&num);
	//Calculation of data & Show calculeted data
    if(num%2==0)
	  printf("%d is Even !",num);
	else
	  printf("%d is Odd !",num);  
	return 0;
}
