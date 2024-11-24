#include<stdio.h>
int main()
{
	int a[5],j,i,temp,count;
	printf("Enter array element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
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
	 count=1;
	for(i=0;i<5;i++)
	{
	
	   if(a[i]==a[i+1])
	   {
	   	 count++;
	   }
	   else
	   {
	   	printf("\n%d--->%d",a[i],count);
	   	count=1;
	   }
	}
	
	
}
