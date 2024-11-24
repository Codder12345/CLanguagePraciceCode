#include<stdio.h>
int strong(int);
int main()
{
	int range;
	printf("\n Enter range of prime number:");
	scanf("%d",&range);
	strong(range);
}
int strong(int range)
{
	int i,temp,p,rem,j,sum;
   for(i=1;i<=range;i++)
   {
   	temp=i;
	 p=1;
   	sum=0;
   	while(temp!=0)
   	{
   		rem=temp%10;
   		j=1;
   		if(j<=rem)
   		{
   			p=p*j;
		}
   		temp=temp/10;
   		sum=sum+p;
	   }
	   if(sum==i)
	   {
	   	printf("%d",i);
	   }
   }
}
