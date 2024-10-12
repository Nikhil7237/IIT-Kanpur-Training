//Write a C program to enter a number and print its reverse
#include<stdio.h>
int main(){
	//Variable Declarating
	int num;
	//Geting data from user 
	printf("Enter a number :- ");
	scanf("%d",&num);
	//Showing data after of data operation
	while(num>0){
		int temp=0;
		temp=num%10;
		num=num/10;
		printf("%d ",temp);
	}
}
