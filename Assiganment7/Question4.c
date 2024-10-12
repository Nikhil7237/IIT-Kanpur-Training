//Write a C program to enter a number and print it in words
#include<stdio.h>
void printChar(int num){
	switch(num){
		case 1:printf("One\n");break;
		case 2:printf("Two\n");break;
		case 3:printf("Three\n");break;
		case 4:printf("For\n");break;
		case 5:printf("Five\n");break;
		case 6:printf("Six\n");break;
		case 7:printf("Seven\n");break;
		case 8:printf("Eight\n");break;
		default:printf("Nine\n");break;
	}
}
int main(){
	//Variable Declarating
    int num;
    int num1=0;
	//Get input from USER 
    printf("Enter a number :-");
	scanf("%d",&num); 
	printf("\n\n");
	//Calculation of data 
	while(num>0){
		num1=(num1*10)+num%10;
		num=num/10;
	}
	//Show calculeted data
    while(num1>0){
    	int temp=num1%10;
    	num1=num1/10;
    	printChar(temp);
	}
	return 0;
}
