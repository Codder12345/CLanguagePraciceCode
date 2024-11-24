#include<stdio.h>
int main()
{
	int  a[5],i,j,count,size,mid;
	printf("\nEnter array size");
	scanf("%d",&size);
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	size=5/2;
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	
	for(j=i+1;j<5;j++)
	{
		count=0;
		if(a[i]==a[j])
		{
			count++;
		}
	}
	if(count>size)
	printf("\narray is major.");
	else
	printf("\n  array is not major.");
	return 0;
	
}
