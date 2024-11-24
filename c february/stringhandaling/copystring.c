#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("\n Enter string from user");
	gets(str1);
	printf("%s",str1);
	int count=0,i;
	for(i=0;i<str1[i];i++)
	{
		count++;
	}
	printf("\n%d",count);
	return 0;
}
