// Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>
int main(){
	//Variable Declarating
    int x;
	//Get input from USER 
    printf("Enter a number to check whether a number is negative,positive or zero\n");
	scanf("%d",&x);   
	//Calculation of data 
	x>-1?printf("%d is Positive number",x):x==0?printf("%d is Zero number",x):printf("%d is negative number",x);
	//Show calculeted data

	return 0;
}
