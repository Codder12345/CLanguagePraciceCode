#include<stdio.h>
int main()
{
	int a[5],i,j,flag;
	int n=sizeof(a)/sizeof(a[0]);
	printf("Enter the array values:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
	{
		flag=0;
		if(a[i]!=a[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Array is  Not palindrome");
	}
	else
	{
			printf("Array is palindrome");
	}
}
