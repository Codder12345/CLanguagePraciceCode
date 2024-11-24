#include<stdio.h>
int main()
{
	int a[5],i,max1,max2;
	printf("\n Enter array element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[0]>a[1])
       {
       	max1=a[0];
       	max2=a[1];
	   }
	   else
	   {
	   	max1=a[1];
	   	max2=a[0];
	   }
	}
       
	for(i=0;i<5;i++)
	{
	  if(a[i]>max1)
	  {
	  	max2=a[i];
	  }
	}
	printf("second greatest number: %d",max2);
	return 0;
}
