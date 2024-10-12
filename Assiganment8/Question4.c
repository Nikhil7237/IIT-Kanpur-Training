//Write a C program to calculate sum of digits of a number

# include<stdio.h>
int main(){
	
	//Variable Declarating
	int num;
	int sum=0;
	
	//input a number from user
	printf("Enter a number to calculate sum of digit's of a number :-");
	scanf("%d",&num);
	 
	//find sum of digit's by loop
	
	while(num>0){
		sum=sum+num%10;
		num=num/10;
	} 
	
	printf("\nSum of digit's:- %d\n\n",sum);
}
