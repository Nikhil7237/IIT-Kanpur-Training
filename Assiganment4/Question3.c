//Write a C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
int main(){
	//Variable Declarating
    char ch;
	//Get input from USER 
    printf("Enter a character and check whether it is alphabet, digit or special character :-\n");
    scanf("%c",&ch);
	//Calculation of data && Show calculeted data
	ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'    ?
	    printf("%c is an Alphabet\n",ch)  :
    ch>='0'&&ch<='9'                      ?
	    printf("%c is a digit\n",ch)      :
	printf("%c is a Special character",ch);
	return 0;
}
