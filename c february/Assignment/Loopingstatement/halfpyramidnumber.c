#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i>=j)
			{
				if(j%2==0)
				{
					printf("%d",j);
				}
				else{
					printf("%d",j);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
