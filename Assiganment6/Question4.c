//Write a C program to print all even numbers between 1 to 100. - using while loop 
#include<stdio.h>
int main(){
	int num=1;
	int new=20;
	while(num<=100){
		if(num%2==0)
		   printf("%d  ",num);
		if(new==num){
			printf("\n");
			new=new+20;
		}
		++num;
	}
}
