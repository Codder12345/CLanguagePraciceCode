#include<stdio.h>
int main()
{
	int n,rem,i=1,j,temp,sum,f;
	printf("Enter limit=");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=0;
		temp=i;
		while(temp!=0)
		{
			rem=temp%10;
			f=1;j=1;
			while(j<=rem)
			{
				f=f*j;
				j++;
			}
			sum=sum+f;
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("\n%d",i);
		}
		
		i++;
	}
	
	
}
