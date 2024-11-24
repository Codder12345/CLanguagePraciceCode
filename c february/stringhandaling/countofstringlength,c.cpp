#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	printf("Enter string from user:");
	gets(s1);
	int i,count=0;
	for(i=0;s1[i]!='\0';i++)
	{
		count++;	
	}
	printf(" count of string length\n%d",count);
	return 0;
}
