#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter no=");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==1)
		{
			sum=sum+i;
		}
		i++;
	}
	printf("sum of natural number bitween 1 to n=%d",sum);
	return 0;
	
}
