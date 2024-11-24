#include<stdio.h>
int main()
{
	int a[5],i,j,temp;
	printf("\n Enter array element sorted:");
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
	printf("Display sorted array:");
	for(i=0;i<5;i++)
    {
    	printf("\n%d",a[i]);
	}
   printf("\n  Display Even element in the array");
   for(i=0;i<5;i++)
   {
   	
   	if(a[i]%2==0)
   	{
   		printf("\n%d",a[i]);
	   }
  }
  printf("\n  Display odd element in the array");
   for(i=0;i<5;i++)
   {
   	
   	if(a[i]%2==1)
   	{
   		printf("\n%d",a[i]);
	   }
}
}
