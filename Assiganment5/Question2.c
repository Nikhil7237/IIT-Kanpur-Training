// Write a C program print total number of days in a month using switch case
#include<stdio.h>
int main(){
	//Variable Declarating
    int mon;
	//Get input from USER 
    printf("Enter number of month for get number of day's :- ");
	scanf("%d",&mon);
	//Calculation of data & Show calculeted data
	mon==2?:(mon=mon%2==0);
	switch(mon){
		case 2:printf("28/29");break;
		case 1:printf("30");break;
		default :printf("31");break;
	}
	return 0;
}
