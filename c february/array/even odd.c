#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter 5 element of array=");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d",a[i]);
		}
	}
	return 0;
}
