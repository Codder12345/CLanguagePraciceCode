#include<stdio.h>
int main()
{
	int getnatural(int,int);
	   int end,start=1;
	printf("Enter  end value:");
	scanf("%d",&end);
	getnatural(start,end);
}
int getnatural(int start,int end)
{
	int i;
	for(i=start;i<=end;i++)
	{
		printf("\n%d",i);
}
}
