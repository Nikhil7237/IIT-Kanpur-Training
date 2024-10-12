//Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>
int main(){
	//Variable Declarating
    char ch;
	//Get input from USER 
    printf("Enter a character to check whether a character is uppercase or lowercase alphabet :- ");
    scanf("%c",&ch);
	//Calculation of data & Show calculeted data
	ch>='A'&&ch<='Z'?printf("%c is an Uppercase character",ch):printf("%c is an  lowercase character",ch);
	return 0;
}
