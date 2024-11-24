#include<stdio.h>
int main()
{
	int n,rem,fact,i=1,j,temp,sum=0;
	printf("Enter limit");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=0;
		temp=i;
		
		while(temp!=0)
		{
			rem=temp%10;
			fact=1;
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
		i++;
	}
	return 0;
}
