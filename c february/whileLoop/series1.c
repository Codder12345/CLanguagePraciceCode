#include<stdio.h>
int main()
{
	int i, n=8,no=2;
	for(i=1;i<=9;i++)
	{
		printf("\t%d %d",n,no*no*no);
		n=n-1;
		no=no+1;
	}
}
