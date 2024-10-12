//Write a C program to create Simple Calculator using switch case
#include<stdio.h>
int main(){
	//Variable Declarating
    int num1;
    int num2;
    char ch;
	//Get input from USER 
    printf("Enter num 1 :- ");
	scanf("%d",&num1);
	printf("Enter num 2 :- ");
	scanf("%d%*c",&num2);
	printf("Enter operation symbol :- ");
	scanf("%c",&ch);   
	
	switch(ch){
		case '+':printf("%d %c %d :- %d",num1,ch,num2,(num1+num2));break;
		case '-':printf("%d %c %d :- %d",num1,ch,num2,(num1-num2));break;
		case '*':printf("%d %c %d :- %d",num1,ch,num2,(num1*num2));break;
		case '/':printf("%d %c %d :- %d",num1,ch,num2,(num1/num2));break;
		case '%':printf("%d %c %d :- %d",num1,ch,num2,(num1%num2));break;
		default :printf("Wrong symlob choice");
	}
	return 0;
}
