#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	char s2[100];
	printf("Enter string 1");
	gets(s1);
     int i, j=0;
	for(i=0;i<s1[i]!='\0';i++)
	{
		s2[j]=s1[i];
		j++;
	}
	printf(" \nstring1 is:%s",s1);
	printf("\n string2 is:%s",s2);
	return 0;
}
