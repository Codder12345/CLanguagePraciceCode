#include<stdio.h>
int main()
{
	char ch='a';
	while(ch>='a'&&ch<='z')
	{
		printf("\t%c ",ch);
		ch++;
	}
	return 0;
}
