#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c,i,j,sum;
	printf("\nEnter first array element:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("\nFirst array:\n");
	 //Display First array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][j]);
		}
		printf("\n");
	}
		printf("\nEnter first array element:");
	 //second array:
	 	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("\nSecond array:\n");
	//Display second array
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	printf("\n sum of two array\n :");
	//sum of two array:
		for(i=0;i<3;i++)
	{
		int sum=0;
		for(j=0;j<3;j++)
		{
		    sum=a[i][j]+b[i][j];
			printf("\t%d",sum);
		}
		printf("\n");
	}
	
}
