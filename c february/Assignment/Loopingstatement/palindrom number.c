#include<stdio.h>
int main()
{
	int i,j,count;
	for(i=1;i<=5;i++)
	{
		count=1;
		for(j=1;j<=9;j++)
		{
			if(j>=6-i && j<=4+i)
			{
				if(j<5)
				{
					printf("%d",count++);
				}
				else
				{
					printf("%d",count--);
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

