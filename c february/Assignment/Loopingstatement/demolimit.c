#include<stdio.h>
int main()
{
	int limit,i=2,j=2,count;
	printf("Enter limit=");
	scanf("%d",&limit);
	while(j<=limit)
	{
		count=0;
		while(i<=j/2)
		{
			if(j%i==0)
			{
				count++;
			}
			i++;
		}
		if(count==0)
		{
			printf("\n%d",j);
		}
		j++;
	}
}
