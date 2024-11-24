#include<stdio.h>
int main()
{
	int a[100],n,i,*ptr,sum=0;
	printf("\n Enter array size");
	scanf("%d",&n);
	ptr=a;
	printf("\n Enter array element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("\nDiaplay array:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",*(ptr+i));
	      sum=sum+*(ptr+i);
	}
	printf("\n%d",sum);
}
