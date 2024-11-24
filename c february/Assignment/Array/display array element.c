#include<stdio.h>
int main()
{
	int i,a[5];
	printf("Enter five element in array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Display array element:");
		for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
}
