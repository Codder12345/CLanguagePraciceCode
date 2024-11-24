#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
		if(j<=i)
		{
				if(i%2==1)
			{
				printf("%d",j);
			}
			else
			{
				printf("%c",64+j);
			}
		}
		
		}
		printf("\n");
	}
	return 0;
}
