#include<stdio.h>
#include<math.h>
int main(){
	//Variable Declarating
      int principle;
      int time;
      float temp;
      float rate;
      float ci;
	//Get input from USER 
       printf("Enter Principle amount :- ");
       scanf("%d",&principle);
       printf("Enter time :- ");
       scanf("%d",&time);
       printf("Enter rate :- ");
       scanf("%f",&rate);
	//Calculat data 
	   ci=principle-(principle*(pow((1+(rate/100)),time)));
	//Show calculeted data
       printf("Compound Interest :- %f",ci);
	return 0;
}
