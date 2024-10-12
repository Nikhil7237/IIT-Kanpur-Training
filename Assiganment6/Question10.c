// Write a C program to count number of digits in a number
#include<stdio.h>
int main(){
	int num;
	int count;
	printf("Enter a number to count number of digit :- ");
	scanf("%d",&num);
	while(num>0){
		num=num/10;
		++count;
	}
	printf("Total number of digit is :- %d",count);
}
