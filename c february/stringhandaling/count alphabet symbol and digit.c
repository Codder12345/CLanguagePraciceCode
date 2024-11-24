#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	printf("Enter string from user:");
	gets(s1);
	int i,count1=0,count2,count3;
	for(i=0;i<=s1[i];i++)
	{
		if((s1[i]>='A' && s1[i]<='Z')||(s1[i]>='a'&&s1[i]<='z'))
		{
			count1++;
		}
		else if(s1[i]>='0'&&s1[i]<='9')
		{
			count2++;
			}	
			else{
				count3++;
			}
	}
	printf("\n count of Alphabet in string is :%d",count1);
	printf(" \ncount of digit string is :%d",count2);
	printf(" \ncount of special symbol in string is :%d",count3);
	
	return 0;
}
