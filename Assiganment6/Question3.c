//Write a C program to print all alphabets from a to z. - using while loop
#include<stdio.h>
int main(){
	char ch='a';
	while(ch<='z'){
		printf("%c    ",ch);
		if(ch=='e'||ch=='j'||ch=='o'||ch=='t'||ch=='y')
		  printf("\n");
		++ch;
	}
}
