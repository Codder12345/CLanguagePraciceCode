#include<stdio.h>
int main()
{
	int a[6],i,value,index;
	printf("\n Enter element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter value:");
	scanf("%d",&value);
	printf("\nEnter index");
	scanf("%d",&index);
	for(i=6;i>index;i--)
	{
		a[i]=a[i-1];
	}
 	a[index]=value;
		for(i=0;i<6;i++)
	{
		printf("\n%d",a[i]);
	}
}
