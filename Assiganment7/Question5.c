// Write a C program to print all ASCII character with their values.
#include<stdio.h>
int main(){
	//Variable Declarating
    int num;
    int num2;
	//Get input from USER 
    printf("Enter a number :-");
	scanf("%d",&num);  
	//Calculation of data Show calculeted data
	while(num>0){
		num2=(num2*10)+num%10;
		num=num/10;
	}
	while(num2>0){
	    char temp=num2%10;
	    num2=num2/10;
	    printf
		("%d ASCII is :- %c\n",temp,temp);
	}
	return 0;
}
