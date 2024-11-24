#include<stdio.h>
int main()
{
	int s1,s2,s3,i,j,temp;
	printf("Enter  size of 1st array element= ");
	scanf("%d",&s1);
	int a[s1];
	printf("\nEnter array value:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	int b[s2];
	printf(" Enter  size second array element:");
	scanf("%d",&s2);
	printf("\nEnter 2nd array");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&b[i]);
	}
	s3=s1+s2;
	int c[s3];
	int k=0;
	for(i=0;i<s1;i++)
	{
		c[k]=a[i];
		k++;
	}
	for(i=0;i<s2;i++)
	{
		c[k]=b[i];
		k++;
	}
	printf("\nmerge array 1 and 2:");
	for(i=0;i<s3;i++)
	{
	   printf("%d",c[i]);
	}
	for(i=0;i<s3;i++)
	{
		for(j=i+1;j<s3;j++)
		{
			if(c[i]>c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			} 
		}
	}
	printf("\nDisplay ascending order array:");
	for(i=0;i<s3;i++)
	{
		printf("\t%d",c[i]);
	}
	
	return 0;
}
