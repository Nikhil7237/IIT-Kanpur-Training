//Write a C program to calculate factorial of a number.  
#include<stdio.h>
#include<math.h>
int main(){
	//Variable Declarating
    int num;
    int i=1;
    int fact=1;
	//Get input from USER 
    printf("Enter a number to factorial of a number :-");
    scanf("%d",&num);
	//Calculation of data Show calculeted data
	printf("\nFactorial of a numbers :- ");
    for(i;i<=num;i++){
    	fact=fact*i;
	}
	printf("%d\n\n",fact);
	return 0;
}
