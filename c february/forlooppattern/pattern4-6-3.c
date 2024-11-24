#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i+64)
			{
				printf("%c",64+i);
			}
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
