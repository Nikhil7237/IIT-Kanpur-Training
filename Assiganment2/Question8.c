#include<stdio.h>
int main(){
	//Variable Declarating
      int num1,num2;
	//Get input from USER 
      printf("Enter two number vlues for Num1 Num2 :-");
	  scanf("%d %d",&num1,&num2); 
	//Calculation of data 
	  num1=num1+num2;
	  num2=num1-num2;
	  num1=num1-num2;	  
	//Show calculeted data
      printf("Value after swaping of Num1:- %d Num2:- %d",num1,num2);
	return 0;
}
