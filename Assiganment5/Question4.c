//Write a C program to find maximum between two numbers using switch case
#include<stdio.h>
int main(){
	//Variable Declarating
    int num1;
    int num2;
	//Get input from USER 
	printf("Enter two number's to find max :-\n");
	scanf("%d %d",&num1,&num2);
	//Calculation of data & Show calculeted data
    switch(num1>num2){
    	case 0:printf("%d is maximum",num2);break;
    	default :printf("%d is maximun",num1);
	}
	return 0;
}
