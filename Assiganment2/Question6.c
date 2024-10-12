#include<stdio.h>
int main(){
	//Variable Declarating
      float km;
      int l_km;
	//Get input from USER 
      printf("Input total distance in km: ");
      scanf("%f",&km);
      printf("Input total fuel spent in liters: ");
      scanf("%d",&l_km);
	//Calculation of data & Show calculeted data
	  printf("\nAverage consumption (km/lt) %0.3f",(km/l_km));
	return 0;
}
