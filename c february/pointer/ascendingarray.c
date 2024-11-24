#include<stdio.h>
int main()
{
	int  *ptr,a[5],i;
	printf("\nEnter array element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=a;
	//array ascending order
		for(i=0;i<5;i++)
	{
		printf("%d---->%d\n",ptr+1,*(ptr+i));
	}
}
