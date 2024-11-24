#include<stdio.h>
int main()
{
	int ch;
	 printf("Enter character=");
	 scanf("%c",&ch);
    (ch>='A' & ch<='Z')?printf("character is Uppercase."):(ch>='a' & ch<='z')?printf("character is lowercase."):printf("Invalid character.");
    return 0;
		 
}
