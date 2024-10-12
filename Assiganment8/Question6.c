// Write a C program to check whether a number is Prime number or not  

# include<stdio.h>
int main(){
	
	//Variable Declarating
	
	int num;
	int i=2;
	int check=0;
	
	//input a number from user
	
	printf("Enter a number to check it's prime or not :-");
	scanf("%d",&num);
	 
	//check number prime or not
	
	for(i;i<num;i++){
		if(num%i==0){
			printf("\n%d is not a prime number \n\n",num);
			check=1;
			break;
		}
	}
	if(check==0)
	  printf("\n%d is a prime number \n\n",num);
}

