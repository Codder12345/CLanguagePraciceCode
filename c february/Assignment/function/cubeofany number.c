#include<stdio.h>
#include<conio.h>
int cube(int n)
{
	int c;
	c=n*n*n;
	return c;
}
void main()
{
	int cube( int);
	int n;
	printf("\n Enter number from user:");
	scanf("%d",&n);
	int result=cube(n);
	printf("%d",result);
}
