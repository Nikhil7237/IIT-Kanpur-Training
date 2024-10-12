//Write a C program to check whether triangle is equilateral, scalene or isosceles
//Input: all side's Length
#include<stdio.h>
int main(){
	//Variable Declarating
    int s1,s2,s3;
	//Get input from USER 
    printf("Enter Side 1 :- ");
    scanf("%d",&s1);
    printf("Enter Side 2 :- ");
    scanf("%d",&s2);
    printf("Enter Side 3 :- ");
    scanf("%d",&s3);
	//Calculation of data && Show calculeted data
    (s1==s2)?(s2==s3)?printf("Equilateral"):printf("Not Equilateral"):printf("Not Equilateral");
	return 0;
}
