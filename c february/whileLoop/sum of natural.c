#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter no=");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of natural number bitween 1 to n=%d",sum);
	return 0;
	
}
