#include<stdio.h>
int main()
{
	int i,j;
	for(i=6;i>=1;i--)
	{
		for(j=1;j<=6;j++)
		{
			if(j>=7-i&&j<=5+i)
			{
				printf("*");
			}
		 else{
				printf("");
			}
			printf(" ");
		}
		printf("\n");
	}
}
