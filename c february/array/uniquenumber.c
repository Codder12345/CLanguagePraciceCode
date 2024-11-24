#include<stdio.h>
int main()
{
	int a[10],j,f=0,i,count,sum;
	printf("\n Enter array element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	count=0;
	for(i=0;i<5;i++)
     {
	 for(j=i+1;j<5;j++)
	 {
	   if(a[i]!=a[j])
	   {
	   	count=1;
	   	break;
	   }
	 }
	 }
	 if(count==1)
	 {
	 	printf("%d",a[j]);
	 }
	
		return 0;
}
