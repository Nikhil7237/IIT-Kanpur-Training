#include<stdio.h>
int main(){
	//Variable Declarating
	  float temp;
	  register float total=0;
      register float i;
	//Get input from USER 
       printf("Enter marks of five subject :- ");
       for(i=0;i<5;i++){
       	    scanf("%f",&temp);
       	    total=total+temp;
	   }
	//Calculat data & Show calculeted data
       printf("Total :- %0.2f",total);
       printf("\nAverage :- %0.2f",total/5);
       printf("\nPercentage :- %0.2f%%",total*100/500);
	return 0;
}
