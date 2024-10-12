//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop  
#include<stdio.h>
int main(){
	//Variable Declarating
    int n;
	//Get input from USER 
    printf("Enter n'th number to print natural number from n to 1 :-\n");
    scanf("%d",&n);
    while(n>=1){
    	printf("\n%d",n);
    	--n;
	}
	return 0;
}
