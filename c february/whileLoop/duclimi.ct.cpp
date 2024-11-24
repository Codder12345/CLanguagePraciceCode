#include<stdio.h>
int main()
{
	int i=1,j=1,n,sum,rem,f;
	printf("Enter limit");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=0;
		f=0;
		while(j<=i)
		{
			rem=i%10;
			if(rem==0)
			{
				f=1;
			
			}
			j++;
		}
		if(f==1)
		{
			printf("%d\n",i);
		}
		i++;
	}
	
}
