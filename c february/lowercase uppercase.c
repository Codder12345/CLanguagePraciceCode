#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("\nEnter char=");
	scanf("%c",&ch);
	(ch>='a'&&ch<='z')?printf("\n alphabate is lowercase."):(ch>='A' && ch<='Z')?printf("\n alphabate is uppercase."):printf("not alphabate");
	return 0;
}
