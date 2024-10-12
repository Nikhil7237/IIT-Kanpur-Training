// Write a C program to print day of week name using switch case
#include<stdio.h>
int main(){
	//Variable Declarating
    int day;
    int choice;
	//Get input from USER 
	printf("Enter 0 for exit..\n");
	do{
    printf("Enter a number of day's form of 1 to 7 :-");
    scanf("%d",&day);
	//Calculation of data & Show calculeted data
	    switch(day){
	    	case 1:printf("Sunday");break;
	    	case 2:printf("Monday");break;
	    	case 3:printf("Tuesday");break;
	    	case 4:printf("Wednesday");break;
	    	case 5:printf("Thursday");break;
	    	case 6:printf("Friday");break;
	    	case 7:printf("Saturday");break;
	    	default:printf("Wrong Choice");
		}
	printf("\nEnter your choice :- ");
    	scanf("%d",&choice);
	}while(choice);
	return 0;
}
