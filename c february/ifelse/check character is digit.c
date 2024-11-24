#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character=");
	scanf("%c",&ch);
	if((ch>='A' && ch<='Z')||(ch>='a'&&ch<='z'))
	{
		printf("character is alphabet:%c",ch);
		
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("character is digit:%d",ch);
	}
	else
	{
		printf("character is special symbol.");
	}
	return 0;
}
