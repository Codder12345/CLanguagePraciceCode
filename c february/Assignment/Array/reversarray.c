#include<stdio.h>
int main()
{
	int a[5],i,mid,end,temp;
	printf("Enter array element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	mid=5/2;
	end=(5-1);
	for(i=0;i<mid;i++)
	{
		temp=a[i];
		a[i]=a[end];
		a[end]=temp;
		end--;
	}
	printf("\n After revers:");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
}
