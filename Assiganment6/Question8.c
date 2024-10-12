//Write a C program to find sum of all odd numbers between 1 to n.  
#include<stdio.h>
int main(){
	int num=1;
	int new=20;
	int sum=0;
	while(num<=100){
		if(num%2!=0){
		   printf("%d + ",num);
		   sum=sum+num;
	    }
		if(new==num){
			printf("\n");
			new=new+20;
		}
		++num;
	}
	printf("\n:- %d\n",sum);
}
