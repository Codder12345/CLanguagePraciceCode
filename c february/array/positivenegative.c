#include<stdio.h>
int main()
{
	int a[5],i;
	printf("\nEnter element 5=");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\npositive numbers in array:");
	for(i=1;i<=5;i++)
	{
		if(a[i]>0)
		{
			printf("\n%d",a[i]);
		}
}
printf("\nnegative numbers in array=");
for(i=1;i<=5;i++)
{
	if(a[i]<0)
	{
		printf("\n%d",a[i]);
	}
}
}
