#include<stdio.h>
int main()
{
	int size,n,temp,i,j;
	int a[i];
	printf("\nEnter size of array element");
	scanf("%d",&size);
	printf("\n Enter array element");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\n Enter value of n");
	scanf("%d",&n);
	   n=n%size;
	for(i=0;i<n;i++)
	{
		temp=a[size-1];
		for(j=size-1;j>0;j--)
		{
			a[j]=a[size-1];
		}
		a[0]=temp;
	}
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
	
}
