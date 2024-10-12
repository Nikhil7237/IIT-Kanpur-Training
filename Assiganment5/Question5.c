//Write a C program to check whether a number is even or odd using switch case
#include<stdio.h>
int main(){
	//Variable Declarating
    int num;
	//Get input from USER 
	printf("Enter a number to check even/odd :-\n");
	scanf("%d",&num);
	//Calculation of data & Show calculeted data
    switch(num%2==0){
    	case 0:printf("%d is odd",num);break;
    	default :printf("%d is even",num);
	}
	return 0;
}
