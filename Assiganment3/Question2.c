//Write a C program to find maximum between three numbers using conditional operator
#include<stdio.h>
int main(){
	//Variable Declarating
    int num1;
    int num2;
    int num3;
	//Get input from USER 
    printf("Enter first number :- ");
    scanf("%d",&num1);
    printf("Enter secend number :- ");
    scanf("%d",&num2);
    printf("Enter Third number :- ");
    scanf("%d",&num3);
	//Calculation of data & Show calculeted data 
	if(num1>num2){
		if(num1>num3)
		   printf("%d is Maximum",num1);
		else
		   printf("%d is Maximum",num3);
	} else{
	    if(num2>num3)
	       printf("%d is Maximum",num2);
		else
		   printf("%d is Maximum",num3);
	} 
	return 0;
}
