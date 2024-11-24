#include<stdio.h>
int main()
{
	int n,i,j;
	int a[i];
 printf("\n Enter size of array");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 }
   for(i=0;i<n;i++)
   {
   	int temp=a[i];
   	int sum=0;
   	for(j=1;j<a[i];j++)
   	{
   		if(a[i]%j==0)
   		{
   		sum=sum+j;
		   }
	   }
	   if(sum==temp)
	   {
	   	printf("\t%d",a[i]);
	   }
   }
	return 0;
},
