//Write a C program to print multiplication table of any number.  
#include<stdio.h>
int main(){
	int num;
	int count=1;
	printf("Enter a number to printf a table :-\n");
	scanf("%d",&num);
	while(count<=10){
		printf("%d * %d :- %d\n",num,count,(num*count));
		++count;
	}
}
