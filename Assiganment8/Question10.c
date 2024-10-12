//Write a C program to check whether a number is Armstrong number or not  

# include<stdio.h>
# include<math.h>

int main(){
	
	//Variable Declarating
	
	int num;
	int num1;
	int length=0;
	int sum=0;
	
	//input a number from user
	
	printf("Enter a number to check whether a number is Armstrong number or not  :-");
	scanf("%d",&num);
	
	//find length of number
	
	num1=num;
	while(num>0){
		++length;
		num=num/10;
	}
	num=num1;
	 
	//check number is Armstrong or not
	
	while(num1>0){
		int temp=num1%10;
		int pw=pow(temp,length);
		sum=sum+pw;
		num1=num1/10;
	}
	
	if(sum==num)
     	printf("%d is a  Armstrong number",sum);
    else
        printf("%d is not a  Armstrong number",num);
	return 0;
}

