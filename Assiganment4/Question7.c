//Write a C program to find all roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main(){
	//Variable Declarating
    float a,b,c,dis,root1,root2;
	//Get input from USER 
    printf("Enter two number find all roots of a quadratic equation :-\n");
    printf("Enter a :- ");
    scanf("%f",&a);
    printf("Enter b :- ");
    scanf("%f",&b);
    printf("Enter c :- ");
    scanf("%f",&c);
	//Calculation of data 
	dis=(pow(b,2)-(4*a*c));
	dis=sqrt(dis);
	root1=(-b+dis)/(2*a);
	root2=(-b-dis)/(2*a);
	//Show calculeted data
    printf("Root1 :- %0.2f Root2 :- %0.2f",root1,root2);
	return 0;
}
