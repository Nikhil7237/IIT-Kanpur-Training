//Write a C program to find all factors of a number
#include<stdio.h>
#include<math.h>
int main(){
	//Variable Declarating
    int num;
    int i=1;
	//Get input from USER 
    printf("Enter a number to find all factors of a number :-");
    scanf("%d",&num);
	//Calculation of data Show calculeted data
	printf("\nAll factors of a numbers :- ");
    for(i;i<=num;i++){
    	if(num%i==0)
        	printf(" %d",i);
	}
	return 0;
}
