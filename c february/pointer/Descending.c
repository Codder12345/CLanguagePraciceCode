#include<stdio.h>
int main()
{
	int *ptr,a[5],i,mid,start,end,temp;
	int size=sizeof(a)/sizeof (a[0]);
	printf("Array element=");
	for(start=0;start<size;start++)
	{
		scanf("%d",&a[start]);
	}
	mid=size/2;
	end=(size-1);
	for(start=0;start<mid;start++)
	{
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		end--;
	}
	printf("\nDisplya revers array:");
	for(start=0;start<size;start++)
	{
		printf("%d\t",a[start]);
	}
	ptr=a;
		printf("\nDisplya revers array:");
	for(start=0;start<size;start++)
	{
		printf("%d\t",*(a[start]);
	}
	return 0;
}
