#include<stdio.h>
#include<string.h>
int main(){
	//Variable Declarating
      char chars[20];
      register int i=0,len;
	//Get input from USER 
      printf("Test Characters :-");
      scanf("%s",&chars[i]);
      len=strlen(chars)-1;
	//Show calculeted data
      printf("The reverse of %s is ",chars);
      for(;len>=0;len--)
        printf("%c",chars[len]);
	return 0;
}
