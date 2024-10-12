//Write a C program to enter a four digit number and print all digit.
#include<stdio.h>
int main(){
	//Variable Declarating
    int num1,num2=0;
	//Get input from USER 
    printf("Enter only four digit number :-");
	scanf("%d",&num1);   
	//Calculation of data & Show calculeted data
	while(num1){
    	num2=num2*10+(num1%10);
    	num1=num1/10;
	}
    while(num2){
    	printf("   :-%d\n",(num2%10));
    	num2=num2/10;
	}
	return 0;
}
