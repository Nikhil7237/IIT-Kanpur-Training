#include<stdio.h>
int main(){
	//Variable Declarating
      float f_temp;
      float c_temp;
	//Get input from USER 
      printf("Enter temperature in Fahrenheit :- ");
      scanf("%f",&f_temp);
	//Calculation of data 
	  c_temp=((f_temp-32)*5)/9;  
	//Show calculeted data
      printf("Temperature in celsius :- %0.2f",c_temp);
	return 0;
}
