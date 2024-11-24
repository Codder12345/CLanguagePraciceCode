#include<stdio.h>
int main()
{
	int a[6],i,index,value;
	printf("\nEnter  array element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter index:");
	scanf("%d",&index);
	printf("\nEnter value:");
	scanf("%d",&value);
	for(i=6;i>index;i--)
	{
		a[i+1]=a[i];
	}
	a[index]=value;
	for(i=0;i<5;i++)
	{
		printf("\t %d",a[i]);
	}
 }
