#include<stdio.h>
int strong(int);
int main()
{
	int range;
	printf("\n Enter range of prime number:");
	scanf("%d",&range);
	strong(range);
}
int strong(int n)
{
	int sum,j,temp,rem,fact,i;
		for(i=1;i<=n;i++)
	{
		sum=0;
		temp=i;
		
		while(temp!=0)
		{
			rem=temp%10;
			fact=1,j=1;
			while(j<=rem)
			{
				
				fact=fact*j;
				j++;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		
		if(sum==i)
		{
			printf("\n%d",i);
		}
	}
   
}
