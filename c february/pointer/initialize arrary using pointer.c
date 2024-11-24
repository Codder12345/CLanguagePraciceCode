#include<stdio.h>
int main()
{
	int a[5],i,*ptr,sum=0;
	ptr=&a[0];
	printf("\n Enter array element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("\nDiaplay array:");
	for(i=0;i<5;i++)
	{
		printf("\n%d",*(ptr+i));
	  sum=sum+*(ptr+i);
	}
	printf("\n%d",sum);
}
