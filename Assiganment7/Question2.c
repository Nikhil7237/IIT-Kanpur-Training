//Write a C program to check whether a number is palindrome or not
#include<stdio.h>
int main(){
	//Variable Declarating
    int num;
    int nnum;
    int pnum=0;
	//Get input from USER 
    printf("Enter a number :- ");
	scanf("%d",&num);
	nnum=num;
	//Calculation of data 
	while(num>0){
		pnum=(pnum*10)+num%10;
		num=num/10;
	}
	//Show calculeted data
    if(pnum==nnum)
       printf("%d is a palindrome number",nnum);
    else
       printf("%d is not a palindrome number",nnum); 
	return 0;
}
