#include<stdio.h>
int main()
{
	int a[5],j,temp,i;
	printf("\n Enter array element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	//ascending order1
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
		for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	
}
