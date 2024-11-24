#include<stdio.h>
int main()
{
	int *ptr1,i,n,*ptr2;
	int a[i];
	ptr1=a;
	printf("Enter array size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr1+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",*(ptr1+i));
	}
	for(i=0;i<n;i++)
	{
		ptr2=ptr1;
	}
	printf("\nCopy ptr 1 into  ptr 2:-\n");
		for(i=0;i<n;i++)
	{
		printf("%d",*(ptr2+i));
	}
	
	return 0;
	
}
