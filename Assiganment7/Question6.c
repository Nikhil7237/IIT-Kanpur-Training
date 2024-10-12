// Write a C program to find power of a number using for loop
#include<stdio.h>
#include<math.h>
int main(){
	//Variable Declarating
    int num;
    int i=1;
	//Get input from USER 
    printf("Enter a number to power from 1 to n'th position :-");
    scanf("%d",&num);
	//Calculation of data Show calculeted data
    for(i;i<=num;i++){
    	int result=0;
    	result=pow(i,2);
    	printf("\n%d^2 :- %d",i,result);
	}
	return 0;
}
