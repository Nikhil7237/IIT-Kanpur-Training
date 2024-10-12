// Write a C program to print all Prime numbers between 1 to n  

# include<stdio.h>

// Fumction to check number prime or not
int findPrime(int num){
	int i=2;
	for(i;i<num;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	
	//Variable Declarating
	
	int num;
	int i=2;
	
	//input a number from user
	
	printf("Enter a n'th position to find prime number between 1 to n'th :-");
	scanf("%d",&num);
	 
	//check number prime or not from 1 to n'th
	
	for(i;i<=num;i++){
		if(findPrime(i))
			printf("\n%d",i);
	}
	return 0;
}

