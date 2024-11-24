#include<stdio.h>
int main()
{
	int i=1,j=1,n,sum;
	printf("Enter limit");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=0;
		j=1;
		while(j<i)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
			j++;
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
		i++;
	}
	
}
