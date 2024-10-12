// Write a C program to swap first and last digits of a number

# include<stdio.h>
int main(){
	
	//Variable Declarating
	
	int num;
	int copy_of_num;
	int revers_num=0;
	int swap_num=0;
	int first;
	int last;
	
	//input a number from user
	
	printf("Enter a number to find sum of first and last digits of number :-");
	scanf("%d",&num);
	copy_of_num=num;
	
	//find last digit
	last=num%10;
	 
	//find first digit by loop
	
	while(num>0){
		first=num%10;
		revers_num=(revers_num*10)+num%10;
		num=num/10;
	} 

	//Swaping of values
	
	swap_num=last;
	while(revers_num>0){
		int temp=revers_num%10;
		if(!(temp==first||temp==last))
		   swap_num=(swap_num*10)+temp;
		revers_num=revers_num/10;
	}
	swap_num=(swap_num*10)+first;
	
	printf("\nNumber after of swap first and last digits :- %d\n\n",swap_num);
}
