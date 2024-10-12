// Write a C program to find first and last digit of a number

# include<stdio.h>
int main(){
	
	//Variable Declarating
	int num;
	int copy_of_num;
	int first;
	int last;
	
	//input a number from user
	printf("Enter a number to find first and last digits of number :-");
	scanf("%d",&num);
	copy_of_num=num;
	 
	//find first and last digit by loop
	
	while(num>0){
		if(num==copy_of_num)
		  last=num%10;
		first=num%10;
		num=num/10;
	} 
	
	printf("\nFirst digit of number :- %d\nLast digit of number:- %d\n\n",first,last);
}
