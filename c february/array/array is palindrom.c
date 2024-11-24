#include<stdio.h>
int main()
{
	int s1,i,j,flag;
	printf("\n Enter size of an array:");
	scanf("%d",&s1);
	for(i=0;i<s1;i++)
	{
		scanf("%d",&a[i]);
	}
	flag=0;
	for(i=0;j=4;i<j;i++,j--)
	{
		if(a[i]==a[j])
		{
			flag=1;break;
		}
	}
	if(flag)
	{
		printf("Array is palindrome");
	}
	else
	{
		printf("Array is not palindrom");
	}
}
