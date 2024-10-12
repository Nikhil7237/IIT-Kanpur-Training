// Write a C program to find frequency of each digit in a given integer.  
#include<stdio.h>
int main(){
	//Variable Declarating
    int num,digit;
    int arr[10]={0};
    int i;
	//Get input from USER 
    printf("Enter the number :-");
    scanf("%d",&num);
	//Calculation of data 
	while(num>0){
		arr[num%10]++;
		num=num/10;
	}
	//Show calculeted data
    for(i=0;i<10;i++){
    	if(arr[i]!=0){
    		printf("%d -> %d\n",i,arr[i]);
		}
	}
	return 0;
}
