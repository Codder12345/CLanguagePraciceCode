#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,count=0;
	printf("Enter string from user");
	gets(str);
	for(i=0; str<='\0';i++)
	{
	count++;
	}
	printf("%d",count);
	return 0;
	
 	}
