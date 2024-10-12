// Write a C program to find sum of all natural numbers between 1 to n.   Write a C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>
int main(){
	int num=1;
	int new=10;
	int sum=0;
	while(num<=100){
		   printf("%d + ",num);
		if(new==num){
			printf("\n");
			new=new+10;
		}
		sum=sum+num;
		++num;
	}
	printf("\n:- %d\n",sum);
}

