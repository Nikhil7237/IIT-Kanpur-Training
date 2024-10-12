// Write a C program to input angles of a triangle and check whether triangle is valid or not
#include<stdio.h>
int main(){
	//Variable Declarating
    int a1,a2,a3;
	//Get input from USER 
    printf("Enter three angles of a triangle and check whether triangle is valid or not :-\n");
    scanf("%d %d %d",&a1,&a2,&a3);
	//Calculation of data & Show calculeted data
    (a1+a2+a3)==180?printf("Valid"):printf("Invalid");
	return 0;
}
