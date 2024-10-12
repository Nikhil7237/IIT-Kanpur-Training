#include<stdio.h>
int main(){
	//Variable Declarating
      float p;
      float r;
      float t;
      float si;
	//Get input from USER 
      printf("Enter Principal :-");
      scanf("%f",&p);
      printf("Enter Time :-");
      scanf("%f",&t);
      printf("Enter Rate :-");
      scanf("%f",&r);
	//Calculation of data 
	  si=(p*r*t)/100;  
	//Show calculeted data
      printf("\nSimple Interest is :- %0.4f",si);
	return 0;
}
