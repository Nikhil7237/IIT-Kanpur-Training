// Write a C program to calculate product of digits of a number  

# include<stdio.h>
int main(){
	
	//Variable Declarating
	
	int num;
	int product=1;
	
	//input a number from user
	
	printf("Enter a number to find product of number :-");
	scanf("%d",&num);
	 
	//find product by loop
	
	while(num>0){
		product=product*(num%10);
		num=num/10;
	} 
	
	printf("\nSum of first and last digits:- %d\n\n",product);
}

