#include<stdio.h>
int main()
{
	int a[10],j,i,count;
	printf("\n Enter array element:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	count=1;
	for(i=0;i<10;i++)
	{
		if(a[i]==a[i+1])
		{
			count++;
		}
		else
		{
			printf("%d--->%d\n",a[i],count);
			count=1;
		}
	}
	
	
}
