#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	printf("Enter string from user");
	gets(str);
	int len=strlen(str);
	for(i=len-1;i>0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
	
}
