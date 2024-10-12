// Write a C program to print all natural numbers from 1 to n. - using while loop  
#include<stdio.h>
int main(){
	//Variable Declarating
	int n;
	int i=1;
	//Get input from USER 
    printf("Enter n'th value to print natural number :-\n");
    scanf("%d",&n);
	while(i<=n){
		printf("%d\n",i);
		++i;
	}
	return 0;
}
