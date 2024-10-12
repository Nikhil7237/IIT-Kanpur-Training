#include<stdio.h>
int main(){
	//Variable Declarating
      float w_item;
      int   n_item;
      int   t_item=0;
	  float f_wait=0; 
	  int i=1;
	//Get input from USER & Calculation of data 
	  for(;i<=2;i++){
	  	 printf("Weight - Item%d:",i);
	  	 scanf("%f",&w_item);
	  	 printf("No. of item%d:",i);
	  	 scanf("%d",&n_item);
	  	 t_item=t_item+n_item;
	  	 f_wait=f_wait+(w_item*n_item);
	  }
	//Show calculeted data
      printf("Expected Output: \nAverage Value :- %f",f_wait/t_item);
	return 0;
}
