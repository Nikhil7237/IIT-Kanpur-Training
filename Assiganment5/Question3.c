// Write a C program to check whether an alphabet is vowel or consonant using switch case
#include<stdio.h>
int main(){
	//Variable Declarating
    char ch;
	//Get input from USER 
    printf("Enter a char to check whether an alphabet is vowel or consonant :-\n");
	scanf("%c",&ch);   
	//Calculation of data & Show calculeted data
    switch(ch){
    	case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':printf("%c is a vowel..",ch);break;
    	default:printf("%c is a consonant..");
	}
	return 0;
}
