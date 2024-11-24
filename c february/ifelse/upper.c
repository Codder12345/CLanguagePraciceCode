#include<stdio.h>
#include<conio.h>
int main()
{
	char ch,upper,lower;
	printf("Enter any character=");
	scanf("%c",&ch);
	upper=ch>='A'&&ch<='Z';
	lower=ch>='a'&& ch<='z';
	if(upper)
	{
		printf("character is uppercase:%c",ch);
	}
	else
	{
		if(lower)
		printf("character is Lowercase:%c",ch);
	}
	return 0;
}
