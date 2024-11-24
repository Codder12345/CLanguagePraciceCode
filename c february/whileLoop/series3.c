#include<stdio.h>
int main()
{
	int i,no=16;
	for(i=1;i<=9;i++)
	{
		printf("\t%d %d",no,i*i);
		no=no-2;
	}
	return 0;
}
