#include<stdio.h>
#include<math.h>
int main(){
	//Variable Declarating
      float side;
	//Get input from USER 
      printf("Enter side of the equilateral triangle :- ");
      scanf("%f",&side);
	//Calculat data & Show calculeted data
	  printf("Area of equilateral triangle :- %0.1f sq.units",(((sqrt(3))/4)*(side*side)));
	return 0;
}
