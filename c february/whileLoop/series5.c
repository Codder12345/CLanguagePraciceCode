#include<stdio.h>
int main()
{
	int i, n=2,no=9;
	for(i=1;i<=9;i++)
	{
		printf("\t%d %d",n*i,no*no*no);
		no=no-1;
	}
}
