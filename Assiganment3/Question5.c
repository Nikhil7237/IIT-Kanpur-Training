//Write a C program to check whether character is an alphabet or not using conditional operator.   
#include<stdio.h>
int main(){
	//Variable Declarating
    char ch;
	//Get input from USER 
    printf("Enter a character to check whether character is an alphabet or not :- ");
    scanf("%c",&ch);
	//Calculation of data & Show calculeted data
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
	  printf("%c is an alphabet",ch);
	else
	  printf("%c is not an alphabet",ch);
	return 0;
}
