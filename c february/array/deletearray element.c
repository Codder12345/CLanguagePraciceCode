#include<stdio.h>
int main()
{
	int s1,i,index;
	printf(" \nEnter size of an array:");
	scanf("%d",&s1);
	int a[s1];
	printf("\nEnter array Element:");
	for(i=0;i<s1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\noriginal array:");
	for(i=0;i<s1;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n Enter indedex we have to delete the element:");
	scanf("%d",&index);
	for(i=0;i<s1;i++)
	{
		a[i]=a[i+1];
	}
	printf("\n After deleting element Array:");
	for(i=0;i<s1-1;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
