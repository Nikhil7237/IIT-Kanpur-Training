// Write a C program to find sum of all prime numbers between 1 to n  

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
	int sum=0;
	
	//input a number from user
	
	printf("Enter a n'th position to find sum of prime number between 1 to n'th :-");
	scanf("%d",&num);
	 
	//sum of prime number from 1 to n'th
	
	for(i;i<=num;i++){
		if(findPrime(i))
			sum=sum+i;
	}
	 
	printf("Sum of prime number :- %d",sum);
	return 0;
}

