#include<stdio.h>
int main()
{
	int a[5],i,sum=0,j;
	printf("\nEnter array element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	//sum of all element in array
	for(i=0;i<5;i++)
	{
	 sum=sum+a[i];
	}
printf("\nSum of all element in array %d",sum);
}
